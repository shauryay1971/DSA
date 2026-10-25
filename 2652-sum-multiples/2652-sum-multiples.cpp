class Solution {
public:
    int sumOfMultiples(int n) {
        int i=1;
        int count=0;
        for(;i<=n;i++){
            if(i%3==0 || i%5==0 ||i%7==0){
                count=count+i;

            }

        }
        return count;
        
    }
};