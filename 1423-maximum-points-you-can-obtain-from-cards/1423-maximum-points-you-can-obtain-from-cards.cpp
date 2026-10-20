class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int win_size=cardPoints.size()-k;//size of the window that will have the lowest sum
        int i=0;
        int j=win_size-1;//end of the window
        int sum=0;

        for(int k=0;k<cardPoints.size();k++){
            sum+=cardPoints[k];
        }

        int sum1=0;

        for(int k=0;k<=j;k++){
            sum1+=cardPoints[k];
        }
        int minm =sum1;
        j++;//move the window forward
        while(j<=cardPoints.size()-1){

        int sum2 =sum1+cardPoints[j]-cardPoints[i];
        minm=min(sum2,minm);
        sum1=sum2;
        i++;
        j++;

        }
        return sum-minm;
    }
};