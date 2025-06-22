#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter the Number 1: ";
    cin >> a;

    cout << "Enter the Number 2: ";
    cin >> b;
    
    cout << "Enter the Number 3: ";
    cin >> c;
    
    if(a >=b && a >= c)
        cout << "A is Greatest";
    else if(b >= a && b >=c)
        cout << "B is Greatest";
    else
        cout << "C is Greatest";


    return 0;
}