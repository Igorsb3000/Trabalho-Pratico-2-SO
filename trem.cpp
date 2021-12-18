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
Trem::Trem(int ID, int x, int y)
{
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

// Setar velocidade.
void Trem::setVelocidade(int velocidade)
{
    if (velocidade <= 0)
    {
        this->velocidade = 0;
        //~QSemaphore(semaforo1);
        return;
    }
    this->velocidade = (int)1000 / velocidade;
}

//Função a ser executada após executar trem->START
void Trem::run()
{
    while (true)
    {
        if (this->velocidade == 0)
        {
            emit updateGUI(this->ID, this->x, this->y);
            continue;
        }
        switch (ID)
        {
        case 1:
            //Trem 1

            // Quero entrar na Via 1
            if (x == 310 && y == 30){
                semaforo6.acquire();
                semaforo6.release();
                semaforo1.acquire();
            }

            // Quero sair da Via 1 entrar na Via 4
            if (x ==  330 && y == 130){
                semaforo4.acquire();
            }

            // Sai da Via 1
            if (x == 310 && y == 150){
                semaforo1.release();
            }

            // Sai da Via 4
            if (x ==  150 && y == 150){
                semaforo4.release();
            }


            // Movimentação do TREM 1
            if (y == 30 && x < 330)
                x += 10;
            else if (x == 330 && y < 150)
                y += 10;
            else if (x > 60 && y == 150)
                x -= 10;
            else
                y -= 10;
            emit updateGUI(ID, x, y); //Emite um sinal
            break;

        case 2: //Trem 2
            // Na porta de saída para entrar na VIA 2
            if (x == 580 && y == 30){
                semaforo3.acquire();
                semaforo3.release();
                semaforo7.acquire(); //aparentemente resolveu o deadlock dos trens 2, 3 e 5
                semaforo7.release();
                semaforo2.acquire();
            }

            // Quero sair da Via 2 e entrar na Via 7
            if (x ==  600 && y == 130){ //deadlock
                semaforo5.acquire();
                semaforo5.release();
                semaforo7.acquire();
            }

            // Estou na Via 7 e vou liberar a Via 2
            if (x ==  580 && y == 150){
                semaforo2.release();
            }

            // Quero sair da Via 7 e entrar na Via 6
            if (x == 460 && y == 150){
                semaforo4.acquire();
                semaforo4.release();
                semaforo6.acquire();
            }

            // Estou na via 6 e vou liberar a Via 7
            if (x ==  420 && y == 150){
                semaforo7.release();
            }

            // QUERO Sair da Via 6 e entrar na Via 1
            if (x ==  350 && y == 150){
                semaforo1.acquire();
            }

            // Estou na Via 1 e libero a Via 6
            if (x ==  330 && y == 130){
                semaforo6.release();
            }

            // Libero a Via 1
            if (x ==  350 && y == 30){
                semaforo1.release();
            }


            // Movimentação do TREM 2
            if (y == 30 && x < 600)
                x += 10;
            else if (x == 600 && y < 150)
                y += 10;
            else if (x > 330 && y == 150)
                x -= 10;
            else
                y -= 10;
            emit updateGUI(ID, x, y); //Emite um sinal
            break;

        case 3: //Trem 3

            // Quero entrar na Via 3
            if (x ==  730 && y == 150){ //deadlock
                semaforo2.acquire();
                semaforo2.release();
                semaforo3.acquire();
            }

            // Estou na Via 3 e quero entrar na Via 2
            if (x ==  620 && y == 150){
                semaforo2.acquire();
            }

            // Estou na Via 2 e libero a Via 3
            if (x ==  600 && y == 130){
                semaforo3.release();
            }

            // Libero a Via 2
            if (x ==  620 && y == 30){
                semaforo2.release();
            }

            // Movimentaçãodo TREM 3
            if (y == 30 && x < 870)
                x += 10;
            else if (x == 870 && y < 150)
                y += 10;
            else if (x > 600 && y == 150)
                x -= 10;
            else
                y -= 10;

            emit updateGUI(ID, x, y); //Emite um sinal
            break;

        case 4: //Trem 4

            // Quero entrar na Via 4
            if (x == 170 && y == 170){
                semaforo1.acquire(); // acho que o trem 4 travou aqui
                semaforo1.release();
                semaforo5.acquire();
                semaforo5.release();
                semaforo4.acquire();
            }

            // Estou na VIa 4 e quero entrar na Via 6
            if (x == 310 && y == 150){
                semaforo6.acquire();
            }

            // Deixei a Via 4 e estou na Via 6
            if (x == 350 && y == 150){
                semaforo4.release();
            }

            // Estou na VIa 6 e quero entrar na Via 5
            if (x == 420 && y == 150){
                semaforo5.acquire();
            }

            // Estou deixando a Via 6
            if (x == 440 && y == 170){
                semaforo6.release();
            }


            // Estou deixando a via 5
            if (x == 420 && y == 280){
                semaforo5.release();
            }


            // Movimentação do TREM 4
            if (y == 150 && x < 440)
                x += 10;
            else if (x == 440 && y < 280)
                y += 10;
            else if (x > 170 && y == 280)
                x -= 10;
            else
                y -= 10;

            emit updateGUI(ID, x, y); //Emite um sinal
            break;

        case 5: //Trem 5

            // Quero entrar na Via 5
            if (x == 460 && y == 280){
                semaforo7.acquire();
                semaforo7.release();
                semaforo5.acquire();
            }

            // Estou na Via 5 e quero ir para a VIA 7
            if (x == 440 && y == 170){
                semaforo7.acquire();
            }

            // Deixando a Via 5
            if(x == 460 && y == 150){
                semaforo5.release();
            }

            // Estou na Via 7 e quero ir para a Via 3
            if(x == 580 && y == 150){
                semaforo3.acquire();
            }

            // Entrei na Via 3 e Liberei a Via 7
            if(x == 620 && y == 150){
                semaforo7.release();
            }

            // Deixando a Via 3
            if(x == 710 && y == 170){
                semaforo3.release();
            }

            // Movimentação do TREM 5
            if (y == 150 && x < 710)
                x += 10;
            else if (x == 710 && y < 280)
                y += 10;
            else if (x > 440 && y == 280)
                x -= 10;
            else
                y -= 10;
            emit updateGUI(ID, x, y); //Emite um sinal
            break;

        default:
            break;
        }
        msleep(velocidade);
    }

}

void Trem::destruindo_semaforos(){
    semaforo1.~QSemaphore();
    semaforo2.~QSemaphore();
    semaforo3.~QSemaphore();
    semaforo4.~QSemaphore();
    semaforo5.~QSemaphore();
}
