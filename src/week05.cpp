#include <iostream>
#include <array> // needed for line 12
#include <vector>// needed for line 15
#include <string>
using namespace std;

void example(){
// Static arrays
    // C style of creating a static array
    int num[6]{1, 2, 3, 4, 5, 6};
    // C++ style of creating a static array. This is the preffered method
    array<int, 5> numbers;

// Dynamic arrays
    vector<char> choices;

}

int main(){
    double scores[]{76.7, 88.6, 96.2, 68.9, 54.2, 100};
    for(int i{0}; i < 6; i++){
        cout << "Score " << (i + 1)<< ": "<<scores[i] << (scores[i] < 70 ?"*" : "") << endl;
        }
    return 0;
    }

