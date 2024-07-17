class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int long long sum=0;
     int long long maxSum =nums[0];
     for(int i=0;i<nums.size();i++)
     {
        sum=sum+nums[i];
        maxSum=max(maxSum,sum);
        if(sum<0)
        {
            sum=0;
        }
     }
return maxSum;
    }
};