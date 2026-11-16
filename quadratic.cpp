#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a,b,c,D,x1,x2;
	
	//Getting our coefficients
	cout << "Enter value of a: ";
	cin >> a;
	cout << "\nEnter value of b: ";
	cin >> b;
	cout << "\nEnter value of c: ";
	cin >> c;
	
	D = (b*b)-(4*a*c);
	
	if (D < 0){
		cout << "\nThe roots are complex";
	}
	else if(D = 0){
		cout << D;
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
		cout << "\nThe roots are equal";
		cout << "\nThe first root, x1 = " << x1;
		cout <<"\nThe second root, x2 = " << x2;
	}
	else{
		cout << D;
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
		cout << "\nThe first root, x1 = " << x1;
		cout << "\nThe second root, x2 = " << x2;
	}
	
	return 0;
}