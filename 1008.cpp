#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	
	float id, h, p, s;
	id = rand() % 2344;
	h = 12; //h a day
	p = 9103.71; //yen a hour
	s = h*p;
	cout << "ID = " << id << endl;
	cout << "Salary = " << setprecision (8) << s << " yen" ;
	
}
