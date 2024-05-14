#pragma once
#include <iostream>
struct Triangle{
	double side1;
	double side2;
	Triangle(double s1, double s2) : side1(s1), side2(s2){}
	double calculateArea() const;
};
