#include"Header2.h"


int main()
{
	int n;
	cout << "Entered the N elements of objects" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		mychar (c1);
		char n;
		cout << "Enter the character " << endl;
		cin >> n;
		if (n > 65 && n < 122) {
			c1.setchracter(n);
		}
		else {
			cout << "Entered character is incorrect" << endl;
		}
		cout << "Entered character is = " << c1.getcharacter() << endl;
		c1.setuppercaselowercase(n);
		cout <<"After changing case entered chracter is "<< c1.getuppercaselowercase() << endl;
	}
}