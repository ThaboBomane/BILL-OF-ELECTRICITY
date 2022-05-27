// BILL OF ELECTRICITY.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iomanip>
#include <iostream>



int main() {
	double units, Bill;
	int fixedcharged = 110;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	std::cout << " Enter the units that you have used " << std::endl;
	std::cin >> units;

	if (units <= 150) {
		Bill = units * 5.50 + fixedcharged;
		std::cout << "Your bill is equal to R" << Bill;

	}
	else if (units > 150 && units <= 300) {
		Bill = fixedcharged + (150 * 5.50) + (units - 150) * 6;
		std::cout << " Your bill is eqaul to R" << std::endl;

	}
	else if (units > 300 && units <= 500) {
		Bill = fixedcharged + (150 * 5.50) + (150 * 6) + (units - 300) * 6.50;
		std::cout << "Your bill is equal to R" << std::endl;

	}

	else if (units > 500) {
		Bill = fixedcharged + (150 * 5.50) + (200 * 6.50) + (units - 500) * 7.00;
		std::cout << "Your bill is equal to R" << std::endl;

	}


	return 0;








}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
