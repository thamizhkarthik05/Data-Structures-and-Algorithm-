#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twosum(vector<int>& nums,int target)
{
    unordered_map<int,int> map;

    for(int i = 0;i<nums.size();i++)
    {
        int complement = target - nums[i];

        if(map.find(complement) != map.end())
        {
            return {map[complement],i};
        }

        map[nums[i]] = i;
    }

    return {};
}


int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = twosum(nums,target);

    if(!result.empty())
    {
        cout << "Indices : " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No solution found" << endl;
    }

    return 0;
}