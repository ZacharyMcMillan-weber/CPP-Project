#include <iostream>
#include "canvas.h"

using namespace std;

int main(){
  canvas::Text c1(80, 30, 'x');
  c1.strokePoint(15,10);
  c1.strokeCircle(15,10, 6);
  c1.draw();


  canvas::HTML5 c2(80, 30, 'x');
  c2.strokePoint(15,10);
  c2.strokeCircle(15,10, 6);
  c2.draw();

  
  canvas::SVG c3(80, 30, 'x');
  c3.strokePoint(15,10);
  c3.strokeCircle(15,10, 6);
  c3.draw();

  return 0;
}