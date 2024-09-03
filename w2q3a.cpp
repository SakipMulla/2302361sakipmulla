// function with default arguments egrectarea() with default value of breadth

#include <iostream>

using namespace std;

float recarea(float length, float breadth=5)
 { 
    return length * breadth;
 }

int main() 
{
    
    float length=12.0;
    float area=recarea(length);

    cout <<"rectangle area : " << area;
    
    return 0;
}

