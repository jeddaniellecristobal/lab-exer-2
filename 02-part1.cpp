#include <iostream>
using namespace std;

int main()
{
float x, y;

cout << "Enter 2 numbers: " << endl;
cin >> x >> y;

if(x > y)
	cout << x << " is higher than " << y;
	else if (x < y)
		cout << y << " is higher than " << x;
	else
		cout << "Invalid input";

return 0;
}
