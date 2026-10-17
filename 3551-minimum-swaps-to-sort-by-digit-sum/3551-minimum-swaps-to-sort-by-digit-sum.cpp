class Solution {
public:
    int minSwaps(vector<int>& nums) {

        unordered_map<int,int> mpp;
        vector<pair<int,int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]=i;//storing the index

            int sum = 0;
            int k = nums[i];
            while (k != 0) {
                sum = sum + k % 10;
                k = k / 10;
            }
            ans.push_back(pair<int,int>());//need extra parentheses
            ans[i].first = sum;
            ans[i].second = nums[i];
        }

        sort(ans.begin(), ans.end());
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == ans[i].second) {
                continue;

            } else {
                swap(nums[i],nums[mpp[ans[i].second]]);
                //have to update the map too
                
                mpp[nums[mpp[ans[i].second]]]=mpp[ans[i].second];
                count++;

            }
        }

        return count;
    }
};