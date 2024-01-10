//1. Two Sum
/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order.
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;

        for (int i=0; i<nums.size(); i++)  
        n.push_back(nums[i]);

        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size() - 1;

        while (true)
        {
            if (nums[start] + nums[end] == target)
                break;
            
            if (nums[start] + nums[end] < target){
                start++;
                continue;
            }

            if (nums[start] + nums[end] > target)
            {
                end--;
                continue;
            }
        }
        int s=-1,e=-1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[start] == n[i] && s==-1)
                s = i;
            if (nums[end] == n[i] && e==-1 && s!=i)
                e = i;
        }
        return {s,e};
    }
};