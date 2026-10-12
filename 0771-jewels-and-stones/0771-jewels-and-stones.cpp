class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mpp;
        for(int i=0;i<jewels.size();i++){

            mpp[jewels[i]]=0;

        }
        for(int i=0;i<stones.size();i++){
            if(mpp.find(stones[i])!=mpp.end()){

                mpp[stones[i]]++;

            }

        }
        unordered_map<char,int> ::iterator it=mpp.begin();

        
        int count=0;
        while(it!=mpp.end()){
            count=count+it->second;
            it++;
        }

        return count;
        
    }
};