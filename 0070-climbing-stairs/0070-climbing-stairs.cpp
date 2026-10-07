class Solution {
public:
    int climbStairs(int n) {
        //1-1
        //2-2
        //3-3
        //4-5

        int k=1;
        int p=1;
        for(int i=1;i<n;i++){
            int temp=k;
            k=k+p;
            p=temp;

        }
        return k;
        
    }
};