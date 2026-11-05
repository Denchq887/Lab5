// Myexecrefslib.cpp
// Застосунок, що використовує статичну бібліотеку Vector3DLib
// compile with: cl /EHsc Myexecrefslib.cpp /link Vector3DLib.lib
#include <iostream>
#include "Vector3DLib.h"

using namespace std;
using Vector3DLib::vector3D;

int main()
{
    // Створення векторів за допомогою різних конструкторів
    vector3D A;             // конструктор без параметрів
    vector3D B(3, 4, 5);    // конструктор з параметрами
    vector3D C(B);          // конструктор копіювання

    cout << "Vector A = "; A.print(); cout << endl;
    cout << "Vector B = "; B.print(); cout << endl;
    cout << "Vector C = "; C.print(); cout << endl;

    // Додавання
    vector3D D = B + C;
    cout << "\nB + C = "; D.print(); cout << endl;

    // Віднімання
    vector3D E = B - C;
    cout << "B - C = "; E.print(); cout << endl;

    // Скалярний добуток
    double scalarProduct = B * C;
    cout << "B * C (scalar product) = " << scalarProduct << endl;

    // Множення на скаляр (обидва порядки)
    vector3D F = B * 2;
    cout << "B * 2 = "; F.print(); cout << endl;
    vector3D G = 2 * B;
    cout << "2 * B = "; G.print(); cout << endl;

    // Довжина вектора
    cout << "\nLength of B = " << B.length() << endl;
    cout << "Length of C = " << C.length() << endl;

    // Порівняння векторів
    cout << "\nComparison of vectors B and C:" << endl;
    if (B == C) cout << "B and C are equal." << endl;
    else        cout << "B and C are not equal." << endl;

    // Порівняння довжин
    cout << "\nComparison of vector lengths:" << endl;
    if (B > C)      cout << "Length of B is greater than length of C." << endl;
    else if (B < C) cout << "Length of B is smaller than length of C." << endl;
    else            cout << "Lengths of B and C are equal." << endl;

    // Додатковий приклад з різними векторами
    vector3D P(1, 2, 2);
    cout << "\nP = "; P.print(); cout << ", |P| = " << P.length() << endl;
    cout << "P != B: " << (P != B ? "true" : "false") << endl;
    cout << "P < B (by length): " << (P < B ? "true" : "false") << endl;

    return 0;
}
