class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
            int count=0;
            int remainder=0;
            here:
        while(numBottles!=0){
            count=count+numBottles;//15
            remainder=remainder+numBottles%numExchange;//3 +3

            numBottles=numBottles/numExchange;//3
        }
        while(remainder>=numExchange){
        numBottles=remainder/numExchange;
        remainder=remainder%numExchange;
        goto here;

        }
        return count;
        
    }
};