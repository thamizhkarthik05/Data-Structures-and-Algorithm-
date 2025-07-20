#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number of rows: ";
    cin >> n;
    int triangle[n][n];

    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            if(j == 0 || j== i)
            {
                triangle[i][j] = 1;
            }
            else
            {
                triangle[i][j] = triangle[i-1][j-1]+triangle[i-1][j];
            }
        }
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << " " << endl;
    }

}