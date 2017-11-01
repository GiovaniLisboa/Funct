#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

int cubo(int);
double cubo(double);
void cuboRef(int &);

int a=10;

int main(int argc, char **argv)
{
    int a, resultadoA;
    double b, resultadoB;
    
    cout << "Entre com o valor inteiro A a ser calculado: ";
    cin >> a;
    cout << "\n";
    
    resultadoA = cubo(a);
    cout << "Resultado do cubo de A: " << resultadoA << "\n";
    cout << "A: " << a << "\n \n";
    
    cuboRef(a);
    cout << "Resultado do cubo de A: " << a << "\n";
    cout << "A: " << a << "\n \n";
    
    resultadoA = cubo(::a);
    cout << "Resultado do cubo de ::A: " << resultadoA << "\n";
    cout << "::A: " << ::a << "\n \n";
    
    cout << "Entre com o valor fracionado B a ser calculado: ";
    cin >> b;
    cout << "\n";
    
    resultadoB = cubo(b);
    cout << "Resultado do cubo de B: " << resultadoB << "\n";
    cout << "B: " << b << "\n \n";
    
    return 0;
}

int cubo (int x)
{
    return x * x * x;
}

double cubo (double x)
{
    return x * x * x;
}

void cuboRef (int &x)
{
    x *= x * x;
}