#include <iostream>
#include <string>

using namespace std;

int main() {
const char* sptr = "Greetings";
while(*sptr){
cout << sptr++ << endl;
}
}
