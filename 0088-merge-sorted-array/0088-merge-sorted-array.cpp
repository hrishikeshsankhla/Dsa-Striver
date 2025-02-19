class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m-1;
        int q = n-1;
        int last = m+n-1;
        while(p>=0 && q>=0) {
            if(nums1[p]>nums2[q]) { // // p>q
                nums1[last] = nums1[p];
                p--;
            }
            else{ // p<=q
                nums1[last] = nums2[q];
                q--;

            }
            last--;
        }
        while(q>=0){
            nums1[last] = nums2[q];
            q--;
            last--;
        }
        
    }
};