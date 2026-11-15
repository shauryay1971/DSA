class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        //sliding window
        if(nums.size()==1){
            return 1;

        }
        int i=0;
        int j=1;
        int maxm=1;
        here:
        if(nums[i]>nums[j]){//dec
                while(j+1<nums.size() && nums[j]>nums[j+1]){
                    j++;
                }
                maxm=max(maxm,j-i+1);
                if(j+1!=nums.size()){
                    i=j;
                    j++;
                    goto here;

                }

        }else if(nums[i]<nums[j]){
            while(j+1<nums.size() && nums[j]<nums[j+1]){
                    j++;
                }
                maxm=max(maxm,j-i+1);
                if(j+1!=nums.size()){
                    i=j;
                    j++;
                    goto here;

                }


        }else{//equal

            if(j+1!=nums.size()){
                i=j;
                j=j+1;
                goto here;

            }

        }
        return maxm;
        
    }
};