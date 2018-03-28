#include <iostream>
#include <iomanip>
using namespace std;
double A,B,C;
int main () {
	
	A= 7767;
	B= 160.17;
	C= 30.13;
	cout << "NUMBER = " << A << endl;
	cout << "SALARY = U$ " << setprecision (6) << C*B << endl;	
	return 0;

}
