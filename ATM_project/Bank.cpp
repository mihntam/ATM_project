#include "Bank.h"
#include <iostream>

using namespace std;

void Bank::menu() {

	int choice;
	cout << "****************************************************\n" << endl;
	cout << "\t\t -=[Welcome to ATM]=- \n" << endl;
	cout << "\t Choose from the menu below: \n" << endl;
	cout << "\t\t 1. Check balance. " << endl;
	cout << "\t\t 2. Deposit balance. " << endl;
	cout << "\t\t 3. Withdraw balance. " << endl;
	cout << "\t\t 4. Account holder's detail. " << endl;
	cout << "\t\t 5. Exit. " << endl;
	cout << endl << "****************************************************" << endl << endl;

	cin >> choice;

}

void Bank::create() {

	int choice;
	cout << "****************************************************\n" << endl;
	cout << "\t\t -=[Welcome to ATM]=- \n" << endl;
	cout << "\t Choose from the list below: \n " << endl;
	cout << "\t\t 1. Login with your account. " << endl;
	cout << "\t\t 2. Create an acount" << endl;
	cout << endl << "****************************************************" << endl << endl;

	cout << "Enter your choice here: ";
	cin >> choice;
}

void Bank::login() {

	int choice;

}

