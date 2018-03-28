#include <iostream>
#include <iomanip>
using namespace std;
float A, B, C, MEDIA;

int main () {
	
	A = 3.5 * 7.3;
	B = 7.5 * 5,7;
	MEDIA = (A + B)/10;
	cout << "MEDIA = " << setprecision (8) << MEDIA << endl;
	return 0; 
	
}
