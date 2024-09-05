# include <iostream>
# include <string>
using namespace std;

/*
int main() {
    short day;
    string name;
    cout << "Enter a day number between 1 and 7: " << endl;
    cin >> day;
    if (day == 1){name = "Sunday";  }
    else if (day == 2){name = "Monday"; }
    else if (day == 3){name = "Tuesday";    }
    else if (day == 4){name = "Wednesday";  }
    else if (day == 5){name = "Thursday";   }
    else if (day == 6){name = "Friday"; }
    else if (day == 7){name = "Saturday";   }
    else {name = "Invalid Name";    }
    cout << "Day of the week is " << name << endl;
    return 0;
}
*/
// This is the same as above only this time we are using switch cases

int main() {
    short day; string name = "";
    cout << "Enter a day number(between 1 and 7): " << endl; cin >> day;
    switch (day)
    {
    case 1: name = "Sunday"; break;
    case 2: name = "Monday"; break;
    case 3: name = "Tuesday"; break;
    case 4: name = "Wednesday"; break;
    case 5: name = "Thurday"; break;
    case 6: name = "Friday"; break;
    case 7: name = "Saturday"; break;
    default: name = "Invalid input";
    }
    cout << "Day of the week is " << name << endl;
    return 0;
}