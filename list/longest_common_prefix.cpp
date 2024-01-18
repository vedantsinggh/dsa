//14. Longest Common Prefix
/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string common_word = strs[0];
		for (int i = 1; i < strs.size(); i++)
		{
			string internal_common_word;
			for (int k = 0; k < strs[i].size(); k++)
			{
				if (common_word[k] == strs[i][k]) internal_common_word += strs[i][k];
				else break;
			}
			common_word = internal_common_word;
			if (internal_common_word == "") break;
		}

		return common_word;
		
	}
};