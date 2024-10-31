#include <iostream>
#include <vector>
using namespace std;

void operator+(vector<int>& a, int b){
    a.push_back(b);
}

void operator<<(vector<int>& a, int b){
    for(int i(0); i < b; i++){
        a.pop_back();
    }

}

ostream& operator<<(ostream& out, vector<int> v){
    for(int e: v){
        out << e << "  ";
    }

    return out;
}

class C {
    private:
        double number = 4.5;
    
    public:
        C& operator+(int b){
            number += b;
            return *this;

        }

        C& operator-(int b){
            number -=b;
            return *this;
        }

        void operator++(){
            number++;
        }

        bool operator==(int b){
            return number == b;
        }

        friend ostream& operator<<(ostream& out, C& c){
            out << c.number;
            
            return out;
        }
};

int main(){
    vector<int> v{12, 3, 100, 72, 86, 68};
    
    v + 10;// The intention is to push 10 at the back of the vector ==> operator+(v, 10)

    cout << v << endl;

    v << 3;//The intenition is to pop the last three elements of the vector

    cout << v << endl;

    C a;

    a + 3 + 6 + 7; //a.operator+(3)
    cout << a << endl;
    a - 6;
    cout << a << endl;
    ++a; // a.operator++
    cout << a << endl;
   cout << (a==15) << endl; // 
    cout << a << endl;

    return 0;
}