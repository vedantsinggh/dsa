//15. 3Sum

/*
Given an integer array nums, return all the triplets [nums[i], 
nums[start], nums[k]] such that i != j, i != k, 
and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
*/
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int target = 0;
		sort(nums.begin(), nums.end());
		set<vector<int>> s;
		vector<vector<int>> output;
		for (int i = 0; i < nums.size(); i++){
			int start = i + 1;
			int end = nums.size() - 1;
			while (start < end) {
				int sum = nums[i] + nums[start] + nums[end];
				if (sum == target) {
					s.insert({nums[i], nums[start], nums[end]});
					start++;
					end--;
				} else if (sum < target) {
					start++;
				} else {
					end--;
				}
			}
		}
		for(auto triplets : s)
			output.push_back(triplets);
		return output;
	}
};
