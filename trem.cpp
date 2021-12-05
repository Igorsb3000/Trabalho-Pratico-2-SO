#include "trem.h"
#include <QtCore>
#include <semaphore.h>

sem_t s[3]; //um semaforo por Trem
sem_t mutex;

//sem_init(&mutex, 0, 1);
int p[3];
int state[3];



//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
    sem_init(&s[ID-1],0,1); // iniciando o seomafar s[ID - 1] trem1 = s[0]
    sem_init(&mutex, 0, 1);
}

void Trem::setVelocidade(int vel){
   velocidade = vel;
}

int Trem::getX(){
    return this->x;
}

int Trem::getY(){
    return this->y;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        switch(ID){
        case 1:     //Trem 1
            if (y == 230 && x <470){ // regiao critica 3 (Y=230 e X<340)e 4
                while(x != 470){
                    sem_wait(&mutex);//down(&mutex); /* entra na regiao critica */
                    //msleep(10);
                    state[0]=3;
                    x+=10;
                    sem_post(&mutex);//up(&mutex);  /* sai da regiao cri­tica */
                }
                //sem_wait(&s[i]);//down(&s[i]); /* bloqueia se os garfos nao foram pegos */
            }
            else if (x == 470 && y < 350) // regiao critica 7
                y+=10;
            else if (x > 200 && y == 350)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x, y);    //Emite um sinal
            break;
        case 2: //Trem 2
            if (y == 230 && x < 740) // regiao critica
                x+=10;
            else if (x == 740 && y < 350)
                y+=10;
            else if (x > 470 && y == 350)
                x-=10;
            else // regiao critica 7
                y-=10;
            emit updateGUI(ID, x, y);    //Emite um sinal
            break;
        case 3: //Trem 3
            if (y == 110 && x < 340)
                x+=10;
            else if (x == 340 && y < 230) // regiao critica 1
                y+=10;
            else if (x > 70 && y == 230) // regiao critica 3
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x, y);    //Emite um sinal
            break;
        default:
            break;
        }
        msleep(velocidade);
    }
}






