#include <iostream>
#include <array>  // needed for line 13
#include <vector> // needed for line 16
#include <string>
#include <iomanip>
using namespace std;

void example()
{
    // Static arrays
    // C style of creating a static array
    int num[6]{1, 2, 3, 4, 5, 6};
    // C++ style of creating a static array. This is the preffered method
    array<int, 5> numbers;

    // Dynamic arrays
    vector<char> choices;
}

int main(){
    // More traditional way of iterating over an array
    double scores[]{76.7, 88.6, 96.2, 68.9, 54.2, 100};
    for (int i{0}; i < 6; i++)
    {
        cout << "Score " << (i + 1) << ": " << scores[i] << (scores[i] < 70 ? "*" : "") << endl;
    }
    // More modern way of iterating over an array
    for(double score : scores){
        cout << score << endl;
    }


    array<char, 4> fourLetters{'a', 'B', 'M', 'R'};
    for(int i{0}; i < fourLetters.size(); i++){
        cout << setw(i + 2) << fourLetters.at(i) << endl;
        
    }

    string greeting{"Hello, World!"};
    for(char c:greeting){
        cout << c << "_";
    }

    cout << endl << "string Size: " << greeting.size() << endl;

    greeting.replace(7, 10, "John");
    cout << greeting << endl;

    return 0;
}
