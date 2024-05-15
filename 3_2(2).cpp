#include<iostream>
#include<cmath>
#include"rectangle.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Получить координаты вершин от пользователя
    float x1, y1, x2, y2;
    cout << "Введите координаты первой вершины (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины (x2, y2): ";
    cin >> x2 >> y2;

    // Создать экземпляр класса Rectangle
    Rectangle rectangle(x1, y1, x2, y2);

    // Вычислить и вывести длину диагонали
    float diagonalLength = rectangle.getDiagonalLength();
    cout << "Длина диагонали прямоугольника составляет: " << diagonalLength << " пикселей" << endl;
    return 0;
}