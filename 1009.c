#include <stdio.h>
#include <string>
int main () {
	
	char name [10];
	printf ("Worker's name : ");
	scanf (" %s", name);
	printf ("\n");
	float sells, com, fixed, new_salary;
	sells = 15684; //in dollars
	com = (sells/100)*15;
	fixed = 2500;
	new_salary = fixed + com;
	printf ("Salary = $%0.2f", new_salary);

}
