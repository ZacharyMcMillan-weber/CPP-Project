# include <iostream>
# include <string>

using namespace std;

int main() {
    // For loops 

// Counting Up
    for(int i = 1; i <= 10; i++) {
        cout << i << endl << endl;
    }

// Counting Down
    for(int j = 10; j >- 1; j--) { 
        cout << j << endl << endl;
    }

// Repeating over and over
    for(int k = 0; k < 20; k++) {
        cout << k << endl << endl;
    }

// infinite loop 
//for(;;) cout "HI\n";

    // While Loops 

// Counting up
    int i = 1;
    while (i <= 10) {
        cout << i; i++;}
        cout << endl;

// Counting down
    int f = 10;
    while (f >= 0) {
        cout << f; f--;}
        cout << endl;

// Repeating over and over
    int g = 0;
    while (g < 20){
        cout << "Hello World\n"; g++; }
        cout << endl;

// Infinite loop
// while(true) cout << "Hi";

    // Do-While Loops

// Counting Up
    int q = 1; do{
        cout << q; q++;
    }while(i <= 10);
    cout << endl;

// Counting Down
    int w = 10; do{
        cout << w; w--;
    } while(q >= 1);
    cout << endl;

// Repeating over and over
    int r = 0; do {
        cout << "Hello World\n"; r++;
    } while(r < 20);
    cout << endl;

}