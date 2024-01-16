#include <iostream>
#include <limits.h>  // data types macro constants
using namespace std;

int main(char* args[], int argc) {
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;

	cout << "Size of long : " << sizeof(long) << endl;
	cout << "Size of long long : " << sizeof(long long) << endl;

	cout << "Size of float : " << sizeof(float) << endl;

	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of long double : " << sizeof(long double) << endl;

	cout << "max char value: " << UCHAR_MAX << endl;
}