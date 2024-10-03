#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    int count{0}, n, min, max;
    double sum{0};
    vector<int> numbers;
    do {
        cout << "Enter a positive number that is a multiple of three: ";
        cin >> n;

        if (n > 0 && n%3 == 0){
            numbers.push_back(n);
            if(count == 0){
                min = max = sum;
            } else {
                if(n<min) min = n;
                if(n>max) max = n;
                sum+=n;
            }
            count++;
        } else{
            cout << "Invalid Number... Please try again" << endl;
        }
    } while(count < 5);
    
    cout << setw(10) << count << setw(10) << min << setw(10) << max << setw(10) << sum <<  setw(10) << sum/count << endl;
    
    cout << "Here are the numbers you entered" << endl;
    for(int n:numbers){
        cout << n << ", ";
    }
    cout << endl;
    return 0;
}