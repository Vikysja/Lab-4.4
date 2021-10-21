// lab_4.4.cpp
// Квецко Вікторія
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 11

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double R, x, xp, xk, dx, y;

	cout << "R = "; cin >> R;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -1 - R)
			y = -x - 1 - R;
		else
			if (-1 - R < x && x <= -1)
				y = pow((R + x + 1) * (R-x-1), 0.5);
			else
				if (-1 < x && x <= 1)
					y = y = R;
				else
					if (1 < x && x <= 2)
						y = 2 * R - x + 1 - R * x;
					else
						y = -1;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "----------------------" << endl;

	return 0;
}

