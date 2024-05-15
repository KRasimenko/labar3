#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Rectangle {
public:
    float x1, y1, x2, y2;  // Координаты вершин прямоугольника
    float a, b;  // Длины сторон прямоугольника

    // Конструктор для инициализации координат и вычисления сторон
    Rectangle(float x1, float y1, float x2, float y2) : x1(x1), y1(y1), x2(x2), y2(y2) {
        a = abs(x2 - x1);
        b = abs(y2 - y1);
    }

    // Метод для вычисления длины диагонали
    float getDiagonalLength() {
        return sqrt(a * a + b * b);
    }
};
