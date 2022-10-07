#include <iostream>
#include <cmath>
using namespace std;
void trig func(double angle ‚double s ‚double c, double* p, double* q)
{
	angle = 30.12;

	s = sin(angle);
	c = cos(angle);
	cout << "sin=   " << s << "      " << "cos =" << c << endl;
	p = &s;  q = &c;
	cout << "sin address" << p << "        " << "cos address =" << p << endl;
}
int main() {

	double angle, s, c, * p, * q;
	trig_func(angle, s, c, p, q);
	return 0;

}




