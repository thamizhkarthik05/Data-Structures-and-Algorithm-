#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "Size : " << v.size() << endl;

    cout << "Element : ";
    for(int i : v)
    {
        cout << i << " ";
    }

    v.resize(5,99);
    
    cout << "After Resizing : ";
    for(int i = 0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    v.clear();
    cout << "Items cleared!" << endl;
    cout << "Size : " << v.size() << endl;

    return 0;
}