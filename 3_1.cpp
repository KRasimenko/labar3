#include <iostream>
#include "Triangle.h"
using namespace std;
int main() {
	double s1, s2;
	cout << "Enter s1" << endl;
	cin >> s1;
	cout << "Enter s2" << endl;
	cin >> s2;

	Triangle triangle(s1, s2); 
	cout << "Area: " << triangle.calculateArea() << endl;
	return 0;
}