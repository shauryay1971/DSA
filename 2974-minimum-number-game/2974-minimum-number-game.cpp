class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<nums.size();){
            swap(nums[i],nums[i+1]);
            i=i+2;

        }
        return nums;
        
    }
};