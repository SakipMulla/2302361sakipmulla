//display a message "well done" n number of times (while/do while/for)

#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout<<"don while loop !!"<<endl;
    cout << "Enter the number of times to display the message: =";
    cin >> n;

   int i=0;
   do
   {
    cout<<"well done !!"<<endl;
    i++;
   } while (i<n);
     
    return 0;
}

