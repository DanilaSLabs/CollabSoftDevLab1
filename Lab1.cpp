/** \file Lab1.cpp
 * \brief This file contains a small drawing program
 * \details This program allows the user to draw various shapes (horizontal line, vertical line, square, filled square, rectangle, filled rectangle) using a specified character. The user can also choose to draw random shapes or shapes defined in arrays. The program continues to run until the user chooses to quit.
 * \author Daniil Stankevich
 * \date 2026-03-11
 * \version 1.0
 * \copyright University of Nicosia
 */

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>


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
void drawRandomShapes(const int numShapes);
void initializeArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize);
void drawArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize);

/**
 * Function <code>main</code> is the entry point of the program. It displays a menu to the user and allows them to choose which shape to draw. The user can also specify the dimensions and character for drawing the shape. The program continues to run until the user chooses to quit.
 * <BR>
 * @return int returns 0 on successful execution
 */
int main(){
    const int MAX_SHAPES = 10;

    int choice;
    int length;
    char ch;
    int height;
    int size;
    int width;

    srand(time(0)); //Seed the rand

    do{

        cout << "0) Quit " << endl;
        cout << "1) Draw a horizontal line " << endl;
        cout << "2) Draw a vertical line " << endl;
        cout << "3) Draw a square " << endl;
        cout << "4) Draw a square filled " << endl;
        cout << "5) Draw a rectangle " << endl;
        cout << "6) Draw a rectangle filled " << endl;
        cout << "7) Draw random shapes " << endl;
        cout << "8) Draw shapes from arrays" << endl;
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
            cout << "Enter size of the square (>1): " << endl;
            cin >> size;
            do{
            
                if(size <= 1 || size > MAX_LEN){
                    cerr << "Invalid size, try again: " << endl;
                    cin >> size;
                }
            }while(size <= 1 || size > MAX_LEN);

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
            cout << "Enter size of the square (>1): " << endl;
            cin >> size;
            do{ 
            
                if(size <= 1 || size > MAX_LEN){
                    cerr << "Invalid size, try again: " << endl;
                    cin >> size;
                }
            }while(size <= 1 || size > MAX_LEN);

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
            cout << "Enter width of the rectangle (>1): " << endl;
            cin >> width;
            do{
                if(width <= 1 || width > MAX_LEN){
                    cerr << "Invalid width, try again: " << endl;
                    cin >> width;
                }
            }while(width <= 1 || width > MAX_LEN);

            cout << "Enter height of the rectangle (>1): " << endl;
            cin >> height;
            do{
                if(height <= 1 || height > MAX_HEIGHT){
                    cerr << "Invalid height, try again: " << endl;
                    cin >> height;
                }
            }while(height <= 1 || height > MAX_HEIGHT);

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
            
            cout << "Enter width of the rectangle (>1): " << endl;
            cin >> width;
            do{
                if(width <= 1 || width > MAX_LEN){
                    cerr << "Invalid width, try again: " << endl;
                    cin >> width;
                }
            }while(width <= 1 || width > MAX_LEN);

            cout << "Enter height of the rectangle (>1): " << endl;
            cin >> height;
            do{
                if(height <= 1 || height > MAX_HEIGHT){
                    cerr << "Invalid height, try again: " << endl;
                    cin >> height;
                }
            }while(height <= 1 || height > MAX_HEIGHT);

            cout << "Enter a symbol to draw the rectangle: " << endl;
            cin >> ch;
            do{
                if(ch == ' ' || ch >= 127 || ch <= 32){
                    cerr << "Invalid symbol, try again: " << endl;
                    cin >> ch;
                }
            }while(ch == ' ' || ch >= 127 || ch <= 32);

            drawRectangleFilled(width, height, ch);
        }
        else if (choice == 7){
            int numShapes;

            cout << "Enter how many random shapes to draw (>0): " << endl;
            cin >> numShapes;

            do{
                if(numShapes <= 0 || numShapes > MAX_SHAPES){
                    cerr << "Invalid number, try again: " << endl;
                    cin >> numShapes;
                }
            }while(numShapes <= 0 || numShapes > MAX_SHAPES);

            drawRandomShapes(numShapes);
        }
        
        else if (choice == 8){
            const int MAX_ARRAY = 10;
            int shapeTy[MAX_ARRAY];
            int shapeLen[MAX_ARRAY];
            char shapeCh[MAX_ARRAY];

            initializeArrays(shapeTy, shapeLen, shapeCh, MAX_ARRAY);
            drawArrays(shapeTy, shapeLen, shapeCh, MAX_ARRAY);
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
void drawSquare(const int size, const char ch){
    assert(size > 1 && size <= MAX_LEN);
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
void drawSquareFilled(const int size, const char ch){
    assert(size > 1 && size <= MAX_LEN);   
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
void drawRectangle(const int width, const int height, const char ch){
    assert(width > 1 && width <= MAX_LEN);
    assert(height > 1 && height <= MAX_HEIGHT);
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
void drawRectangleFilled(const int width, const int height, const char ch){
    assert(width > 1 && width <= MAX_LEN);
    assert(height > 1 && height <= MAX_HEIGHT);
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

/**
 * Function <code>drawRandomShapes</code> draws a specified number of random shapes
 * <BR>
 * @param numShapes the number of random shapes to draw
 * @return void
 */
void drawRandomShapes(const int numShapes){
    assert(numShapes > 0);
    int shapeType;
    int shapeLength;
    char shapeChar;

    const int MAX_RANDOM_LEN = 20;
    const int MIN_RANDOM_LEN = 1;

    cout << endl;
    cout << "Draws " << numShapes << " random shapes" << endl;

    for(int i = 0; i < numShapes; i++){
        //Define the shape
        shapeType = rand() % 6 + 1; //Shape type between 1 and 6
        shapeLength = rand() % (MAX_RANDOM_LEN - MIN_RANDOM_LEN + 1) + MIN_RANDOM_LEN; //Length between 1 and MAX_LEN
        shapeChar = rand() % 94 + 33; //Printable characters in ASCII

        //Draw the shape
        switch (shapeType)
        {
        case 1:
            drawHorizontalLine(shapeLength, shapeChar);
            break;
        case 2:
            drawVerticalLine(shapeLength, shapeChar);
            break;
        case 3:
            drawSquare(shapeLength, shapeChar);
            break;
        case 4:
            drawSquareFilled(shapeLength, shapeChar);
            break;
        case 5:
            drawRectangle(shapeLength, shapeLength + 1, shapeChar); //Random rectangle with width = length and height = length + 1
            break;
        case 6:
            drawRectangleFilled(shapeLength, shapeLength + 1, shapeChar); //Random filled rectangle with width = length and height = length + 1
            break;
        default:
            assert(false); //Should never happen
            break;
        }
    }

    cout << endl;
}

/**
 * Function <code>initializeArrays</code> initializes the arrays with random values.
 * <BR>
 * @param shapeTy array holding the shape type values from 1 to 6
 * @param shapeLen array holding the shape length values from 1 to 20
 * @param shapeCh array holding printable ASCII characters from 33 to 126
 * @param arrSize the size of all arrays, must be > 0
 * @return void
 */
void initializeArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize) {
    assert(arrSize > 0);

    for (int i = 0; i < arrSize; i++) {
        shapeTy[i] = rand() % 6 + 1;          // 1 - 6
        shapeLen[i] = rand() % 20 + 1;        // 1 - 20
        shapeCh[i] = static_cast<char>(rand() % 94 + 33); // ASCII 33 - 126
    }
}

/**
 * Function <code>drawArrays</code> loops through the arrays and draws the shapes specified in them.
 * <BR>
 * @param shapeTy array holding the shape type values
 * @param shapeLen array holding the shape length values
 * @param shapeCh array holding the drawing characters
 * @param arrSize the size of all arrays, must be > 0
 * @return void
 */
void drawArrays(int shapeTy[], int shapeLen[], char shapeCh[], const int arrSize) {
    assert(arrSize > 0);

    for (int i = 0; i < arrSize; i++) {
        switch (shapeTy[i]) {
        case 1:
            drawHorizontalLine(shapeLen[i], shapeCh[i]);
            break;
        case 2:
            drawVerticalLine(shapeLen[i], shapeCh[i]);
            break;
        case 3:
            drawSquare(shapeLen[i], shapeCh[i]);
            break;
        case 4:
            drawSquareFilled(shapeLen[i], shapeCh[i]);
            break;
        case 5:
            drawRectangle(shapeLen[i], shapeLen[i], shapeCh[i]);
            break;
        case 6:
            drawRectangleFilled(shapeLen[i], shapeLen[i], shapeCh[i]);
            break;
        default:
            assert(false);
        }

        cout << endl;
    }
}