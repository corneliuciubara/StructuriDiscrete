#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
void Line(char lf, char ln, char md, char rt, int nc = 2)
{
    int i;
    printf("%c", lf);
    for (int j = 1; j < nc; j++)
    {
        for (i = 1; i <= 3; i++)
            printf("%c", ln);
        printf("%c", md);
    }
    for (i = 1; i <= 7; i++)
        printf("%c", ln);
    printf("%c", rt);
    cout << endl;
}

// Function for Sheffer stroke (NAND)
void Sheffer(char lf, char ln, char md, char rt, int nc = 2) {
    int i;
    printf("%c", lf);
    for (int j = 1; j < nc; j++) {
        for (i = 1; i <= 3; i++)
            printf("%c", ln);
        printf("%c", md);
    }
    for (i = 1; i <= 7; i++)
        printf("%c", ln);
    printf("%c", rt);
    cout << endl;
    // Generate truth table for Sheffer stroke
    printf("%c A %c B %c A | B %c\n", 186, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (int a = 0; a <= 1; a++)
        for (int b = 0; b <= 1; b++)
            printf("%c %d %c %d %c %3d %3c\n",
                186, a, 179, b, 179, !(a & b), 186);
    Line(200, 205, 207, 188, 3);
}

// Function for Pierce arrow (NOR)
void Pierce(char lf, char ln, char md, char rt, int nc = 2) {
    int i;
    printf("%c", lf);
    for (int j = 1; j < nc; j++) {
        for (i = 1; i <= 3; i++)
            printf("%c", ln);
        printf("%c", md);
    }
    for (i = 1; i <= 7; i++)
        printf("%c", ln);
    printf("%c", rt);
    cout << endl;
    // Generate truth table for Pierce arrow
    printf("%c A %c B %c A ^ B %c\n", 186, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (int a = 0; a <= 1; a++)
        for (int b = 0; b <= 1; b++)
            printf("%c %d %c %d %c %3d %3c\n",
                186, a, 179, b, 179, !(a | b), 186);
    Line(200, 205, 207, 188, 3);
}

// Function for Implication
void Implication(char lf, char ln, char md, char rt, int nc = 2) {
    int i;
    printf("%c", lf);
    for (int j = 1; j < nc; j++) {
        for (i = 1; i <= 3; i++)
            printf("%c", ln);
        printf("%c", md);
    }
    for (i = 1; i <= 7; i++)
        printf("%c", ln);
    printf("%c", rt);
    cout << endl;
    // Generate truth table for Implication
    printf("%c A %c B %c A -> B %c\n", 186, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (int a = 0; a <= 1; a++)
        for (int b = 0; b <= 1; b++)
            printf("%c %d %c %d %c %3d %3c\n",
                186, a, 179, b, 179, (!a) | b, 186);
    Line(200, 205, 207, 188, 3);
}

int main()
{


    int a, b, c;
    system("color F0");
    system("cls");
    cout << "Proiect numarul 1, elaborat de Ciubara Corneliu!" << endl;
    cout << "Tema: Operatii cu multimi\n";



    cout << "\tNegatia:\n";
    Line(201, 205, 209, 187);
    printf("%c A %c not A %c\n", 186, 179, 186);
    Line(199, 196, 197, 182);
    for (int a = 0; a <= 1; a++)
        printf("%c %d %c %3d %3c\n", 186, a, 179, !a, 186);
    Line(200, 205, 207, 188);
    //

    cout << "\tConjunctia(Intersectie):\n";
    Line(201, 205, 209, 187, 3);
    printf("%c A %c B %cA and B%c\n", 186, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (a = 0; a <= 1; a++)
        for (b = 0; b <= 1; b++)
            printf("%c %d %c %d %c %3d %3c\n",
                   186, a, 179, b, 179, a & b, 186);
    Line(200, 205, 207, 188, 3);
    //

    cout << "\tDisjunctia(Reuniunea):\n";
    Line(201, 205, 209, 187, 3);
    printf("%c A %c B %c A or B%c\n", 186, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (a = 0; a <= 1; a++)
        for (b = 0; b <= 1; b++)
            printf("%c %d %c %d %c %3d %3c\n",
                   186, a, 179, b, 179, a | b, 186);
    Line(200, 205, 207, 188, 3);
    //

    cout << "\tDiferenta:\n";
    Line(201, 205, 209, 187, 3);
    printf("%c A %c B %c A - B %c\n", 186, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (a = 0; a <= 1; a++)
        for (b = 0; b <= 1; b++)
            printf("%c %d %c %d %c %3d %3c\n",
                   186, a, 179, b, 179, a & !b, 186);
    Line(200, 205, 207, 188, 3);
    //

    cout << "\tDiferenta simetrica:\n";
    Line(201, 205, 209, 187, 3);
    printf("%c A %c B %cA xor B%c\n", 186, 179, 179, 186);
    Line(199, 196, 197, 182, 3);
    for (a = 0; a <= 1; a++)
        for (b = 0; b <= 1; b++)
            printf("%c %d %c %d %c %3d %3c\n",
                   186, a, 179, b, 179, a ^ b, 186);
    Line(200, 205, 207, 188, 3);

    cout << "\tConectorul Sheffer (NAND):\n";
    Sheffer(200, 205, 207, 187);

    cout << "\tConectorul Pierce (NOR):\n";
    Pierce(201, 205, 209, 187);

    cout << "\tImplicatia:\n";
    Implication(201, 205, 209, 187);

    cout << "\tProfesor-Student:\n";
    Line(201, 205, 209, 187, 4);
    printf("%c P %cS1 %cS2 %c   L   %c\n", 186, 179, 179, 179, 186);
    Line(199, 196, 197, 182, 4);
    for (a = 0; a <= 1; a++)
        for (b = 0; b <= 1; b++)
            for (c = 0; c <= 1; c++)
                printf("%c %d %c %d %c %d %c %3d %3c\n",
                       186, a, 179, b, 179, c, 179, a & (b | c), 186);
    Line(200, 205, 207, 188, 4);

    return 0;
}
