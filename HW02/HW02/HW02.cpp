// Brandon Forsythe
// CS201 Redux HW02
// 2/10/22
// Fits the Parameters of HW02


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;


// InputNames creates a vector of length ten to be used later.
/*
void InputNames(vector<string>& names) {

	for (int i = 0; i < 10; i++) {
		cout << "Please Enter a Name: ";
		string name;
		getline(cin, name);
		names.push_back(name);


	}

}

//General Function to print a Vector 

void PrintNames(vector<string> & names) {

	vector<string> listCopy;

	InputNames(listCopy);

	cout << "Your List Is: ";

	for (int i = 0; i < listCopy.size(); i++) {
		std::cout << listCopy.at(i) << " ";

	}

}

// Alphabetizes the large vector using the std::sort function

void alphabetize(vector<string>& names) {

	vector<string> alphName;

	InputNames(alphName);

	sort(alphName.begin(), alphName.end());

	for (int i = 0; i < alphName.size(); i++) {
		cout << alphName.at(i) << " ";

	}
}

// Main function to test all functions

int main() {

	vector<string> passPN;

	alphabetize(passPN);
	
	return(0);

} */




// Name Search

/*cout << "Please enter a name to search for: ";
string searchedName;
getline(cin, searchedName);
bool isNameHere = false;

for (int parse = 0; parse < vectorCopy.size(); parse++) {

	if (searchedName == vectorCopy.at(parse)) {
		cout << "Your query exists";
		isNameHere = true;
		parse = vectorCopy.size();
	}

}

if (isNameHere == false) {
	cout << "Your query does not exist";
} */



//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//Brandon Forsythe
// CS201 Redux HW02 A1
// Money.cpp
// 2/12/22

/* void coinStar() {

	int penny, nickel, quarter, dime, dollarcoin;

	cout << "-----------------------------\n";
	cout << "   Welcome to the Coinstar   \n";
	cout << "-----------------------------\n";

	cout << "\n\n Please Enter Your Change \n";

	cout << "Pennies: ";
	cin >> penny;

	cout << "\n Nickels: ";
	cin >> nickel;

	cout << "\n Quarters: ";
	cin >> quarter;

	cout << "\n Dimes: ";
	cin >> dime;

	cout << "\n Dollar Coins: ";
	cin >> dollarcoin;

	cout << "You have: " << penny << " pennies, " << nickel << " nickels " << dime << " dimes, " << quarter << " quarters, and " << dollarcoin << " Dollar coins.\n";

	float total = penny + (5 * nickel) + (25 * quarter) + (10 * dime) + (100 * dollarcoin);

	cout << "Your total is: " << total << " cents. / $" << setprecision(5) <<  total / 100;
}

int main() {

	coinStar();

} */


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

// Brandon Forsythe
// CS201 Redux HW02 A2