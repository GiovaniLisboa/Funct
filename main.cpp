#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;

int cubo(int); //Por valor
double cubo(double); //Sobrecarregada
void cuboRef(int &);//Por referência 
int volumecubo(int b = 1, int l = 1, int h = 1);//Default
int estatica (void); //Estático

int a=10;

int main(int argc, char **argv)
{
    
    int a, resultadoA;
    double b, resultadoB;
    
    cout << "Entre com o valor inteiro A a ser calculado: ";
    cin >> a;
    cout << "\n";
    
    cout << "POR VALOR \n";
    resultadoA = cubo(a);
    cout << "Resultado do cubo de A: " << resultadoA << "\n";
    cout << "A: " << a << "\n \n";
    
    cout << "POR REFERÊNCIA \n";
    cuboRef(a);
    cout << "Resultado do cubo de A: " << a << "\n";
    cout << "A: " << a << "\n \n";
    
    cout << "NO ESCOPO GLOBAL \n";
    resultadoA = cubo(::a);
    cout << "Resultado do cubo de ::A: " << resultadoA << "\n";
    cout << "::A: " << ::a << "\n \n";
    
    cout << "SOBRECARREGADA \n";
    cout << "Entre com o valor fracionado B a ser calculado: ";
    cin >> b;
    cout << "\n";
    
    resultadoB = cubo(b);
    cout << "Resultado do cubo de B: " << resultadoB << "\n";
    cout << "B: " << b << "\n \n";
    
    cout << "DEFAULT \n";
    cout << "Cubo (Base=1, Largura=1, Altura=1) \n";
    resultadoA = volumecubo (1, 2);
    cout << "Resultado do cubo (Base=1, Largura=2, Altura=1): " << resultadoA << "\n";
    
    cout << "ESTATICO \n";
    cout << "D = 10 \n";
    cout << "D + 1" << estatica << "\n";
    cout << "D + 1" << estatica << "\n";
    
    cout << "\n";
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

int volumecubo (int x, int y, int z)
{
    return x * y * z;
}

int estatica (void)
{
    static int d = 10;
    
    d++;
}