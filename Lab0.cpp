#include <iostream>
#include <string>
using namespace std;

void printMenu();
void exit();
double sumTwoNumbers();
double calculateArea(double r);
double calculateCircumference(double r);
double calculatePriceWithVat(double price);


int main() {
    int choice;
    do {
        printMenu();
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {

        case 0:
            exit();
            break;

        case 1:
            sumTwoNumbers();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;

        }
        return 0;
    }while (choice != 0);
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
double sumTwoNumbers() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is: " << a+b;
    return a + b;
}

