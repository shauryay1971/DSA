class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;
        int count = 0;
        int k;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
                k = i;
            }else{
                 product = product * nums[i]; // product of all elements
            }
        }
        if (count >= 2) {
            vector<int> answer(nums.size(),0);
            return answer;
        } else if (count == 1) {
            vector<int> answer(nums.size(),0);
            answer[k] = product;
            return answer;
        } else {
            vector<int> answer(nums.size());
            for (int i = 0; i < nums.size(); i++) {
                answer[i] = product / nums[i];
            }
            return answer;
        }
    }
};