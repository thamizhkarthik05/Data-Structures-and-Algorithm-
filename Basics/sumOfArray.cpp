#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter the Number of Elements :" << endl;
    cin >> n;
    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cout << "Enter the Number : " << i+1;
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum : " << sum;

}