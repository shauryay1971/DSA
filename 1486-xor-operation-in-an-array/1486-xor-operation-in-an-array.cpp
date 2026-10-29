class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;
        int next=start;
        for(int i=1;i<n;i++){

            next=start+2*i;
            ans=ans^next;

            

        }
        return ans;
        
    }
};