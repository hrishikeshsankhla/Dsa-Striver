class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element ;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count = 1;
                element = nums[i];
            }
            else if(element==nums[i]) count ++;
            else{
                count--;
            }
        }
        return element;
       
    }
};