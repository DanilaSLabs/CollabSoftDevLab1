#include <iostream>
#include <string>
#include <cassert>
#include <limits>
using namespace std;

//global constants
const double PI = 3.14159;

//prototypes
double sumTwoNumbers(const double num1, const double num2);
double areaOfCircle(const double radius);
double calculateCircumference(const double radius);
double calculatePriceWithVat(const double price, const double VAT);


int main() {

    //local input variables
    int choice;
    double num1 = 0, num2 = 0;
    double radius = 0;
    double price = 0;

    //local consts
    const double VAT = 1.19;

    do {

        //printing the menu
        cout << "----- Menu -----" << endl;
        cout << "0) Exit" << endl;
        cout << "1) Sum two numbers" << endl;
        cout << "2) Calculate area of a circle" << endl; 
        cout << "3) Calculate circumference of a circle" << endl;
        cout << "4) Calculate price with VAT" << endl;

        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {

        case 0: //No code needed
            break;

        case 1:
            cout << "Enter the first number: ";
            cin >> num1;
            
            while (num1 < 0 or num1 > 100){
                cerr << "Must be in range 0 - 100: ";
                cin >> num1;
            }

            do{
                cout << "Enter the second number (0 - 100): ";
                cin >> num2;
            }while(num2 < 0 or num2 > 100);

            cout << "Sum is: " << sumTwoNumbers(num1, num2);
            break;

        case 2:

            do{
                cout << "Enter the radius (>0): ";
                cin >> radius;
            }while(radius <= 0);

            cout << "Area of the circle is: " << areaOfCircle(radius) << endl;
            break;

        case 3: 

            do{
                cout << "Enter the radius (>0): ";
                cin >> radius;
            }while(radius <= 0);
            cout << "Circumference of the circle is: " << calculateCircumference(radius) << endl;
            break;

        case 4:

            do{
                cout << "Enter the price (> 0): ";
                cin >> price;
            }while(price <= 0);
            cout << "Price with the VAT is: " << calculatePriceWithVat(price, VAT) << endl;
            break;

        default:
            cerr <<  "Invalid choice. Please try again." << endl;

        }
    }while (choice != 0);
    cout << "Please come back soon:)";

    return 0;
}



// sums two numbers and shows the result
double sumTwoNumbers(const double num1, const double num2) {
    assert((num1 + num2) <= numeric_limits<double>::max());

    return num1 + num2;
}

//calculated the area of a circle
double areaOfCircle(const double radius){
    assert(radius > 0);

    return radius * radius * PI;
}

//calculate the circumference of a circle
double calculateCircumference(const double radius){
    assert(radius > 0);

    return 2 * PI * radius;
}

//calculates the price with the VAT
double calculatePriceWithVat(const double price, const double VAT){
    assert(price > 0);

    return price * VAT;
}