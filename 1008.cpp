#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	
	float id, h, p, s;
	id = rand() % 2344;
	h = 12; //h a day
	p = 713.71; //yen a hour
	s = h*p;
	cout << "ID = " << id << endl;
	cout << "Salary = " << setprecision (6) << s << " yen" ;
	
}
