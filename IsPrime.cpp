// Is Prime Program in C++. Evaluates if a number is prime, composite, or neither (0 or 1).

#include <iostream>
#include <cctype>
#include <cmath>
#include <limits>

using namespace std;

/* The IsPrime function contains the definition of a prime number. */
bool IsPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// The main function prompts the user to enter a number and evaluates if it is prime or not.
int main() {
	int num;
	char choice;
	cout << "----------------------------------------" << endl;
	std::cout << "Welcome to the Prime Number Evaluator!" << std::endl;
	cout << "----------------------------------------" << endl;
	cout << "\n" << endl;
	do {
		cout << "Enter a positive number to evaluate if it is prime or not: " << endl;
		cin >> num;
		if (IsPrime(num)) {
			cout << "The number " << num << " is prime." << endl;
		}
		else if (num < 0) {
			cout << "The number " << num << " is negative and cannot be evaluated as prime or composite." << endl;
			cout << "Please enter a positive integer." << endl;
		}
		else if (num == 0 || num == 1) {
			cout << "The Number " << num << " is neither prime nor composite." << endl;
			cout << "Try again with a different number." << endl;
		}
		else {
			cout << "The number " << num << " is a composite number." << endl;
		}
		// Ask the user if they want to evaluate another number
		cout << "Do you want to evaluate another number? (y/n): ";
		cin >> choice;
		cin.clear(); // Clear any error flags
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore any leftover input
	} while ((choice == 'y' || choice == 'Y') || (!choice == 'n' || !choice == 'N'));
	
	if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
		cout << "Invalid choice. Please enter 'y' or 'n'." << endl;
		return 1; // Exit with an error code
	} else if (choice == 'n' || choice == 'N') {
		// Say goodbye to the user.
		cout << "Thank you for using the program. Goodbye!" << endl;
		cout << "Press return key to leave..." << endl;
	}
	cin.get(); // Wait for user input before exiting.
	return 0;
}
