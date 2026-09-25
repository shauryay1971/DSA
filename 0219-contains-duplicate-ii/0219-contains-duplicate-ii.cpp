class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, pair<int, int>> mpp;
        // unordered_map<int,pair<int,int>> :: iterator it=mpp.begin(); this is
        // wrong -- should not make an iterator before the mapping because right
        // now  when the map is empty mpp.begin()==mpp.end() and it will not
        // update itself after mapping

        for (int i = 0; i < nums.size(); i++) {

            if (mpp.find(nums[i]) == mpp.end()) {
                mpp[nums[i]].first = i; // mpp[nums[i]] is the pair and .first
                                        // is the first elemnt of the pair
                // in first we store the last index
                mpp[nums[i]].second =
                    k +
                    5; // the difference right now will be larger than needed
            } else {   // number exist in the map meaning duplicates exist

                mpp[nums[i]].second = min(
                    mpp[nums[i]].second,
                    abs(i -
                        mpp[nums[i]].first)); // mpp[nums[i]].first  right now
                                              // holds the previous index at
                                              // which the duplicate was found
                mpp[nums[i]].first = i;       // update i
            }
        }
        unordered_map<int, pair<int, int>>::iterator it = mpp.begin();
        for (; it != mpp.end(); it++) {
            if ((it->second).second <= k) {
                return true;
            }
        }
        return false;
    }
};