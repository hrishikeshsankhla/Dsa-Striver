class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp;
        if (n == 1 || k == 0) return;  // Edge case: No need to rotate

        k = k % n;

        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=n-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        for(int i = 0;i<k;i++){
            nums[i]=temp[i];
        }

        
    }
};