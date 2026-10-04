class Solution {
public:
    int jump(vector<int>& nums) {

        if(nums.size()==1){
            return 0;

        }
        int jumps=0;
    

        for(int i=0;;){//we start from the starting index

            int maxm=i+nums[i];//maxm it can jump to right now when it is on the present index
            if(maxm>=nums.size()-1){//edge case when it can reach the last index in the first jump
                jumps++;
             return jumps;

            }
            int j=i+1;
            int k=j;

            for(;j<=i+nums[i] && j<nums.size();j++){//here the limit of j is the maxm index it can jump when it is on the present index
                maxm=max(maxm,j+nums[j]);//maxm now holds the maxm index it can jump to after jumping to some jth index
                if(maxm==j+nums[j]){
                    k=j;//k stores that value of j on which we gat maxm

                }
            }
            //after this loop we find a index on which if we jump to we can reach a maxm distance so we jump to it
            jumps++;//first jump to jth index
            if(maxm>=nums.size()-1){//no need to check again in the next iteration if it is begger then just jump here
                jumps++;//for the second jump
                return jumps;

            }
            i=k;//here we will not jump to the maxm index it can jump to we will jump jth index here we are jumping only once
            //now after jumping to that index j we will now calculate a new max where it can jump to in two jumps 
        }


        
    }
};