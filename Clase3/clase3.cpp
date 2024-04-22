#include  <iostream>
#include <string>

using namespace std;

int main () {
    //Actividad nro1
    int nro1, nro2, nro3;

    cout<<"Ingrese 3 numeros"<<endl;
    cin>> nro1 >>nro2 >>nro3;

    if (nro1>nro2 && nro1>nro3)
    {
        cout<< "El numero mayor es "<< nro1 << endl;
    }
    else {
        if (nro2>nro3 && nro2>nro1)
        {
            cout<< "El numero mayor es "<< nro2<< endl;
        }
        else {
            cout<<"El numero mayor es "<< nro3<< endl;
        }
    }
    //Fin actividad nro1

    //Actividad nro2
    int edad;

    cout<<"Ingrese su edad"<<endl;
    cin>> edad;

    if (edad>=18)
    {
        cout<<"La persona es mayor de edad"<<endl;
    }
    else {
        cout<<"La persona es menor de edad"<<endl;
    }
    //Fin actividad nro2

    //Actividad nro3
    int year;

    cout<<"Ingrese el ano"<<endl;
    cin>> year;

    if ( ((year%4)==0 && (year%100)!=0) || ((year%100)==0 && (year%400)==0) )
    {
        cout<<"El ano ingresado es bisiesto"<<endl;
    }
    else {
        cout<<"El ano ingresado no es bisiesto"<<endl;
    }
    //Fin actividad nro3

    //Actividad nro4
    int dia;

    cout<<"igrese un numero del 1-7"<<endl;
    cin>>dia;

    switch (dia)
    {
    case 1:
        cout<<"dia lunes"<<endl;
        break;
    case 2:
        cout<<"dia martes"<<endl;
        break;
    case 3:
        cout<<"dia miercoles"<<endl;
        break;
    case 4:
        cout<<"dia jueves"<<endl;
        break;
    case 5:
        cout<<"dia viernes"<<endl;
        break;
    case 6:
        cout<<"dia sabado"<<endl;
        break;
    case 7:
        cout<<"dia domingo"<<endl;
        break;
    
    default:
        cout<<"El numero "<<dia<<" no corresponde a un dia de la semana"<<endl;
        break;
    }
    //Fin actividad nro4

    //Actividad nro5
    char letra;

    cout<<"Ingrese una letra"<<endl;
    cin>>letra;

    switch (letra)
    {
    case 'a' :
        cout<<"es una vocal"<<endl;
        break;
    case 'e' :
        cout<<"es una vocal"<<endl;
        break;
    case 'i' :
        cout<<"es una vocal"<<endl;
        break;
    case 'o' :
        cout<<"es una vocal"<<endl;
        break;
    case 'u' :
        cout<<"es una vocal"<<endl;
        break;
    default:
        cout<<"Es una consonante"<<endl;
        break;
    }
    //Fin actividad nro5

    //Actividad nro6
    int numero1, numero2, operacion, total;

    cout<<"Ingrese un numero"<<endl;
    cin>>numero1;

    cout<<"Ingrese la operacion que desea realizar con esos numeros"<<endl;
    cout<<"1.suma"<<endl;
    cout<<"2.resta"<<endl;
    cout<<"3.multiplicacion"<<endl;
    cout<<"4.division"<<endl;
    cin>>operacion;

    cout<<"Ingrese otro numero"<<endl;
    cin>>numero2;

    switch (operacion)
    {
    case 1:
        total = numero1+numero2;
        cout<<"total suma= "<<total<<endl;
        break;
    case 2:
        total = numero1-numero2;
        cout<<"total resta= "<<total<<endl;
        break;
    case 3:
        total = numero1*numero2;
        cout<<"total multiplicacion= "<<total<<endl;
        break;
    case 4:
        total = numero1/numero2;
        cout<<"total division= "<<total<<endl;
        break;
    default:
        cout<<"El numero "<<operacion<<"no corresponde a un numero de operacion"<<endl;
        break;
    }
    //Fin Actividad nro6


    

}