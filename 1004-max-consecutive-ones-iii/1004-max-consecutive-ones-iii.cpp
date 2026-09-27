class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //by sliding window
        int i=0,j=0,p=k;
        int maxm=0;

        for(int j=0;j<nums.size();){
            if(nums[j]==1){
                j++;
                maxm=max(maxm,j-i);

            }else if(nums[j]==0 && p>0){
                j++;
                p--;
                maxm=max(maxm,j-i);


            }else if(p==0){//for moving i
                if(nums[i]==0){
                    i++;
                    p++;

                }else {
                    i++;
                }


            }


        }

        return maxm;

        
    }
};