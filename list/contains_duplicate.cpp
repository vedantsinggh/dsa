// 217. Contains Duplicate
/*
Given an integer array nums,
 return true if any value appears at least twice in the array,
 and return false if every element is distinct.
*/

#include <vector>
#include <algorithm>

class Solution {
    public:
         bool containsDuplicate(std::vector<int>& nums){
            bool result = false;

            std::sort(nums.begin(),nums.end());

            for (int i = 0; i < nums.size(); i++)
               if (i > 0) if (nums[i] == nums[i-1]){result = true; break;};  
            return result;
         }
};