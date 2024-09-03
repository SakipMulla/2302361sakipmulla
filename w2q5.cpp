// over loading area() to calculate area of various shapes based on arguments

#include <iostream>

using namespace std;

double area(double radius, const double pi =3.14159)//circle
 { 
    return pi*radius*radius;
 }

 float area(float length, float breadth)//rectangle
 {
    return length*breadth;
 }

 int area(int side)//square
 {
    return side*side;
 }

int main() 
{
   // putting fix values

    cout<<"area circle="<<area(5.0)<<" sq. cm"<<endl;
    cout<<"area of rectangle="<<area(2.2f,6.0f)<<" sq. cm"<<endl;
   cout<<"area of square="<<area(10)<<" sq. cm"<<endl;
  
    return 0;
}

