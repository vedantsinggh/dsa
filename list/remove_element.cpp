// 27. Remove Element

/*
Hint
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.*/
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int last_index = nums.size() - 1;

		for (int i = 0; i < nums.size(); i++)
		{
			if (i > last_index) break;
			
			if (nums[i] == val)
			{
				while (nums[last_index] == val && last_index > i) last_index-=1;
				nums[i] = nums[last_index];
				last_index -= 1;
			}
		}
		return last_index + 1;
	}
};
