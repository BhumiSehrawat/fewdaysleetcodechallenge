class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        // Increasing
        while (i < n - 1 && nums[i] < nums[i + 1])
            i++;
        if (i == 0) return false;
        // Decreasing
        int j = i;
        while (j < n - 1 && nums[j] > nums[j + 1])
            j++;
        if (j == i) return false;
        // Increasing
        int k = j;
        while (k < n - 1 && nums[k] < nums[k + 1])
            k++;
        if (k == j) return false;
        return k == n - 1;
    }
};