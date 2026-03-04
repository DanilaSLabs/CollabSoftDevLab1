//Lab1: This file containts a smaill drawing program

#include <iostream>
#include <cassert>


using namespace std;

//Global Constants
const int MAX_LEN = 100; //Inclusive
const int MAX_HEIGHT = 100; //Inclusive


//Func. prototypes
void drawHorizontalLine(const int length, const char ch);
void drawVerticalLine(const int height, const char ch);
void drawSquare(const int size, const char ch);
void drawSquareFilled(const int size, const char ch);
void drawRectangle(const int width, const int height, const char ch);
void drawRectangleFilled(const int width, const int height, const char ch);

//Shows a menu ...
int main(){

    int choice;
    int length;
    char ch;
    int height;
    int size;
    int width;

    do{

        cout << "0) Quit " << endl;
        cout << "1) Draw a horizontal line " << endl;
        cout << "2) Draw a vertical line " << endl;
        cout << "3) Draw a square " << endl;
        cout << "4) Draw a square filled " << endl;
        cout << "5) Draw a rectangle " << endl;
        cout << "6) Draw a rectangle filled " << endl;
        cout << "Enter choice: " << endl;

        cin >> choice;

        if (choice == 0){
            // No code needed
        }

        else if(choice == 1){
            cout << "Enter length of the line (>0): " << endl;
            cin >> length;

            do{
            
                if(length <= 0 || length > MAX_LEN){
                    cerr << "Invalid length, try again: " << endl;
                    cin >> length;
                }
            }while(length <= 0 || length > MAX_LEN);

            cout << "Enter a symbol to draw the line: " << endl;
            cin >> ch;
        
            drawHorizontalLine(length, ch);
            cout << endl;
        }

        else if(choice == 2){

            cout << "Enter height of the line (>0): " << endl;
            cin >> height;

            do{
            
                if(height <= 0 || height > MAX_HEIGHT){
                    cerr << "Invalid height, try again: " << endl;
                    cin >> height;
                }
            }while(height <= 0 || height > MAX_HEIGHT);

            cout << "Enter a symbol to draw the line: " << endl;
            cin >> ch;

            drawVerticalLine(height, ch);
        }

        else if(choice == 3){
            //TODO
            cout << "Enter size of the square (>0): " << endl;
            cin >> size;
            do{
            
                if(size <= 0 || size > MAX_LEN){
                    cerr << "Invalid size, try again: " << endl;
                    cin >> size;
                }
            }while(size <= 0 || size > MAX_LEN);

            cout << "Enter a symbol to draw the square: " << endl;
            cin >> ch;  

            drawSquare(size, ch);
        }

        else if(choice == 4){
            //TODO
        }

        else if(choice == 5){
            //TODO
        }

        else if(choice == 6){
            //TODO
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
    
    assert(length > 0 && length <= MAX_LEN);

    cout << endl;

    for(int i = 0; i < length; i++){
        cout << ch;
    }

    cout << endl;

}

//Draw a vertical line
void drawVerticalLine(const int height, const char ch){

    assert(height > 0 && height <= MAX_HEIGHT);

    cout << endl;

    for(int i = 0; i < height; i++){
        cout << ch << endl;
    }

    cout << endl;
}

//Draw a square
void drawSquare(const int size, const char ch){
    assert(size > 0 && size <= MAX_LEN);

    cout << endl;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == 0 || i == size - 1 || j == 0 || j == size - 1){
                cout << ch;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
}