#include"Header1.h"

void mynum ::  setnumber(int n) {
	number = n;
}
int mynum:: getnumber()

{
	return number;
}
void mynum :: setpositiveconversion(int n) {

	if (n > 0) {
		
	}
		positiveconversion = n * (-1);
	
}
void mynum :: setnegativeconversion(int n){
	if (n < 0) {

	}
		negativeconversion = n * (-1);
}
int mynum::getpositiveconversion() {
	return positiveconversion;
}
int mynum::getnegativeconversion() {
	return negativeconversion;
}