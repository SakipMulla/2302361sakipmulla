// library function eg. math.h

#include <iostream>
#include <cmath>
using namespace std;


// abs(x)	Returns the absolute value of x
// ceil(x)	Returns the value of x rounded up to its nearest integer
// floor(x)	Returns the value of x rounded down to its nearest integer
// fmax(x, y)	Returns the highest value of a floating x and y
// fmin(x, y)	Returns the lowest value of a floating x and y
// log(x)	Returns the natural logarithm of x
// pow(x, y)	Returns the value of x to the power of y
// round(x)	Returns x rounded to the nearest integer
// sqrt(x)	Returns the square root of x

int main()
 {
  cout << "Square root of 64 is: " << sqrt(4) << "\n";
  cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";
  cout << "The natural logarithm of 2 is: " <<log(2) << "\n";
  cout << max(5, 10)<<"\n";
  cout << min(5, 10)<<"\n";
  cout << round(0.60)<<"\n";
  cout << round(0.40)<<"\n";
  cout << pow(2.0f, 8.0f) << "\n";
  cout << floor(0.60)<<"\n";
  cout << floor(0.40)<<"\n";
  cout << abs(4.7) << "\n"; 
  cout << abs(3) << "\n";
  cout << ceil(0.60) << "\n";
  cout << ceil(0.40) << "\n";

  return 0;
}

