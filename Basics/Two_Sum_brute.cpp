#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4,5,6,1,3};
    int target = 9;

    for(int i = 0;i<5;i++)
    {
        for(int j = i+1;j<5;j++)
        {
            if(arr[i]+ arr[j] == target)
            {
                cout << "Indices : " << i << " and " << j << endl;
            }
        }
    }
}