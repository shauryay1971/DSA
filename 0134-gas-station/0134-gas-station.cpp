class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(gas.size()==1 && gas[0]>=cost[0]){
            return 0;

        }else if(gas.size()==1){
            return -1;

        }
//first increase the gas and then deduct the cost
        for(int i=0;i<gas.size();i++){
            int Gas=gas[i];//i is present station index
            int Cost=cost[i];//to go from i to i+1

            if(Cost>Gas){
                continue;

            }else{
                int j=i;
                int left=Gas-Cost;//travel cost of the first travel
                while(j!=gas.size()-1){
                    j++;//traveled to next station cost has already been deducted
                    left=left+gas[j];//got gas at next station (reached next station)
                    if(j==gas.size()-1){//rightnow at new station at the end of the array
                        left=left-cost[j];//reached the first station of the array
                        j=0;//present station
                        if(left<=0 && i!=j){
                            goto here;

                        }
                        if(i==j){//case when we started from the first station of the array and then reach the first again
                            return 0;

                        }
                        break;//break out of this loop if reached end of the array
                    }
                    left=left-cost[j];//deduction of cost of next travel
                    if(left<=0){
                        goto here;

                    }

                }
                if(i==gas.size()-1){//some fix
                    j=0;

                }
                left=left+gas[0];//this should only hit if it completes to the end
                while(j!=i){//starting from the start of the array again j==0 right now and right now it has reached the first station but has not got the new oil
                left=left-cost[j];//the cost to move to next station
                j++;//now move to next station
                if(j==i && left>=0){//left can be minimum of 0 when it reaches the last station
                    return i;
                }
                if(left<=0){
                        goto here;

                }

                left=left+gas[j];
                

                }

            }
            here:

        }
        return -1;
        
    }
};