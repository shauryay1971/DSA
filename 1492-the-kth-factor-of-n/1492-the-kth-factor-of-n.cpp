class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> ans;
        int p=sqrt(n);
        int i = 1;
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
        //1,12,2,6,3,4
        //factors will alwas be in pair so even no of factors

        //1,100,2,50,4,25,5,20,10

        if(k>ans.size()){
            return -1;

        }else{
            if(ans.size()%2==0){
            if(k>(ans.size()/2)){
                k=k-ans.size()/2;

                return ans[(ans.size()-1) -(k-1)*2];

            }else{
                return ans[(k-1)*2];
            }
            }else{
            if(k>(ans.size()/2)+1){
                k=k-(ans.size()/2)-1;

                return ans[(ans.size()-2) -(k-1)*2];

            }else{
                return ans[(k-1)*2];
            }



            }
        }
    }
};