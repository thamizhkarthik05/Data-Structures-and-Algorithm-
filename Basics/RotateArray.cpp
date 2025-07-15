#include <iostream>
#include <algorithm>
using namespace std;


void reverse(int arr[],int start,int end)
{   
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}




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

    int no;
    cout << "Number of Elements to be rotated : ";
    cin >> no;

    no = no%n;
    
    reverse(arr,0,n-1);
    reverse(arr,0,no-1);
    reverse(arr,no,n-1);

    cout << "Rotated Array : " << endl;

    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    
    }



}