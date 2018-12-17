#include <iostream>
using namespace std;

int main(){
	
	int x;
	float factorial = 1;
	
	cout << "Enter a positive integer: ";
	cin >> x;
	
	for(int i = 1; i <=x; ++i)
	{
		factorial *= i;
	}
	
	cout << "The factorial of " << x << " is " << factorial;
	
	return 0;
}
