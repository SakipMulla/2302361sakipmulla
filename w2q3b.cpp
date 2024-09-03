// function with default arguments egrectarea() with default value of breadth
#include <iostream>

using namespace std;

float recarea(float length, float breadth=5)
 { 
    return length * breadth;
 }

int main() 
{
    float length, ar;

    cout<<" Enter the value of length in cm : =";
    cin>> length;
   
    ar=recarea(length);

    cout <<"rectangle area : " << ar<<" cm by taking breadth as 5 cm";
    
    return 0;
}

