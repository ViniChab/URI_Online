#include <iostream>
#include <iomanip>
using namespace std;
long double A, B, C, MEDIA;

int main () {
	
	A = 2 * 9.4;
	B = 3 * 8.2;
	C = 5 * 0.1;
	MEDIA = (A + C + B)/10;
	cout << "MEDIA = " << setprecision (2) << MEDIA << endl;
	return 0; 
	
}
