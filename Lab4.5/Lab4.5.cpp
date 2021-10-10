#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		if ((0 <= y && y <= 2 * R && -2 * R <= x && x <= 0 && pow(x + R, 2) + pow(y - R, 2) <= R * R) ||
			(-R <= y && y <= 0 && 0 <= x && x <= 2 * R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = (4 * R)* rand() / RAND_MAX  -2 *R;
		y = (4 * R)*  rand() / RAND_MAX -2* R;

		if ((0 <= y && y <= 2 * R && -2 * R <= x && x <= 0 && pow(x + R, 2) + pow(y - R, 2) <= R * R
			|| -R <= y && y <= 0 && 0 <= x && x <= 2 * R))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}


