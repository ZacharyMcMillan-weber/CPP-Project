#include <iostream>
#include <vector>

class Shape{
   public:
      // Let's make this a pure virtual function 
      virtual void draw() = 0;

      virtual ~Shape(){}
};

class Point : public Shape {
   public:
      int x, y;
      Point(int x, int y): x(x), y(y){}
      virtual void draw(){
         std::cout<< "(" << x << "," << y << ")" << std::endl; 
      }
};

class Rectangle : public Shape {
   public:
      Point p;

      int w,h;
      Rectangle(Point p, int w, int h): p(p), w(w), h(h){}

      bool is_square(){
         return w == h;
      }

      virtual void draw(){
         p.draw();
         std::cout<< "[" << w << "," << h << "]" << std::endl; 
      }
};

int main(){
   std::vector<Shape*> v;
   v.push_back(new Point{5, 7});
   v.push_back(new Rectangle{Point{4, 6}, 10, 15});


   for(Shape* s : v){
      s->draw();
      std::cout << std::endl;
   }

   return 0;
}