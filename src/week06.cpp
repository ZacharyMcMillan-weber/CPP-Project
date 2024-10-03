# include <iostream>
# include <random>
# include <vector>
# include <sstream>
# include <iomanip>
#include <string>

using namespace std;


int max(int a, int b){
    int r;
    r = a - b;
    return r;
}


// int sub(int a, int b, int *r){
//     // int* r = new int;

//     *r = a - b;
// }


int main(){
    vector<int> data;

    default_random_engine en;
    uniform_int_distribution<> u{1, 10};

    for(int i{10}; i >0; i--){
        data.push_back(u(en));
    }
    stringstream mout;

    for(int n : data){
        mout << setw(3) << n << ": " <<  string(n, 'X') << endl;
    }

    cout << mout.str();

    cout << endl;

    normal_distribution<double> n{0.0, 1.0};

    for(int i{10}; i >0; i--){
        cout << n(en) << ',';
    
    }
    cout << endl;

}
    // int* r{new int};

    // sub(12, 4, r);

    // cout << *r << endl;

    // delete r;

    // int n{100};
    // int& m{n};

    // int* ptr{nullptr};

    // cout << n << endl; // 100
    // cout << m << endl; // 100

    // ptr = &n;
    
    // cout << ptr<< endl; // Address
    // cout << *ptr << endl; // 100
    // cout << &n << endl; // Address
    // cout << &m << endl;// Address

    // double*  dptr{new double};
    // *dptr = 3.14;
    // cout << dptr << endl;
    // cout << *dptr << endl;

    // delete dptr;
    // dptr = nullptr;


    // int* ids{new int[1000]}; // this runs any time you open a new application
    // for(int i{0}; i < 1000; i++){
    //     ids[i] = i+1;
    // }

    // cout << ids[100] << endl;
    
    // for(int i{0}; i < 1000; i++){
    //     // cout << ids[i] << ',' << endl;
    //     cout << &ids[i] << ',';
    //     if(i == 10){
    //         break;
    //     }
    // }

    // delete[] ids; // this runs when you hit the red x and close any type of application
    // return 0;


