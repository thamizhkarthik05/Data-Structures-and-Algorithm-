// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 9;
//     int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
//     int start = 0;
//     int end = 0;
//     int j,i;

//     int sum = arr[0];

//     for(i = 0;i<n;i++)
//     {
//         int currentSum = 0;
//         for(j = i;j<n;j++)
//         {
//             currentSum += arr[j];
            
//             if(currentSum > sum )
//             {
//                 sum = currentSum;
//                 start = i;
//                 end = j;
//             }

//         }


//     }

//     cout << "Max Sum : " << sum << endl;
//     cout << "[";
//     for(int k = start;k<=end;k++)
//     {
//         cout << arr[k] << " ";
//     }
//     cout << "]";
// }

//======================================================

//Optimized Approach

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

    int current = arr[0];
    int maxSum = arr[0];
    int start = 0;
    int end = 0;
    int tempStart;
    for(int i = 1;i<n;i++)
    {
        if(arr[i] > current + arr[i])
        {
            current = arr[i];
            tempStart = i;
        }
        else
        {
            current += arr[i];
        }

        if(current > maxSum)
        {
            maxSum = current;
            start = tempStart;
            end = i;
        }
    }

    
    cout << "Max Sum : " << maxSum << endl;
    cout << "[";
    for(int k = start;k<=end;k++)
    {
        cout << arr[k] << " ";
    }
    cout << "]";
}
