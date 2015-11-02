#include <iostream>

using namespace std;

int main()
{
    char proces;

    do {
    // Tabele.
    int menu;
    float A[3][3];
    float B[3][3];
    int wynik = 0;

    // Wyswietlenie menu.
    cout << "Co mam liczyc?" << endl;
    cout << "1 - Wyznacznik" << endl;
    cout << "2 - Slad" << endl;
    cout << "3 - Sume A+B" << endl;


    cin >> menu;
    switch (menu) {
    case 1:
        cout << "Podaj macierz A:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "A[" << i << "][" << j << "] ";
                cin >> A[i][j];
            }
        }

        cout << "Wynik to: " << A[0][0] * A[1][1] * A[2][2] +
                                A[0][1] * A[1][2] * A[2][0] +
                                A[0][2] * A[1][0] * A[2][1] -
                                A[0][2] * A[1][1] * A[2][0] -
                                A[0][0] * A[1][2] * A[2][1] -
                                A[0][1] * A[1][0] * A[2][2] << endl;
        break;
    case 2:
        wynik = 0;

        cout << "Podaj macierz A:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "A[" << i << "][" << j << "] ";
                cin >> A[i][j];
            }
        }

        for (int i = 0; i < 3; i++) {
            wynik += A[i][i];
        }
        cout << "Wynik to:" << wynik << endl;

        break;
    case 3:
        wynik = 0;

        cout << "Podaj macierz A:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "A[" << i << "][" << j << "] ";
                cin >> A[i][j];
            }
        }

        cout << "Podaj macierz B:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "B[" << i << "][" << j << "] ";
                cin >> B[i][j];
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                wynik += A[i][j];
                wynik += B[i][j];
            }
        }
        cout << "Wynik to: " << wynik << endl;

        break;
    default:
        cout << "Wybrano nieprawidlowa opcje w menu." << endl;
    }

    cout << "Zakonczyc? (t/T) ";
    cin >> proces;
    } while (proces != 'T' && proces != 't');

    return 0;
}
