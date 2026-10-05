class Solution {
public:

    vector<int> find(vector<int> nums2, vector<int>&nums1){
        vector<int>ans;

        sort(nums2.begin(),nums2.end());
        unordered_map<int,int>mpp;

        for(int i=0;i<nums2.size();i++){

            if(mpp.find(nums2[i])==mpp.end()){

                mpp[nums2[i]]=i;

            }

        }
        for(int i=0;i<nums1.size();i++){

            ans.push_back(mpp[nums1[i]]);

        }
        return ans;


    }
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //first sort it and then 

        return find(nums,nums);
    }
};