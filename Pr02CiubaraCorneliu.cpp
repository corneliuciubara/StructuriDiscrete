#include <iostream>

using namespace std;

long unsigned FactorialIterativ(int n)
{
    long unsigned fact = 1;
    for(int i=1; i<=n; i++)
        fact = fact * i;
        // ALT fact *= i;
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
   // return FactorialIterativ(n)/FactorialIterativ(n-m);
   long long unsigned p = 1;
   for (int i=n; i>n-m; i--){
    p *= i;
   }
   return p;
}
long long unsigned Combinari(int n,int m)
{
   long long unsigned p = 1, q = 1 ;
 for(int i =2 ;i<=m; i++){
        q*= i+1;
    p *=(n-i+1);
   }
   return p*n/q;
}
int main()
{
    int j,n = 100,m = 98;
    // cout << "Nr total "; cin >> n;
   //  cout << "Cate ? "; cin >> n;
    cout << "Proiectul nr. 2 al studentului Oala Oleg, grupa IS11Z. Elemente de combinatorica" << endl << endl;
   cout << "Elemente din combinatorica" << endl;
    cout << "Factorial iterativ" << endl;
    for(j=0; j<=n; j++);
    {
        cout << j << "! = " << FactorialIterativ(j) << endl;
    }
    cout << endl; cout << "Factorial recursiv" << endl;
    for(j=0; j<=n; j++);
    {
        cout << j << "! = " << FactorialRecursiv(j) << endl;
    }
    cout << "\n Permutari din " <<n << " elemente cate "<< Permutari(n);
    cout << "\n Aranjamente din " <<n << " elemente cate "<< m << " elemente "<< Aranjamente(n,m);
    cout << "\n Combinari din " <<n << " elemente cate "<< m << " elemente "<< Combinari(n,m);
    return 0;
}

// Variante
