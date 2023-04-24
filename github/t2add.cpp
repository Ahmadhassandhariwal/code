#include"Header2.h"

mychar::mychar() {

	cout << "Default constructor" << endl;
}
void mychar::setchracter(char c) {
		character = c;
	
}
char mychar::getcharacter() {
	return character;
}
void mychar ::setuppercaselowercase(char s) {
	if (s > 65 && s < 97) {
		uppercaselowercase = s + 32;
	}
	else if (s > 97 && s < 122) {
		uppercaselowercase = s - 32;
	}
}
char mychar::getuppercaselowercase()
{
	return uppercaselowercase;
}


