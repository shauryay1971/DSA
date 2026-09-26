class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int p = k;
        int maxm = 0;

        for (; j < nums.size(); ) {//do. not increment j here twice

            if (nums[j] == 0 && p > 0) {
                j++;
                p--;
                maxm = max(maxm, (j - i));

            } else if (nums[j] == 0 && p == 0) {

                maxm = max(maxm, (j - i));
                int l = 1;
                while (l != 0) {

                    if (nums[i] == 1) {
                        i++;
                    } else if (nums[i] == 0 && l > 0) {
                        l--;
                        i++;
                    }
                    j = i;
                    p = k;
                }
            }else if(nums[j]==1){
                j++;
                maxm=max(maxm,(j-i));//for edge case when it ends on a 1

            }
        }
        return maxm;
    }
};