// Lab 5.1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b); // ��������

int main()
{
	double g, s;

	cout << "g = "; cin >> g;
	cout << "s = "; cin >> s;

	double p = (h(g + 1, s) + h(g, s + 1) * h(g, s + 1)) / (1 + h(g * g, s * s) * h(g * g, s * s) * h(g * g, s * s));
	cout << "p = " << p << endl;

	return 0;
}
double h(const double a, const double b) // ����������
{
	return (a * a - b * b);
}