#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(auto it = v.begin();it != v.end();it++)
    {
        cout << *it;
    }

    return 0;
}
