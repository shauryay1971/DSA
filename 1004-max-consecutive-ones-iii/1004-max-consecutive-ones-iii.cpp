class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // sliding window -- we can try to keep the woindow size constant and
        // only increase it when the conditons meet we will only move the window
        // forward if a particular set of 0 and 1 will satisfy the conditions
        // then only we will update the maxm at the end and not update it at
        // each step;

        int i = 0;
        int j = 0;
      
        int num_z = 0;

        for (; j < nums.size();) {

            if (nums[j] == 0 && num_z >= k) {//here we will move the last valid window and keep its size constant as we know that the size right now is valid and at the end we do not need to return the indexes but the window size

            //right now it does not matter if num_z increases past the value of k as if in the future there exit a better bigger window then we will store that 
                j++;//move the window forward from the front
                num_z++;
                if (nums[i] == 0) {
                    i++;//move it fromt the back keeping the size constant 
                    num_z--;

                } else {
                    i++;
                }

            } else if(nums[j]==1 && num_z>k){//the window size in this and the above code is valid as it was made when num_x was ==k ,

            j++;
            if(nums[i]==0){
                i++;
                num_z--;


            }else{
                i++;
            }


            }
            else if (nums[j] == 0 && num_z < k) {//the last window size created by this will be valid
                num_z++;
                j++;
            } else if(nums[j]==1) {
                j++;

            }
        }
        return j-i;//final maxm window size
    }
};