class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        int left = 1, right = x, ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // To prevent overflow, use mid <= x / mid instead of mid * mid <= x
            if (mid <= x / mid) {
                ans = mid;  // mid might be the answer, but we need to check higher values
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
