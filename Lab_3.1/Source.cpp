// Lab_03_1.cpp
// < Яценко Денис >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 24


#include <iostream>
#include <cmath>


using namespace std;
int main()
{
	double A;
	double B;
	double x;
	double y;
	cout << "x = ";cin >> x;
	A = x;

	// розгалуження у повній формі
	if (x <= -1)
		B = log(fabs(cos(5 * x))) + exp(1 / x + x);
	else
		if (x > -1 && x < -0.4)
			B = sqrt(pow(2 - x, 3));
		else
			B = sin(5 * x) - sqrt(fabs(1 - x));
	y = A + B;
	cout << "1.)y = " << y << endl;

	// розгалуження у неповній формі
	if (x <= -1)
		B = log(fabs(cos(5 * x))) + exp(1 / x + x);
	if (x > -1 && x < -0.4)
		B = sqrt(pow(2 - x, 3));
	if (x >= -0.4)
		B = sin(5 * x) - sqrt(fabs(1 - x));
	y = A + B;
	cout << "2.)y = " << y << endl;


	cin.get();
	return 0;

}
