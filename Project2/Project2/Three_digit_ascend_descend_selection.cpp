/*
Julian Haddad - 10/5/17 Period 3
Assignment Name :  Three Digit Ascend/Descend

Three Digit Ascend/Descend 
*/
#include <iostream>
#include <conio.h>

using namespace std;

void pause() { 
	while (!_kbhit());
	_getch();
	cout << "\n";
} 
void main() {
	for(int i=0; i<30; i++)
	{
	int x, a, b, c;
	if (i==0)
	{
		cout<<"Enter a 3 digit number . . .";
	}
	cout <<endl<< "Enter a 3 digit number . . .";
	cin >> x; // This is where the user inputs the 3 digit number

	a = x / 100; // This first digit
	
	b = (x / 10)%10; // This is the second digit modified slightly
	
	c = x % 10; // This is the third digit Modified slightly
	

	if (a < b && b < c){ // This checks if the first digit is smaller then the second and if the second is smaller than the third
		cout <<x<< " is ascending";}
	else if (a > b && b > c) { // this checks if the first digit is larger then the second and if the second is larger than the third
		cout <<x<< " is descending";}
	else {
		cout <<x<< "is neither"; // This is only used if the number does not apply to the "if" or the "else if"
	}
	}
	pause();
}
