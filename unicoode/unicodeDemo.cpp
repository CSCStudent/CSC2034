#include <iostream>
#include <fcntl.h>  // _O_U16TEXT
#include <io.h>  //_setmode()
#include <cwchar>


using namespace std;
#define SPADE L"\x2660"
#define CLUB L"\x2663"
#define DIAMOND L"\x2666"
#define HEART L"\x2665"


void printCard(wchar_t s[], wchar_t r[]) {
	wprintf(L" -----\n");
	wprintf(L"|   %ls |\n", s);  //prints the suite symbol
	if (wcscmp(r, L"10") != 0)
		wprintf(L"|  %ls  |\n", r);  // prints the rank 
	else
		wprintf(L"| %ls  |\n", r);  // prints the rank
	wprintf(L"|     |\n");
	wprintf(L"|     |\n");
	wprintf(L" -----\n");
}

int main() {
	_setmode(_fileno(stdout), _O_U16TEXT);
	wchar_t* suit;	//holds the suit symbol
	wchar_t* rank;	//holds the card rank
	
	suit = new wchar_t[2] {SPADE};
	rank = new wchar_t[2] {L"J"};
	printCard(suit, rank);
	delete[] suit;
	delete[] rank;

	suit = new wchar_t[2] {CLUB};
	rank = new wchar_t[3] {L"10"};
	printCard(suit, rank);
	delete[] suit;
	delete[] rank;

	suit = new wchar_t[2] {DIAMOND};
	rank = new wchar_t[2] {L"A"};
	printCard(suit, rank);
	delete [] suit;
	delete[] rank;

	suit = new wchar_t[2] {HEART};
	rank = new wchar_t[2] {L"Q"};
	printCard(suit, rank);
	delete[] suit;
	delete[] rank;
	return 0;
}
