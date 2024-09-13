#include <iostream>
#include <iomanip>

using namespace std;

int add();
int add(int, int);
void multiplication_table(int);
void print_rectangle_using_stars();

void multiplication_table(int size){
    for(int row = 0; row < size; row++ ){        
        for(int column = 0; column < size; column++){
            cout << setw(4) << (row +1) * (column + 1) << " |";
        }
    cout << endl;
    }
}

int main(){
    bool keep_in_loop = true;
    do {
        cout << "Welcome to our simply menu program" << endl;
        cout << "Selet an option from the following" << endl;
        cout << "a) To add two integers" << endl;
        cout << "m) to show a 12 by 12 multiplication table" << endl;
        cout << "q) to Quit" << endl;

        char choice;
        cin >> choice;

        switch(choice){
            case 'A':
            case 'a': 
                cout <<  add() << "The Sum of the two numbers is: " << endl;
                break;
            case 'M':
            case 'm':
                multiplication_table(8);
                break;
            case 'r':
            case 'R':
                print_rectangle_using_stars();
                break;
            case 'Q':
            case 'q':
                keep_in_loop = false;
                cout << "goodbye";
                break;
            default:
                cout << "Invalid Option, Try again" << endl;
        }
    }while(keep_in_loop);

    return 0;
}

int add(){
    int a, b, sum;
    cout << "Enter two integers: ";
    cin >> a >> b;
    return a + b;
}

int add(int a, int b){
    return a + b;
}

void print_rectangle_using_stars();
    bool filled = true;
    int h, w;
    char symbol;
    cout << "Enter height and width of rectangle: ";

