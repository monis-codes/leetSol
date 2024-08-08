class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        // Check for drops in the array
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }

        // Check if the last element is greater than the first element
        // This accounts for the rotation
        if (nums[n - 1] > nums[0]) {
            count++;
        }

        // Return true if the array can be considered a rotated sorted array
        return count <= 1;
    }
};
