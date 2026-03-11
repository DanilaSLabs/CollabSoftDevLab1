/** \file Lab1.cpp
 * \brief This file contains a small drawing program
 * \details This program allows the user to draw simple shapes like lines, squares, and rectangles using a specified character. The user can choose from a menu of options to select the shape they want to draw and provide the necessary dimensions and character for drawing.
 * \author Daniil Stankevich
 * \date 2024-06
 * \version 1.0
 * \copyright University of Nicosia
 */

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
            //TODO: check if only 1 symbol is entered
            cin >> ch;
            do{
                if(ch == ' ' || ch >= 127 || ch <= 32){
                    cerr << "Invalid symbol, try again: " << endl;
                    cin >> ch;
                }
            }while(ch == ' ' || ch >= 127 || ch <= 32);
        
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
            do{
                if(ch == ' ' || ch >= 127 || ch <= 32){
                    cerr << "Invalid symbol, try again: " << endl;
                    cin >> ch;
                }
            }while(ch == ' ' || ch >= 127 || ch <= 32);

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
            do{
                if(ch == ' ' || ch >= 127 || ch <= 32){
                    cerr << "Invalid symbol, try again: " << endl;
                    cin >> ch;
                }
            }while(ch == ' ' || ch >= 127 || ch <= 32);

            drawSquare(size, ch);
        }

        else if(choice == 4){
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
            do{
                if(ch == ' ' || ch >= 127 || ch <= 32){
                    cerr << "Invalid symbol, try again: " << endl;
                    cin >> ch;
                }
            }while(ch == ' ' || ch >= 127 || ch <= 32);

            drawSquareFilled(size, ch);
        }

        else if(choice == 5){
            cout << "Enter width of the rectangle (>0): " << endl;
            cin >> width;
            do{
                if(width <= 0 || width > MAX_LEN){
                    cerr << "Invalid width, try again: " << endl;
                    cin >> width;
                }
            }while(width <= 0 || width > MAX_LEN);

            cout << "Enter height of the rectangle (>0): " << endl;
            cin >> height;
            do{
                if(height <= 0 || height > MAX_HEIGHT){
                    cerr << "Invalid height, try again: " << endl;
                    cin >> height;
                }
            }while(height <= 0 || height > MAX_HEIGHT);

            cout << "Enter a symbol to draw the rectangle: " << endl;
            cin >> ch;
            do{
                if(ch == ' ' || ch >= 127 || ch <= 32){
                    cerr << "Invalid symbol, try again: " << endl;
                    cin >> ch;
                }
            }while(ch == ' ' || ch >= 127 || ch <= 32);

            drawRectangle(width, height, ch);
        }

        else if(choice == 6){
            
            cout << "Enter width of the rectangle (>0): " << endl;
            cin >> width;
            do{
                if(width <= 0 || width > MAX_LEN){
                    cerr << "Invalid width, try again: " << endl;
                    cin >> width;
                }
            }while(width <= 0 || width > MAX_LEN);

            cout << "Enter height of the rectangle (>0): " << endl;
            cin >> height;
            do{
                if(height <= 0 || height > MAX_HEIGHT){
                    cerr << "Invalid height, try again: " << endl;
                    cin >> height;
                }
            }while(height <= 0 || height > MAX_HEIGHT);

            cout << "Enter a symbol to draw the rectangle: " << endl;
            cin >> ch;

            drawRectangleFilled(width, height, ch);
        }
        
        else {
            cerr << "Wrong choice, try again" << endl;
        }

    }while(choice != 0);

    cout << "Have a nice day!" << endl;

    return 0;

}

/**
 * Function <code>drawHorizontalLine</code> draws a horizontal line specifed by the args
 * <BR>
 * @param length the length of the line, must be > 0 and <= MAX_LEN
 * @param ch the symbol used to draw the line
 * @return void
 */

//Draw a horizontal line
void drawHorizontalLine(const int length, const char ch){
    assert(ch != ' ');
    assert(ch < 127 && ch > 32);
    assert(length > 0 && length <= MAX_LEN);

    cout << endl;

    for(int i = 0; i < length; i++){
        cout << ch;
    }

    cout << endl;

}

/**
 * Function <code>drawVerticalLine</code> draws a vertical line specifed by the args
 * <BR>
 * @param height the height of the line, must be > 0 and <= MAX_HEIGHT
 * @param ch the symbol used to draw the line
 * @return void
 */

//Draw a vertical line
void drawVerticalLine(const int height, const char ch){
    assert(ch != ' ');
    assert(ch < 127 && ch > 32);
    assert(height > 0 && height <= MAX_HEIGHT);

    cout << endl;

    for(int i = 0; i < height; i++){
        cout << ch << endl;
    }

    cout << endl;
}


/**
 * Function <code>drawSquare</code> draws a square specifed by the args
 * <BR>
 * @param size the size of the square, must be > 0 and <= MAX_LEN
 * @param ch the symbol used to draw the square
 * @return void
 */

//Draw a square
void drawSquare(const int size, const char ch){
    assert(size > 0 && size <= MAX_LEN);
    assert(ch != ' ');
    assert(ch < 127 && ch > 32);

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

/**
 * Function <code>drawSquareFilled</code> draws a filled square specifed by the args
 * <BR>
 * @param size the size of the square, must be > 0 and <= MAX_LEN
 * @param ch the symbol used to draw the square
 * @return void
 */
//Draw a filled square
void drawSquareFilled(const int size, const char ch){
    assert(size > 0 && size <= MAX_LEN);   
    assert(ch != ' ');
    assert(ch < 127 && ch > 32); 

    cout << endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << ch;
        }
        cout << endl;
    }
    cout << endl;
}

/**
 * Function <code>drawRectangle</code> draws a rectangle specifed by the args
 * <BR>
 * @param width the width of the rectangle, must be > 0 and <= MAX_LEN
 * @param height the height of the rectangle, must be > 0 and <= MAX_HEIGHT
 * @param ch the symbol used to draw the rectangle
 * @return void
 */
//Draw a rectangle
void drawRectangle(const int width, const int height, const char ch){
    assert(width > 0 && width <= MAX_LEN);
    assert(height > 0 && height <= MAX_HEIGHT);
    assert(ch != ' ');
    assert(ch < 127 && ch > 32);

    cout << endl;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i == 0 || i == height - 1 || j == 0 || j == width - 1){
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

/**
 * Function <code>drawRectangleFilled</code> draws a filled rectangle specifed by the args
 * <BR>
 * @param width the width of the rectangle, must be > 0 and <= MAX_LEN
 * @param height the height of the rectangle, must be > 0 and <= MAX_HEIGHT
 * @param ch the symbol used to draw the rectangle
 * @return void
 */
//Draw a filled rectangle
void drawRectangleFilled(const int width, const int height, const char ch){
    assert(width > 0 && width <= MAX_LEN);
    assert(height > 0 && height <= MAX_HEIGHT);
    assert(ch != ' ');
    assert(ch < 127 && ch > 32);

    cout << endl;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << ch;
        }
        cout << endl;
    }
    cout << endl;
}