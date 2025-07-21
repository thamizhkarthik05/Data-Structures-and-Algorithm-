#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the Number of Rows : ";
    cin >> n;
    cout << "Enter the Number of Cols: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter the Values of the Matrix!" << endl;
    
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cout << "Enter the Value " << i+1 << "" <<  j+1 << " :";
            cin >> arr[i][j];
        }
    }

    int rowBegin = 0;
    int colBegin = 0;
    int rowEnd = n-1;
    int colEnd = m-1;

    while(rowBegin<=rowEnd && colBegin <= colEnd)
    {
        for(int i = colBegin;i<= colEnd;i++)
        {
            cout << arr[rowBegin][i] << " ";
        }
        rowBegin++;

        for(int  i = rowBegin;i<= rowEnd;i++)
        {
            cout << arr[i][colEnd] << " ";
        }
        colEnd--;

        for(int i = colEnd;i>=colBegin;i--)
        {
            cout << arr[rowEnd][i]  << " ";
        }
        rowEnd--;

        for(int i = rowEnd;i>=rowBegin;i--)
        {
            cout << arr[i][colBegin] << " ";
        }
        colBegin++;


    }


}
