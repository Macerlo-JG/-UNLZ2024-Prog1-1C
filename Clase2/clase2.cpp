//Clase 2

#include <iostream>
#include <String>
using namespace std;

int main()
{
    //consigna 1
    int altura, base, area, perimetro0;

    cout<<"-------------ingrese los datos para saber el area y el perimetro de un rectangulo------------"<<endl;
    cout <<"Ingrese la altura: "<< endl;
    cin >> altura;

    cout <<"ingrese la base:"<< endl;
    cin >> base;

    area = base * altura;
    perimetro0= 2*(base+altura);

    cout <<"El area del rectangulo es  "<< area<<" y el perimetro de "<<perimetro0<< endl;
    //fin consigna 1

    //consigna 2
    int m, cm;

    cout<<"----------------para pasar de centimetros a metros---------------------"<<endl;
    cout << "Ingrese la cantidad de centimetros:" << endl;
    cin >> cm;

    m= cm/100;

    cout << "Hay "<< m << " metros en en " << cm << endl;
    //fin consigna 2

    //consigna 3
    int dolar, peso, conversion;

    cout<<"-----------Para convertir pesos a dolar ingrese los siguientes datos------------"<<endl;
    cout << "Cantidad de pesos a convertir:"<<endl;
    cin >> peso;

    cout<<"Cotizacion del dolar actual:"<<endl;
    cin>> dolar;

    conversion=peso/dolar;

    cout<<"la cantidad de dolares totales es de: "<< conversion << endl;
    //fin consigna 3

    //consigna 4
    int base1, altura1, Perimetro1, are;

    cout<<"----------Para saber el perimetro de un triangulo equilatero ingrese los siguientes datos----------"<<endl;
    cout<<"ingrese la base"<<endl;
    cin>> base1;

    cout<<"ingrese la altura"<<endl;
    cin>>altura1;

    Perimetro1=base1+base1+base1;
    are=base1*altura1/2;

    cout<<"El perimetro del triangulo es de "<<Perimetro1<<" y el area de: "<<are<<endl;
    //fin consigna 4

    //consigna 5
    int radio,ar, perimetro;
    double pi;

    pi=3.141592;

    cout<<"--------Para saber el perimetro y el area de una circunferencia-----------"<<endl;
    cout<<"ingrese el radio de la circunferencia: "<< endl;
    cin>> radio;

    perimetro= 2*pi*radio;
    
    ar= pi*(radio*radio);

    cout<<"el preimetro de la circunferencia es: "<<perimetro<< endl;
    cout<<"el area de la circunferencia es: "<<ar<<endl;
    //fin consigna 5

    //consigna 6
    int numeroseg, distancia;

    cout<<"ingrese los segundos transcurridos entre el relampago y el trueno:"<<endl;
    cin >> numeroseg;

    distancia = numeroseg/3;

    cout<<"La tormenta esta a: "<<distancia<<" Km"<<endl;
    //fin consigna 6

    //consigna 7
    string Nombres, Apellido, Dirección, Localidad, Provincia, País, Telefono;
    int  Edad;

    cout<<"----------Ingrese sus datos personales---------"<<endl;

    cout<<"ingrese sus nombres"<<endl;
    cin>>Nombres;
    cout<<"ingrese su Apellido"<<endl;
    cin>>Apellido;
    cout<<"ingrese su Edad"<<endl;
    cin>>Edad;
    cout<<"ingrese su Direccion"<<endl;
    cin>>Dirección;
    cout<<"ingrese su Localidad"<<endl;
    cin>>Localidad;
    cout<<"ingrese su provincia"<<endl;
    cin>>Provincia;
    cout<<"ingrese su Pais"<<endl;
    cin>>País;
    cout<<"ingrese su Telefono"<<endl;
    cin>>Telefono;

    cout<<"---------Sus datos personales--------"<<endl;
    cout<<"Nombres: "<<Nombres<<endl;
    cout<<"Apellidos: "<<Apellido<<endl;
    cout<<"Edad: "<<Edad<<endl;
    cout<<"Direccion: "<<Dirección<<endl;
    cout<<"Localidad: "<<Localidad<<endl;
    cout<<"Provincia: "<<Provincia<<endl;
    cout<<"Pais: "<<País<<endl;
    cout<<"Telefono: "<<Telefono<<endl;
    //fin consigna 7


    return 0;
    }

