class Solution {
public:
    int maxArea(vector<int>& height) {

        // Start with the maximum possible width
        int l = 0;
        int r = height.size() - 1;

        int maxWater = 0;

        while (l < r) {

            // Distance between the two walls
            int width = r - l;

            // Shorter wall determines how much water we can hold
            int h = min(height[l], height[r]);

            // Water contained by these two walls
            int area = width * h;

            // Keep the best answer found so far
            maxWater = max(maxWater, area);

            // Discard the shorter wall
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }

        return maxWater;
    }
};