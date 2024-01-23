//16. 3Sum Closet
/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.*/

#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
using namespace std;
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
        int minSum = 9999999;
        int result = 0;
		for (int i = 0; i < nums.size(); i++){
			int start = i + 1;
			int end = nums.size() - 1;
			while (start < end) {
				int sum = nums[i] + nums[start] + nums[end];
                if (abs(sum - target) < minSum) {
                    minSum = abs(sum - target);
                    result = sum;
                }
				if (sum < target) {
					start++;
				} else {
					end--;
				}
			}
		}
        return result;
	}
};