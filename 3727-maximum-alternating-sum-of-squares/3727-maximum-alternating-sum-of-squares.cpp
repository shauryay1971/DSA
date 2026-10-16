class Solution {
public:
    int findZero(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == 0) {
                return mid;
            } else if (nums[mid] < 0) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return high; // will return this if 0 is not found
    }
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long possum = 0;
        long long negsum = 0;
        if (nums[0] >= 0) {

            int i = 0;
            int j = nums.size() - 1;
            // 1 2 3 4
            while (i <= j) {
                possum = possum + nums[j] * nums[j];
                j--;
                if (i <= j) {
                    negsum = negsum + nums[i] * nums[i];
                    i++;
                }
            }
            return possum-negsum;

        } else if (nums[nums.size() - 1] <= 0) {
            int i = 0;
            int j = nums.size() - 1;

            while (i<=j) {
                 possum = possum + nums[i] * nums[i];
                 i++;
                 if(i<=j){
                     negsum = negsum + nums[j] * nums[j];
                    j--;
                 }
            }
            return possum-negsum;
        }



        //the code below will managae everthiing if elements in nums are with  different signs
        int k = findZero(nums); // nums[k] will be either negative or 0
        //-3 ,-2 , -1 , 1 , 2 , 4 , 5

        // if odd number of terms then no of pos will be more
        // if even then same number pos and neg

        int start = 0;
        int end = nums.size() - 1;
        int p = k + 1;

        while (start <= k || end >= p) {//there is = everywhere because if the cond only consisted of <,> then at start==k or at end==p the element at end or p,start or k will be missed
        //and as the positive sum is calculated first positive sum will have priority and will be bigger than negsum
            if (  end >= p && abs(nums[end]) >= abs(nums[start]) ) { // first do positive
                possum = possum + nums[end] * nums[end];
                end--;

            } else if ( start <= k && abs(nums[end]) <= abs(nums[start]) ) {
                possum = possum + nums[start] * nums[start];
                start++;
            }

            if ( k >= start &&( p==nums.size() || abs(nums[k]) <= abs(nums[p]) ) ) { //[-2,-4,-20,1] p goes out of bounds and nums[p] becomes invalid
                negsum = negsum + nums[k] * nums[k];
                k--;

            } else if ( p <= end &&( k==-1 || abs(nums[k]) >= abs(nums[p]) )) {
                negsum = negsum + nums[p] * nums[p];
                p++;
            }
        }
        return possum - negsum;
    }
};