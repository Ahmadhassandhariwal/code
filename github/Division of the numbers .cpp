#include<iostream>
#include<math.h>
using namespace std;

int divide(int x, int y) {
	int ans = x / y;
	return ans;
}

int main()
{
	int x, y;
	cout << "Enter the first number" << endl;
	cin >> x;
	cout << "Enter the second number" << endl;
	cin >> y;
	cout << "The division is = ";
	cout <<divide(x,y)<< endl;

	return 0;
}