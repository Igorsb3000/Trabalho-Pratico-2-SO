#include "mainwindow.h"
#include <QApplication>
#include <pthread.h>



// Verifica se o trem esta em uma REGIAO CRITICA
/*void *verificarRegiao(void *i){

}*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
