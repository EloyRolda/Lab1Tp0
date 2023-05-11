
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    return 0;
}




void Punto1Capital()
{

    system("cls");
    float Inversion, Ganancia, Razon;
    Razon = 0.02;


    printf("Cuando desea invertir: ");
    scanf("%f",&Inversion);

    Ganancia = Inversion * Razon;
    printf("Su ganancia sera de %.2f\n", Ganancia);
    printf("Total en cuenta seria: %.2f", Ganancia + Inversion);
    system("pause");

}

void Punto2Tienda()
{

    system("cls");
    float Compra, Descuento, Total;
    Descuento = 0.15;

    printf("Cuanto desea gastar: ");
    scanf("%f",&Compra);

    Total = Compra - (Compra * Descuento);


    printf("Su total sera de %.2f", Total);

    system("pause");
}

void Punto3Maestro()
{

    system("cls");

    int Hombres, Mujeres, TotalAlumnos, PorcentajeMujeres, PorcentajeHombres;

    printf("Ingrese la cantidad de hombres: ");
    scanf("%i",&Hombres);
    printf("Ingrese la cantidad de mujeres: ");
    scanf("%i",&Mujeres);
    TotalAlumnos = Hombres + Mujeres;

    PorcentajeHombres = (Hombres * 100) / TotalAlumnos;
    PorcentajeMujeres = (Mujeres * 100) / TotalAlumnos;

    printf("El porcentaje de Mujeres es de %i\n", PorcentajeMujeres);
    printf("El porcentaje de Hombres es de %i\n", PorcentajeHombres);

    system("pause");
}


//Problemas COndicionales Selectivos Simples


void Punto1Notas()
{

    int Nota[3], Total, Requerido;

    Requerido = 7;

    printf("Ingrese la Primera nota: ");
    scanf("%i", &Nota[0]);

    printf("Ingrese la Segunda nota: ");
    scanf("%i", &Nota[1]);

    printf("Ingrese la Tercera nota: ");
    scanf("%i", &Nota[2]);

    Total = Nota[0] + Nota[1] + Nota[2];

    system("cls");
    if(Total >= Requerido)
    {

        printf("Aprobado\n");

    }
    else
    {
        printf("Desaprobado\n");

    }

}

void Punto2Almacen()
{

    system("cls");
    float Descuento, MinimoCompra, Compra, Total;

    Descuento = 0.2;
    MinimoCompra = 5000;

    printf("Ingrese el total de su compra: \n");
    scanf("%f", &Compra);


    if(Compra >= MinimoCompra)
    {

        //AplicaDescuento
        Total = Compra - (Compra * Descuento);


    }
    else
    {

//Se quedo sin descuento
        Total = Compra;

    }


    printf("Su total sera de %.2f\n", Total);


}



void Punto3Salario()
{

    system("cls");

    int HorasTrabajadas, PagoPorHora, PagoHoraExtra, Total, MinimoHoras;

    MinimoHoras = 40;
    PagoPorHora = 300;
    PagoHoraExtra = 400;

    printf("Ingrese sus horas trabajadas: ");
    scanf("%i", &HorasTrabajadas);

    if(HorasTrabajadas >=MinimoHoras + 1)
    {


        Total = (MinimoHoras* PagoPorHora) + ((HorasTrabajadas - MinimoHoras)* PagoHoraExtra);

    }
    else if (HorasTrabajadas == MinimoHoras || HorasTrabajadas <= MinimoHoras)
    {


        Total = HorasTrabajadas *PagoPorHora;


    }
    printf("Deberias Comprar %i", Total);




}


void Punto4Algoritmo()
{

    system("cls");

    int Numero[2];

    printf("Ingrese el Primer Numero: ");
    scanf("%i", &Numero[0]);

    printf("Ingrese el Segundo Numero: ");
    scanf("%i", &Numero[1]);

    printf("Escrito de forma ascendente seria: \n\n");


    if(Numero[0] < Numero[1])
    {

        printf("%i - %i\n", Numero[0], Numero[1]);




    }
    else if (Numero[0] > Numero[1])
    {


        printf("%i - %i\n", Numero[1], Numero[0]);


    }
    else
    {


        printf("Los numeros son iguales Caracol\n");


    }


}

