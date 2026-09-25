class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
          //true cases will always be adjacent
            if(mp.count(nums[i]))//if true then duplicate found
            {
                // if I have already seen this number, then check for condition (i - j) <= k
                if((i-mp[nums[i]])<=k)//no need of abs as new index- previous index is always positive
                    return true;
            }
            // if I have not seen this number before, insert the number with its position in the map
            // and if the number is already present in the map, then update the position of that number
            mp[nums[i]] = i;//for future case if cond was not met now
        }
        // after the complete traversal, if we don't find a pair to satisfy the condition, return false
        return false;
    }
};