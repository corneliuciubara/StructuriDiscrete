#include <iostream>
using namespace std;

int main() {
    int a[20][20], s[20], n, m, i, j, k, ok;

    cout << "Numar de varfuri=";
    cin >> n;

    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++) {
            cout << "a[" << i << "," << j << "]=";
            cin >> a[i][j];
            a[j][i] = a[i][j];
        }

    cout << "Numar de elemente din secventa ";
    cin >> k;

    for(i = 0; i < k; i++) {
        cout << "s[" << i << "]=";
        cin >> s[i];
    }

    ok = 1;

    // This might need to be `if (n != k)` depending on the requirements
    if(n != k) ok = 0;

    if(ok) {
        if(s[0] != s[k-1]) ok = 0;
        if(ok) {
            for(i = 0; i < k - 1; i++) {
                for(j = i + 1; j < k; j++) {
                    if(s[i] == s[j]) ok = 0;
                }
            }

            if(ok) {
                for(i = 0; i < k - 1; i++) {
                    if(a[s[i]][s[i + 1]] == 0) ok = 0;
                }
                if(!ok)
                    cout << "Exista noduri intre care nu avem muchie";
                else
                    cout << "Secventa data este ciclu hamiltonian";
            } else {
                cout << "Nodurile nu sunt distincte";
            }
        } else {
            cout << "Extremitatile nu coincid";
        }
    } else {
        cout << "Insuficiente noduri";
    }

    return 0;
}
