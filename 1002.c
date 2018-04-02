#include <stdio.h>
#include <math.h>

int main () {
	
	double R,PI,a;
	PI = 3.14159;
	scanf("%lf", &R);
	a = PI * (pow(R,2));
	printf ("A=%0.4f\n", a);
	return 0;
	
}
