#include <iostream>
#include <string>

class Account {
    private:
    // Data Members
        int id;
        double balance;
        std::string type;
        double rate;

    public:
    // Constructor -- Same as __init__ in python
        Account(int id):id(id), balance(0.0), type("Checking"), rate(0.0001){} 
        Account(int id, double b, std::string t, double rate):id(id), balance(b), type(t), rate(rate){
            
};

};

int main() {
    Account a{123, 100.0, "Checking", 0.005};
    Account b{234};

    Account* c = new Account(345, 100.0, "Checking", 0.005);
    Account* d = new Account(456);

    
    delete c, d;
    
    return 0;
}