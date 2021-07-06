
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() {
	long int n = 0;
	double x = 9.26, hasil;
	hasil = scalbln(x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << hasil << endl;
	_getch();
	return 0;
}
