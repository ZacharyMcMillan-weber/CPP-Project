#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

class Color {
public:
    Color(): red(0.0), green(0.0), blue(0.0){}
    Color(double r, double g, double b): red(r), green(g), blue(b){}
    Color(int r, int g, int b): red(r / 255.0), green(g / 255.0), blue(b /255.0){}

    string toInt(){
        stringstream sout;
        sout << static_cast<int>(red * 255)
             << "." << static_cast<int>(green *255)
             << "." << static_cast<int>(blue *255);
        return sout.str();
    }

    string toHex(){
        stringstream sout;
        sout << "#" << setfill('0') << hex << uppercase 
            << setw(2) << static_cast<int>(red * 255)
            << setw(2) <<static_cast<int>(green *255)
            << setw(2) << static_cast<int>(blue *255);
        return sout.str();
    }

private:
    double red, green, blue;

};

int main() {
    Color c1;
    Color c2(1.0, .5, .4);
    Color c3(24, 240, 255);

    cout << c1.toInt() << " - " << c1.toHex() << endl;
    cout << c2.toInt() << " - " << c2.toHex() << endl;
    cout << c3.toInt() << " - " << c3.toHex() << endl;
    return 0;
}

