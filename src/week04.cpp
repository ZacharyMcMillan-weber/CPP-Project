#include <iostream>
#include <string>
using namespace std;

enum  class DayOfWeek {
    Sun, Mon, Tue, Wed, Thu, Fri, Sat
}; // Notice semi-colon at end of enumerator outside of bracket

//struct can be substituted with 'class'

string get_day_name(DayOfWeek day){
    switch (day){
    case DayOfWeek:: Sun: return "Sunday";
    case DayOfWeek:: Mon: return "Monday";
    case DayOfWeek:: Tue: return "Tuesday";
    case DayOfWeek:: Wed: return "Wednesday";
    case DayOfWeek:: Thu: return "Thursday";
    case DayOfWeek:: Fri: return "Friday";
    default: return "Saturday";
    }
}


struct Marker {
    string color, size, brand;
    bool has_lid;
    double price;

};

// The & at the end of Marker means that it is seeing "redM" as a reference
// Use const as a protection to prevent anyone from chaning redM inside of the function 
string Display_marker(const Marker& marker) 
{
    // marker.price = 0.98; //// notice how marker becomes an error because we used const to prevent changing values
    return marker.brand + " (" + marker.color + ")";
}


int main()
{
    DayOfWeek today = DayOfWeek::Thu;
    Marker redM{"RED", "MEDIUM", "EXPO", true, 0.5};
    Marker blueM{"BLUE", "LARGE", "EXPO", true, 0.86};
    Marker greenM{"GREEN", "FINE TIP SMALL", "SHARPIE", true, 0.5};
    Marker blackM{"BLACK", "SMALL", "EXPO", false, 0.5};

    cout << "Today is " << get_day_name(today)  << endl;

    cout << "My marker is " << Display_marker(redM) << endl;

    int count{10};
    int& number_of_students{count};

    cout << count << endl;
     
    number_of_students =12;

    cout << number_of_students << endl;

    return 0;
}

enum class BillKind
{
    ONE, FIVE, TEN, TWENTY, FIFTY, HUNDRED
};

struct Bill
{
    int count;
    short value;
    BillKind kind;
};

// Bill two_hundreds {10, 20, BillKind::TWENTY};
