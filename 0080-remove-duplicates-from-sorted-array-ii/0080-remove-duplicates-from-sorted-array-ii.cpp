class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n; // If there are ≤ 2 elements, no modification needed

        int p = 2; // Pointer for placing the next allowed element

        for (int q = 2; q < n; q++) {
            if (nums[q] != nums[p - 2]) { // Ensure at most two occurrences
                nums[p] = nums[q];
                p++; // Move forward in the array
            }
        }

        return p; // `p` is the count of valid elements
    }
};