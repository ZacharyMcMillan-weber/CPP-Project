#include <iostream>
#include <string>
#include <iomanip>

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
        Account(int id, double b, std::string t, double rate):id(id), balance(b), type(t), rate(rate){}

    int getID() const { return id;} // Getter / Accessor 
    void setID(int id) {this->id = id;} // Setter, Mutator only need to use 'this->' when setting new name to the same as the old name 

    int getBalance() const { return balance; }
    void setBalance(double b) {balance = b;}

    const std::string&  getType() const{return type;}
    void setType(const std::string& type){this->type = type;}
  
    double getRate() const{return rate;}
    void setRate(double r) {rate = r;}
    
    void show(){
        std:: cout << std::setw(10) << "ID: " << id << std::endl
        << std::setw(10) << "BALANCE: " << balance << std::endl
        << std::setw(10) << "ACCOUNT TYPE: " << type << std::endl
        << std::setw(10) << "RATE: " << rate << std::endl;
        
    }
};

int main() {
    Account a{123, 100.0, "Checking", 0.005};
    Account b{234};

    Account* c = new Account(345, 100.0, "Checking", 0.005);
    Account* d = new Account(456);

    a.show();
    b.show();
    c->show();
    d->show();

    delete c, d;

    return 0;
}