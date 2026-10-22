class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char,pair<int,int>> mpp;

        for(int i=0;i<s.size();i++){
            mpp[s[i]].first=i;
            mpp[s[i]].second++;

        }
        unordered_map<char,pair<int,int>> :: iterator it=mpp.begin();
        int minm=INT_MAX;
        for(;it!=mpp.end();it++){
            if((it->second).second==1){
               
                minm=min(minm,(it->second).first);

            }

        }
        if(minm!=INT_MAX){
            return minm;
        }
        return -1;

        
    }
};