void Punto5Calcule()
{
    system("cls");

    float PrecioCamisa, Cantidad, CantMinima, Total, DescuentoTres, DescuentoComun;

    PrecioCamisa = 1000;
    DescuentoComun = 0.1;
    DescuentoTres = 0.2;
    CantMinima = 3;

    printf("Cuantas camisas va a llevar: ");
    scanf("%f", &Cantidad);

    if(Cantidad <= CantMinima)
    {

        Total = (PrecioCamisa * Cantidad) - ((PrecioCamisa * Cantidad) * DescuentoComun);


    }
    else
    {
        Total = (PrecioCamisa * Cantidad) - ((PrecioCamisa * Cantidad) * DescuentoTres);

    }

    printf("El total a pagar seria: %.2f", Total);


}

//Condicionales Selectivos


void Punto1LeerNum()
{

    system("cls");


    int Num[2], Result;

    printf("Ingrese nro 1: ");
    scanf("%i",&Num[0]);

    printf("Ingrese nro 2: ");
    scanf("%i",&Num[1]);

    if(Num[0] == Num[1])
    {


        Result= Num[0] * Num[1];



    }
    else if(Num[0] > Num[1])
    {

        Result = Num[0] - Num[1];



    }
    else
    {

        Result = Num[0] + Num[1];

    }
    printf("%i", Result);
}

void Punto2TresNum()
{

    int Num[3], Mayor;

    printf("Ingrese nro 1: ");
    scanf("%i",&Num[0]);

    printf("Ingrese nro 2: ");
    scanf("%i",&Num[1]);

    printf("Ingrese nro 3: ");
    scanf("%i",&Num[2]);

    if(Num[0] > Num[1] && Num[0] > Num[2])
    {
        Mayor = Num[0];
    }
    else if(Num[1] > Num[0] && Num[1] > Num[2])
    {

        Mayor = Num[1];
    }
    else if(Num[2] > Num[0] && Num[2] > Num[1])
    {
        Mayor = Num[2];
    }
    printf("El mayor es: %i", Mayor);


}


//Repeticiones

void Punto1Promedioalumno()
{

    system("cls");
    float nota[7], Promedio, CantNotas;
    int N = 0;
    CantNotas = 7;
    do
    {
        printf("Ingrese la nota nro %i: ", N+1);
        scanf("%f", &nota[N]);
        N ++;


    }
    while(N != CantNotas);

    N = 0;
    do
    {
        Promedio = Promedio + nota[N];
        N++;
    }
    while(N != CantNotas);


    Promedio = Promedio / CantNotas;
    printf("El primedio del alumno es: %.2f", Promedio);



}


void Punto2CuboyCuarta()
{
    system("cls");
    int Num[10];
    int N = 0;
    do
    {

        scanf("%i", &Num[N]);

        printf("Cubo: %i\nCuarta: %i\n", Potencia(Num[N], 3), Potencia(Num[N], 4)) ;



        N ++;
    }
    while(N != 10);


}

int Potencia(Nro,Elevado)
{
    system("cls");
    int N = 1;
    int Total = Nro;
    do
    {
        Total = Total * Nro;

        N++;
    }
    while(Elevado != N);

    return Total;

}


void Punto3SoloPosit()
{
    system("cls");
    int Num[10];
    int N = 0;

    do
    {
        scanf("%i", &Num[N]);


        N ++;
    }
    while(N != 10);

    N = 0;

    while(N !=10)
    {
        N++;
        if(Num[N]>0)
        {
            printf("| %i ", Num[N]);
        }


    }
}


void Punto4Numeros()
{
    system("cls");
    int Num[15];
    int N = 0;

    do
    {
        scanf("%i", &Num[N]);


        N ++;
    }
    while(N != 15);

    N = 0;

    while(N !=15)
    {
        N++;

        if(Num[N]>0)
        {
            printf("| %i ", Num[N]);
        }
        else
        {

            Num[N] = - Num[N];
            printf("| %i ", Num[N]);

        }


    }

}


void Punto5Conjunto()
{
    system("cls");

    int Num[40];
    int N = 0;
    int b = 40;
    int Total;

    do
    {
        scanf("%i", &Num[N]);


        N ++;
    }
    while(N != b);

    N = 0;

    while(N !=b)
    {


        Total = Total + Num[N];
        N++;

    }
    printf("Promedio: %i", Total / b);


}

void Punto6Tabla()
{

    system("cls");

    int Num;
    int Tabla = 0;

    printf("Ingrese un numero a mostrar su tabla: ");
    scanf("%i", &Num);

    do
    {
        Tabla ++;
        printf("| %i ", Num * Tabla);


    }
    while(Tabla != 10);



}


