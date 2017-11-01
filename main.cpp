#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

int cubo(int);

int main(int argc, char **argv)
{
    int a;
    int resultado;
    
    cout << "Entre com o valor a ser calculado: ";
    cin >> a;
    cout << "\n";
    
    resultado = cubo(a);
    
    cout << a << " elevado ao cubo: " << resultado << "\n";
    
    return 0;
}

int cubo (int x)
{
    return x*x*x;
}