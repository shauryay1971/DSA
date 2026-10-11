class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> ans;

        int i = 1;
        int p = sqrt(n);

        if (p * p == n) {

            for (; i < p; i++) {

                if (n % i == 0) {
                    ans.push_back(i);
                    ans.push_back(n / i);
                }
            }
            ans.push_back(p);

        } else {

            for (; i <= p; i++) {

                if (n % i == 0) {
                    ans.push_back(i);
                    ans.push_back(n / i);
                }
            }
        }
        sort(ans.begin(),ans.end());

        if(k>ans.size()){
            return -1;

        }else{
            return ans[k-1];
        }
    }
};