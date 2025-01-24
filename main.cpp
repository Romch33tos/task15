#include <iostream>
using namespace std;

int main() {
   setlocale(LC_ALL, "russian");
   int m, n;
   cout << "m: ";
   cin >> m;
   cout << "n: ";
   cin >> n;
   int matrix[m][n];

   cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < m; i++) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][m - 1 - i];
    }

   cout << "Сумма на главной диагонали: " << mainDiagonalSum <<endl;
   cout << "Сумма на побочной диагонали: " << secondaryDiagonalSum <<endl;

    return 0;
}
