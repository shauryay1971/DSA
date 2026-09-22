class Solution {
public:
    bool is_anagram(string &a, string &b){
        if(a.size()!=b.size()){
            return false;
        }
        vector<int> temp(26,0);
        for(int i=0;i<a.size();i++){

            temp[a[i]-'a']++;
            temp[b[i]-'a']--;

        }
        for(int i=0;i<26;i++){
            if(temp[i]!=0){
                return false;

            }


        }
        return true;


    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        

        for(int i=0;strs.size()!=0;i++){
            ans.push_back(vector<string>());  // for a 2d array we first need to create the 1d one 
            ans[i].push_back(strs[0]);//doing only this without the above line will give us an error
            strs.erase(strs.begin());
            for(int j=0;j<strs.size();j++){

                if(is_anagram(ans[i][0],strs[j])){
                    
                    ans[i].push_back(strs[j]);
                   
                    strs.erase(strs.begin()+j);
                    j--;

                }

            }
        }

        return ans;
    }
};