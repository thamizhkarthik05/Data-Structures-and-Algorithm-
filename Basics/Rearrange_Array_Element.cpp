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

    int min_index = 0;
    int max_index = n-1;
    
    int largest = arr[n-1];
    int op = largest + 1;

    for(int i = 0;i<n;i++)
    {
        if(i%2==0){
        
            arr[i] = arr[i] + (arr[max_index] % op) * op;
            max_index--;     
        }
        else
        {

            arr[i] = arr[i] + (arr[min_index] % op) * op;   
            min_index++;        
        }
    }

    for(int i = 0;i<n;i++)
    {
        arr[i] = arr[i]/op;
    }

    for(int j = 0;j<n;j++)
    {
        cout << arr[j] << " "; 
    }
}

