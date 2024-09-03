//display a message "well done" n number of times (while/do while/for)

#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout<<"using while !!"<<endl;
    cout << "Enter the number of times to display the message: =";
    cin >> n;

   int i=0;
   while (i<n)
   {
    cout<<"well done !!"<<endl;
    i++;
   }
   
    return 0;
}
