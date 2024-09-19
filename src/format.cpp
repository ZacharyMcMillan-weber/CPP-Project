#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int row = 0;
    while(row < 12){
        int column = 0; 
        while(column < 12){
            cout << setw(4) << (row+1) * (column+1);

            column++;
        }
        cout << endl;
        row++;
    }   

    for(int row = 0; row < 12; row++ ){        
        for(int column = 0; column < 12; column++){
            cout << setw(4) << (row +1) * (column + 1) << " |";
        }
    cout << endl;
    }
    return 0;
}