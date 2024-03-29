#include <iostream>
#include <cmath>

using namespace std;

long unsigned FactorialIterativ(int n)
{
    long unsigned fact = 1;
    for(int i=1; i<=n; i++)
        fact = fact * i;
    return fact;
}

long unsigned FactorialRecursiv(int n)
{
    if(n<=1) return 1;
    else return FactorialRecursiv(n-1)*n;
}

long long unsigned Permutari(int n)
{
    return FactorialIterativ(n);
}

long long unsigned Aranjamente(int n,int m)
{
    long long unsigned p = 1;
    for(int i=n; i>n-m; i--)
    {
        p*=i;
    }
    return p;
}

long long unsigned Combinari(int n, int m)
{
    long long unsigned p = 1, q = 1;
    for(int i=2; i<=m; i++)
    {
        q*=i;
        p*=(n-i+1);
    }
    return p*n/q;
}

long long unsigned PermutariCuRepetitii(int n)
{
    return pow(n,n);
}

long long unsigned AranjamenteCuRepetitii(int n, int m)
{
    return pow(n,m);
}

long long unsigned CombinariCuRepetitii(int n, int m)
{
    long long unsigned p = 1, q = 1;
    for(int i = 1; i <= m; i++)
    {
        q *= i;  // m!
        p *= (n + m - i);  // (n + m - 1)!
    }
    return p/q;
}



int main()
{
    system("color E0");
    system("cls");
    cout << "Proiectul nr. 2 al studentului Ciubara Corneliu, grupa IS11Z. Elemente de combinatorica" << endl << endl;

    int n, m;
    cout << "Nr. total: ";
    cin >> n;
    cout << "Cate:  ";
    cin >> m;
    cout << "Factorial iterativ" << endl;
    for(int j=0; j<=n; j++)
    {
        cout << j << "! = " << FactorialIterativ(j) << endl;
    }
    cout << endl;
    cout << "Factorial recursiv" << endl;
    for(int j=0; j<=n; j++)
    {
        cout << j << "! = " << FactorialRecursiv(j) << endl;
    }
    cout << "Permutari din " << n << " elemente: " << Permutari(n) << endl;
    cout << "Aranjamente din " << n << " elemente cate " << m << " elemente: " << Aranjamente(n,m) << endl;
    cout << "Combinari din " << n << " elemente cate " << m << " elemente: " << Combinari(n,m) << endl;
    cout << "Permutari cu repetitii din " << n << " elemente: " << PermutariCuRepetitii(n) << endl;
    cout << "Aranjamente cu repetitii din " << n << " elemente cate " << m << " elemente: " << AranjamenteCuRepetitii(n,m) << endl;
    cout << "Combinari cu repetitii din " << n << " elemente cate " << m << " elemente: " << CombinariCuRepetitii(n,m) << endl;
    return 0;
}
