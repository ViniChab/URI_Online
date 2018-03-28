#include <iostream>
using namespace std;
	int a, b, c;
	
int addition ( int a , int b ) {
		
	int add;
	add = ( a + b );
	return add;
	
	} 
	
int main () {
		
	a = 10;
	b= 7;
    c = addition ( a, b );
	cout << "SOMA = " << c << endl;
	 
	return 0;
	 
	}
