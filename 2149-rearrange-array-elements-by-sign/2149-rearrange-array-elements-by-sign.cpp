class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        //even number of elements -- 

        vector<int> pos;
        vector<int> neg;

        for(int i=0;i<nums.size();i++){

            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }

        }
        bool turn = true;
        int p=0;
        int k=0;

        for(int i=0;i<nums.size();i++){

            if(turn){
                nums[i]=pos[p];
                p++;
                turn=false;

            }else{
                nums[i]=neg[k];
                k++;
                turn=true;
            }


        }
        return nums;
        
    }
};