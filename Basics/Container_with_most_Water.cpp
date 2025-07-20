#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number of Water Level : ";
    cin >> n;
    
    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cout << "Enter the Water Level: ";
        cin >> arr[i];
    }

    int left = 0;
    int right = n-1;
    int maxArea = 0;

    while(left < right)
    {
        int area = min(arr[left],arr[right]) * (right - left);
        maxArea = max(area,maxArea);

        if(arr[left] < arr[right])
            left++;
        else
            right--;
    }

    cout << "Maximam Area covered : " << maxArea;

}