#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double x, xp, xk, dx, A, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
	if (x < 0)
		A = pow(x, 3) - 2 * pow(x, 4);
	else
		if (x > 2)
			A = 4 * cos(pow(x, 2) - 2);
		else
			A = pow((fabs(x) + exp(x)), 3);

	y = (2 + x) / pow(x, 2) + 1 + A;
	cout << "|" << setw(7) << setprecision(2) << x
		<< " |" << setw(10) << setprecision(3) << y
		<< " |" << endl;
	x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
