// function with constant arguments eg circle area() with cost value of pi

#include <iostream>

using namespace std;

float circlearea(float radius, const float pi =3.14159)
 { 
    return pi*radius * radius;
 }

int main() 
{
    float radius, ar;

    cout<<" Enter the value of radius in cm : =";
    cin>> radius;
   
    ar=circlearea(radius);

    cout<<"taking constant value of pi=3.14159"<<endl;
    cout <<"circle area : " << ar;
    
    return 0;
}
