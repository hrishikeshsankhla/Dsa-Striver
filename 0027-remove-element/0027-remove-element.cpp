class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int p,q;
        for(int i = 0;i<n;i++){
            if(nums[i]==val){
                p = i;
                break;
            }
        }
        q = p+1;
        while(q<n){
            if(nums[q]!=val){
                swap(nums[p],nums[q]);
                q++;
                p++;
            }else{
                q++;
            }
        }
        return p;
        
    }
};