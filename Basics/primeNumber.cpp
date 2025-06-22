#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if(num<= 1)
        cout << "Not a prime Number!";
    // else
    // {
    //     int c = 0;

    //     for(int i = 1;i<=num;i++)
    //     {
    //         if(num%i == 0)
    //             c++;
    //     }

    //     if(c == 2)
    //         cout << "Prime Number!";
    //     else  
    //         cout << "Not a Prime Number!";
    // }
    else
    {
        bool isPrime = true;

        for(int i = 2;i<= sqrt(num);i++)
        {
            if(num % i == 0)
                isPrime = false;
        }

        if(isPrime)
            cout << "Prime Number!";
        else
            cout << "Not a Prime Number!";
    }
    
}