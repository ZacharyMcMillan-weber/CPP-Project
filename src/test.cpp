#include <iostream>
#include <iomanip>
using namespace std;

// cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) <<"3*x" << setw(6) <<"4*x" << setw(6) << "5*x" << endl;
// int x = 1, y = 1;
// while(x <= 5){
//     x ++;
//   cout << setw(4) << x;
//   while(y <= 5){
//       y++ ;
//       cout << setw(6) << x * y;
//   }
  
//   cout << endl;
// }
int main(){
// cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) <<"3*x" << setw(6) <<"4*x" << setw(6) << "5*x" << endl;
// int x = 1, y = 1;
// while(x <= 5){
//   x ++;
//   cout << setw(4) << x;
//   while(y <= 5){
//       y++ ;
//       cout << setw(6) << x * y;
//   }
  
//   cout << endl;

cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) <<"3*x" << setw(6) <<"4*x" << setw(6) << "5*x" << endl;
int y = 2;
for(int x = 1; x<=5; x++){
  cout << setw(4) << x;
  do{
    int sum = x * y;
    cout <<setw(6)<< sum;
    y++;
  }while(y < 6);
  
  cout << endl;
}
}