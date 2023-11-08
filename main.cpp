#include <iostream>
using namespace std;

long long unsigned FactorialIterativ(unsigned n)
{
    long long unsigned f = 1;
    for(unsigned i=2; i<=n; i++)
    {
        f *= i;
    }
    return f;




}long long unsigned FactorialIterativ1(unsigned n)
{
    if (n<=1) return 1;
    return FactorialIterativ(n-1)*n;
}



int main()
{
    unsigned i, n = 10;
    cout << "Proiect numarul 2 elaborat de Ciubara Corneliu!" << endl;
    cout << "Tema: Elemente din Combinatorica" << endl;

    for(i=0; i<=n; i++)
    {
            cout << i << "! = " << FactorialIterativ(i) << endl;
    }
    cout << "Recursiv\n";
    for(i=0; i<=n; i++)
    {
            cout << i << "! = " << FactorialIterativ1(i)<<endl;
    }
    return 0;
}
