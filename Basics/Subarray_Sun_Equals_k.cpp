#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number of Elements : ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout << "Enter the Elements : ";
        cin >> arr[i];
    }

    int count = 0;

    int k;
    cout << "Enter the Sum value : ";
    cin >> k;

    for(int i = 0;i<n;i++)
    {
        int sum = 0;
        for(int j = i;j<n;j++)
        {
            sum+= arr[j];

            if(sum == k)
            {
                count++;
            }
        }
    }

    cout << "Count  : " << count;
}