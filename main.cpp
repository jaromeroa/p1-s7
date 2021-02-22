#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calc(int offset, int age){
    if(offset==0) qFatal("No puede ser 0");
    if(age<=0 || age >120){
        qFatal("Edad falsa");
    }
    return offset*age;
}
int catYears(int age){
    return calc(9,age);
}
int dogYears(int age){
    return calc(7,age);
}
void test(){
    qInfo()<<"Test";
}
void test(int edad = 0){
    qInfo()<<"MI edad es"<<edad;
}
void test(bool activo){
    if(activo){
        qInfo()<<"Activo";
    }else{
        qInfo()<<"Inactivo";
    }
}

//Pass by value - COPY
void testVal(int x){
    x=x*10;
    qInfo()<<"x= "<<x;
}
//Pass by ref - ORIGINAL
void testRef(int &x){
    x=x*10;
    qInfo()<<"x= "<<x;
}

struct laptop {
    int weight;
    double asKilograms(){
        return weight*0.453592;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //test();
    /*int age;
    qInfo()<<"Mete edad:";
    cin >> age;
    qInfo()<<"Tu edad:" << dogYears(age) << "en años de perro";
    qInfo()<<"Tu edad:" << catYears(age) << "en años de gato";*/

    /*int x=5;
    test(true);
    test(22);
    testVal(x);
    qInfo()<<"X= "<<x;
    testRef(x);
    qInfo()<<"X= "<<x;*/

    laptop notebook;
    notebook.weight=5;
    qInfo()<<"Libras: "<<notebook.weight;
    qInfo()<<"Kg: "<<notebook.asKilograms();

    return a.exec();
}

//Si pongo aqui la funcion no se lee, por eso siempre la ponemos arriba
