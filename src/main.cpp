#include <iostream>
using namespace std;

int main(){
    // TODO
    cout << "What Score did you get for Notebook1?";
    double score;
    cin >> score;

    char letterGrade;

    if(score >= 9){
        letterGrade = 'A';
    } else if(score >= 8){
        letterGrade = 'B';
    } else if(score >= 7){
        letterGrade = 'C';
    } else {
        letterGrade = 'D';

    }

    if(-1){
        cout << "Must be true to get here\n";
    }

    cout << "A score of " << score << " means " << letterGrade << endl;
    return 0;
}