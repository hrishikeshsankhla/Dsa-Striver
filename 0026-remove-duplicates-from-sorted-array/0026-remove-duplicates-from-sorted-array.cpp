class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;  // Edge case: empty array

        int p = 0;  // Pointer to track the position of the last unique element

        for (int q = 1; q < n; q++) {  // Start from the second element
            if (nums[p] != nums[q]) {  // Found a new unique element
                p++;  
                nums[p] = nums[q];  // Move the unique element to its correct position
            }
        }

        return p + 1;  // The number of unique elements is (p + 1)
    }
};
