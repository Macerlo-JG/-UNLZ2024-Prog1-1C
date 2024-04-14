//Clase 2

#include <iostream>
using namespace std;

int main()
{
    //consigna 1
    
    int altura, base, area;

    cout <<"Ingrese la altura: "<< endl;
    cin >> altura;

    cout <<"ingrese la base:"<< endl;
    cin >> base;

    area = base * altura;

    cout <<"El area es: "<< area << endl;

    //fin consigna 1
    //consigna 2

    int m, cm;

    cout << "Ingrese la cantidad de centimetros:" << endl;
    cin >> cm;

    m= cm/100;

    cout << "Hay "<< m << " metros en en " << cm << endl;
    
    //fin consigna 2
    //consigna 3

    int dolar, peso, conversion;

    cout << "Cantidad de pesos a convertir:"<<endl;
    cin >> peso;

    cout<<"Cotizacion del dolar actual:"<<endl;
    cin>> dolar;

    conversion=peso/dolar;

    cout<<"la cantidad de dolares totales es de: "<< conversion << endl;

    //fin consigna 3
    //consigna 4
    //me mataste, no sabria como hacerlo
    //fin consigna 4
    //consigna 5

    int radio,ar, perimetro;
    double pi;

    pi=3.141592;

    cout<<"ingrese el radio de la circunferencia: "<< endl;
    cin>> radio;

    perimetro= 2*pi*radio;
    
    ar= pi*(radio*radio);

    cout<<"el preimetro de la circunferencia es: "<<perimetro<< endl;
    cout<<"el area de la circunferencia es: "<<ar<<endl;




    return 0;
    }

