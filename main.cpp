#include <bits/stdc++.h>
using namespace std;


// Function prototypes
void showMenu();//prints the menu to the user
bool isValidNumber(const string& input); // checks whether the input is valid or not
int getChoice(); //asks the user to enter the choice 
void addNumbers();  // addition function 
void subtractNumbers(); //subtraction func.
void multiplyNumbers();
void divideNumbers();
void modNumbers();
void exitProgram();

int main() {
    while (true) {
        showMenu();
        int choice = getChoice();

        if (choice == 0) {
            cout << "Exiting program"<<endl;
            break;
        }

        //checking  user's choice
        switch (choice) {
            case 1:
                addNumbers();
                break;
            case 2:
                subtractNumbers();
                break;
            case 3:
                multiplyNumbers();
                break;
            case 4:
                divideNumbers();
                break;
            case 5:
                modNumbers();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}


void showMenu() {
    cout << "Menu:"<<endl;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Mod of Two Numbers\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

// Function to validate numerical input
bool isValidNumber(const std::string& input) {
    if (input.empty()) return false;  // Check for empty string

    size_t start = 0;
    if (input[0] == '-') {
        if (input.size() == 1) return false;  // A single '-' is not a valid number
        start = 1;  // Start checking from the second character
    }

    for (size_t i = start; i < input.size(); ++i) {
        if (!std::isdigit(input[i])) return false;  // Return false if any non-digit character is found
    }

    return true;
}


// Function to get the user's menu choice
int getChoice() {
    string input;
    cin >> input;

    if (isValidNumber(input)) {
        return stoi(input); // stoi 
    } else {
        cout << "Invalid input. Please enter a number.\n";
        return -1; // Invalid choice
    }
}

// Arithmetic functions
void addNumbers() {
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (isValidNumber(num1) && isValidNumber(num2)) {
        long long int n1 = stoi(num1);
        long long n2 = stoi(num2);
        cout << "The result is: " << n1 + n2 << "\n";
    } else {
        cout << "Invalid input. Please enter numbers only.\n";
    }
}

void subtractNumbers() {
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (isValidNumber(num1) && isValidNumber(num2)) {
         long long int n1 = stoi(num1);
        long long int n2 = stoi(num2);
        cout << "The result is: " << n1 - n2 << "\n";
    } else {
        cout << "Invalid input. Please enter numbers only.\n";
    }
}

void multiplyNumbers() {
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (isValidNumber(num1) && isValidNumber(num2)) {
        long long  n1 = stoi(num1);
        long long  n2 = stoi(num2);
        cout << "The result is: " << n1 * n2 << "\n";
    } else {
        cout << "Invalid input. Please enter numbers only.\n";
    }
}

void divideNumbers() {
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (isValidNumber(num1) && isValidNumber(num2)) {
        long long int n1 = stoi(num1);
        long long int n2 = stoi(num2);
        if (n2 != 0) {
            cout << "The result is: " << static_cast<double>(n1) / n2 << "\n";
        } else {
            cout << "Division by zero is not allowed.\n";
        }
    } else {
        cout << "Invalid input. Please enter numbers only.\n";
    }
}

void modNumbers() {
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (isValidNumber(num1) && isValidNumber(num2)) {
        long long n1 = stoll(num1);
        long long n2 = stoll(num2);
        cout << "The result is: " << n1 % n2 << "\n";
    } else {
        cout << "Invalid input. Please enter numbers only.\n";
    }
}
//end of the program
