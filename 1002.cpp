#include <iostream> 
#include <iomanip>
using namespace std;
double raio, pi;

double area ( double area, double raio, double pi) {
	
	pi = 3.14159;
	area = pi * (raio * raio);
	return area;
	
}

int main () {
	
	double a;
	raio = 2;
	a = area ( a, raio, pi );
	cout << "A=" << setprecision(6) << a << endl;
	
	return 0;
	
}
