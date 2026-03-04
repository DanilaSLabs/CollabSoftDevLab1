//Lab1: This file containts a smaill drawing program

#include <iostream>

using namespace std;

//prototypes
void drawHorizontalLine(const int length, const char ch);


//Shows a menu
int main(){

    int choice;

    cout << "0) Quit " << endl;
    cout << "1) Draw a horizontal line " << endl;
    cout << "2) Draw a vertical line " << endl;
    cout << "3) Draw a square " << endl;
    cout << "4) Draw a square filled " << endl;
    cout << "5) Draw a rectangle " << endl;
    cout << "6) Draw a rectangle filled " << endl;
    cout << "Enter chice: " << endl;

    cin >> choice;

    do{
        if (choice == 0){
            // No code needed
        }

        else if(choice == 1){
            //TODO
        }

        else if(choice == 2){
            //TODO
        }

        else if(choice == 3){
            
        }

        else if(choice == 4){
            
        }

        else if(choice == 5){
            
        }

        else if(choice == 6){
            
        }
        
        else {
            cerr << "Wrong choice, try again" << endl;
        }

    }while(choice != 0);

    cout << "Have a nice day!" << endl;

    return 0;

}

//Draw a horizontal line
void drawHorizontalLine(const int length, const char ch){
    
    cout << endl;

    for(int i = 0; i < length; i++){
        cout << ch;
    }


}