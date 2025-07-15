#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter the Number of day : ";
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the price for the day : " << endl;
        cin >> arr[i];
    }

    int profit = 0;
    int min_price = arr[0];
    int max_profit = 0;
    int buyDay = -1;
    int sellDay = -1;

    for(int i = 0;i<n;i++)
    {
        if(arr[i] < min_price)
        {
            min_price = arr[i];
            buyDay = i;
        }
        else
        {
            profit = arr[i] - min_price;
            if(profit > max_profit)
            {
                max_profit = profit;
                sellDay = i;
            }
        }
    }

    cout << "Max Profit : " << max_profit << endl;
    cout << "Buy Day : " << buyDay << endl;
    cout << "Sell Day : " << sellDay << endl;
}