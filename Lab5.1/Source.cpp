// Lab 5.1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b); // прототип

int main()
{
	double g, s;

	cout << "g = "; cin >> g;
	cout << "s = "; cin >> s;

	double p = (h(g + 1, s) + pow(h(g, s + 1), 2)) / (1 + pow(h(pow(g, 2), pow(s, 2)), 3));
	cout << "p = " << p << endl;

	return 0;
}
double h(const double a, const double b) // визначення
{
	return (a * a - b * b);
}