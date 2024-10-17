#include <iostream>
#include <windows.h>;
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int cols = 2;
    const int rows = 2;  

    int matrix1[cols][cols] = {
        {1, 2},
        {3, 4}
    };

    int matrix2[rows][cols] = {
        {5, 6},
        {7, 8}
    };

    int result[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Результат додавання двох матриць:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
