#include "trem.h"
#include <QtCore>

QSemaphore semaforo1(1);
QSemaphore semaforo2(1);
QSemaphore semaforo3(1);
QSemaphore semaforo4(1);
QSemaphore semaforo5(1);
QSemaphore semaforo6(1);
QSemaphore semaforo7(1);

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

// Setar velocidade.
void Trem::setVelocidade(int velocidade){
    if(velocidade <= 0){
        this->velocidade = 0;
        return;
    }
     this->velocidade = (int) 1000 / velocidade;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        if(this->velocidade == 0){
            emit updateGUI(this->ID, this->x,this->y);
            continue;
        }
        switch(ID){
        case 1:
            //Trem 1

            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 2: //Trem 2

            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 3: //Trem 3

            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 4: //Trem 4


            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        case 5: //Trem 5

            emit updateGUI(ID, x,y);    //Emite um sinal
            break;

        default:
            break;
        }
        msleep(velocidade);
    }
}




