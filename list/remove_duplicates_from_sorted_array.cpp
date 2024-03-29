// 26. Remove Duplicates from Sorted Array

/*
Given an integer array nums sorted in non-decreasing order,
remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same. 
Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k,
to get accepted, you need to do the following things:

Change the array nums such that the first k elements
of nums contain the unique elements in the order they were present in nums initially.
The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last_element = -1;
        int k = 1;
        for (int i = 0; i < nums.size(); i++){
                if (i == 0) last_element = nums[i];
                else{
                    if (last_element == nums[i])
                        nums[i] = 101;
                    else {
                        k++;
                        last_element = nums[i];
                    }
                }
                
            }
        sort(nums.begin(), nums.end());
        return k;
    }
};