#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 3; // nr. de note
    int nota;
    float media;
    int minim, maxim;
    int reper = 8, mici, egale, mari;
    int rest, mediocri, proemin, eminenti;

    system("color F0");

    cout << "Proiect nr. 1  elaborat de Ciubara Corneliu!" << endl;
    // citirea datelor
    cout << "Numarul de studenti > ";
    cin >> n;
    media = 0;
    for(int i=1; i<=n; i++)
    {
        cout << "Nota studentului cu nr. " << i << ": ";
        cin >> nota;
        media += nota;
        if(nota < minim) minim = nota;
        if(nota > minim) minim = nota;
    }
    media /= n;
    cout << "1. Nota medie este: " << setw(3) << setprecision(3) << media;
    cout << "\n2. Cea mai mica nota: " << minim;
    cout << "\n3. Cea mai mare nota: " << maxim;
    // printf("\n1. Nota medie este: %5.2f", media);

    return 0;
}