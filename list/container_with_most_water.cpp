// 11. Container with most water

/*
You are given an integer array height of length n.
There are n vertical lines drawn such that 
the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container,
such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lower = 0;
        int upper = height.size() - 1;
        int area = 0;

        while (lower < upper) {
            int currentArea = min(height[lower], height[upper]) * (upper - lower);
            area = max(area, currentArea);

            if (height[lower] < height[upper]) {
                lower++;
            } else {
                upper--;
            }
        }

        return area;
    }
};