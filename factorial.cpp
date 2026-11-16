#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int num, fact=1;
	
	cout << "Enter a number to find its factorial: ";
	cin >> num;
	
	for(int i=1;i<=num;i++){
		fact = fact * i;
		
	}
	cout << "\nFactorial of " << num << " is " << fact;
	
	return 0;
}