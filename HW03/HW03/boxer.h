#pragma once

#include <iostream>
#include <string>

using namespace std;


#ifndef boxer.h

void boxDefine() {

	int layers;
	string inside;
	int i;

	cout << "Please enter the amount of layers you'd like inside of your box ";
	cin >> layers;

	cout << "Please enter a string to go inside of your box ";
	cin >> inside;

	int length = inside.size() + 2 * (layers)+1;

	// Top Row Handling

	for (int layerTot = 0; layerTot < layers; layerTot++) {

		for (i = 0; i <= length; i++) {
			cout << "*";

		}
		cout << "\n";
	}

	// Middle Rows, and String output

	for (int midloop = 0; midloop < 3; midloop++) {

		if (midloop == 1) {

			for (int k = 0; k < layers; k++) {
				cout << "*";
			}
			cout << " " << inside << " ";

			for (int k = 0; k < layers; k++) {
				cout << "*";
			}
			midloop++;
			cout << "\n";

		}

		for (int k = 0; k < layers; k++) {
				cout << "*";
			}
		for (int j = 0; j < inside.size() + 2; j++) {
		cout << " ";
	}
		for (int k = 0; k < layers; k++) {
			cout << "*";
		}
	cout << "\n";


}
	//Bottom Handling

	for (int layerTot = 0; layerTot < layers; layerTot++) {

		for (i = 0; i <= length; i++) {
			cout << "*";

		}
		cout << "\n";
	}
	
	
	
	
	
	
	/*for (int midRows = 0; midRows < 3; midRows++) {
		for (int leftStar = 0; leftStar < layers; leftStar++) {
			cout << "*";
		}
		for (int spaces = 0; spaces < inside.size() + 2; spaces++) {
			cout << " ";
		}
		for (int rightStar = 0; rightStar < layers; rightStar++) {
			cout << "*";
		}
		cout << "\n";
	} */
} 





#endif // !boxer.h