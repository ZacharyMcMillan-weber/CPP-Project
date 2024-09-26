#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int count{0}, n, min, max;
    double sum{0};
    do {
        cout << "Enter a positive number that is a multiple of three: ";
        cin >> n;

        if (n > 0 && n%3 == 0){
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
    
    return 0;
}