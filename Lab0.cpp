#include <iostream>
#include <string>
using namespace std;

//prototypes
void printMenu();
void exit();
double sumTwoNumbers(int a, int b);
double calculateArea(double r);
double calculateCircumference(double r);
double calculatePriceWithVat(double price);


int main() {
    int choice;
    double num1, num2;
    do {
        printMenu();
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {

        case 0: //No code needed
            break;

        case 1:
            cout << "Enter the first number: ";
            cin >> num1;
            
            if (num1 < 0 or num1 > 100){
                cerr << "Must be in range 0 - 100: ";
                cin >> num;
            }

            cout << "Enter the second number: ";
            cin >> num2;

            cout << "The sum is: " << sumTwoNumbers(num1, num2); //todo: check if this func works
            break;
        case 2: //todo: make case 2 
            break;
        case 3: 
            break;
        case 4:
            break;
        default:
            cerr <<  "Invalid choice. Please try again." << endl;
        }
    }while (choice != 0);
    exit();

    return 0;
}


// shows menu
void printMenu() {

    cout << "----- Menu -----" << endl;
    cout << "0) Exit" << endl;
    cout << "1) Sum two numbers" << endl;
    cout << "2) Calculate area of a circle" << endl; 
    cout << "3) Calculate circumference of a circle" << endl;
    cout << "4) Calculate price with VAT" << endl;

    return ;
}

// shows exit message
void exit() {
    cout << "Goodbye!" << endl;
}


// sums two numbers and shows the result
double sumTwoNumbers(int a, int b) {
    return a + b;
}

