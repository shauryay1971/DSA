class Solution {
public:
    int findMin(vector<int>& nums) {
        //we have to use some modified binary search
        //we will use the last and the starting index 
        int high=0;
        int low =0;
        if(nums[0]>nums[nums.size()-1]){

            high=0;
            low=nums.size()-1;

        }else{
           return nums[0];
        }
        int mid=(high+low)/2;
        while(low!=(high+1)){

            mid=(high+low)/2;

            if(nums[mid]>nums[high]){
                high=mid;

            }else if(nums[mid]<nums[low]){
                low=mid;

            }


        }
        return nums[low];



    }
};