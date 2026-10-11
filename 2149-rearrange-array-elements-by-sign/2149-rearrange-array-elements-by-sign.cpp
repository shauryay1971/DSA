class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> ans;

        int p=0;
        int n=0;
         bool turn =true;


        while(ans.size()!=nums.size()){

            if(turn){
                while(p<nums.size() && nums[p]<0){
                    p++;
                }
                ans.push_back(nums[p]);
                p++;
                turn =false;

            }else{
                while(n<nums.size() && nums[n]>0){
                    n++;

                }
                ans.push_back(nums[n]);
                n++;
                turn=true;
            }


        }
        return ans;
        
    }
};