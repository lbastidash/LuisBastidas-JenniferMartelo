#include <iostream>
#include <fstream>
#include <math.h>
double f(double x)
{
    double y= exp(-pow(x,2));
    return y;
}
double dC(double x)
{
    double h=0.01;
    double df= (f(x+h) - f(x))/h;
    return df;
}
int main()
{
    int N=2*20./0.01;
    double x=-20;
    
    std::ofstream *File; // Definimos apuntador

	File = new std::ofstream[2]; // Reservamos memoria

	File[0].open( "MisDatos.txt", std::ofstream::trunc ); // Abrir y dejar listo para escribir

	std::cout << File  << std::endl;

    for(int i=0;i<=N;i++)
    {
    File[0] << x << " " << dC(x) << std::endl;
    x = x +0.01;
    
    }

    File[0].close();

    return 0;
}