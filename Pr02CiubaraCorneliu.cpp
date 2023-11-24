#include <iostream>
using namespace std;

long unsigned FactorialIterativ(int n) {
    long unsigned fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

long unsigned FactorialRecursiv(int n) {
    if(n <= 1) return 1;
    else return FactorialRecursiv(n - 1) * n;
}

long long unsigned Permutari(int n) {
    return FactorialIterativ(n);
}

long long unsigned Aranjamente(int n, int m) {
    return FactorialIterativ(n) / FactorialIterativ(n - m);
}

long long unsigned Combinari(int n, int m) {
    return FactorialIterativ(n) / (FactorialIterativ(m) * FactorialIterativ(n - m));
}

int main() {
    int n = 100, m = 98;

    cout << "Proiectul nr. 2 al studentului Oala Oleg, grupa IS11Z. Elemente de combinatorica" << endl << endl;
    cout << "Elemente din combinatorica" << endl;
    
    cout << "Factorial iterativ" << endl;
    for(int j = 0; j <= n; j++) {
        cout << j << "! = " << FactorialIterativ(j) << endl;
    }

    cout << endl << "Factorial recursiv" << endl;
    for(int j = 0; j <= n; j++) {
        cout << j << "! = " << FactorialRecursiv(j) << endl;
    }

    cout << "\nPermutari din " << n << " elemente: " << Permutari(n) << endl;
    cout << "Aranjamente din " << n << " elemente cate " << m << " elemente: " << Aranjamente(n, m) << endl;
    cout << "Combinari din " << n << " elemente cate " << m << " elemente: " << Combinari(n, m) << endl;

    return 0;
}
