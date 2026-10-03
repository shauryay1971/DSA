class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string com = "";

        if (strs.size() == 1) {

            return strs[0];
        }

        for (int j = 0; j < strs[0].size() && j < strs[1].size(); j++) {

            if (strs[0][j] == strs[1][j]) {
                com.push_back(strs[0][j]);
            }else{
                break;//really important to break it
            }
        }

        for (int i = 2; i < strs.size(); i++) {

            for (int j = 0; j < com.size(); j++) {

                if (strs[i][j] == com[j]) {
                    continue;

                } else {
                    int k=0;
                    string temp="";
                    while(k!=j){
                        temp.push_back(com[k]);
                        k++;
                    }
                    com=temp;
                }
            }
        }
        return com;
    }
};