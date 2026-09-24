class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        string s1 = "qwertyuiopQWERTYUIOP";
        string s2 = "asdfghjklASDFGHJKL";
        string s3 = "zxcvbnmZXCVBNM";
        vector<string> ans;
        int a = 0, b = 0, c = 0; // will keep track number of same elements that are in the s1 s2 or s3

        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];

            for (int j = 0; j < temp.size(); j++) {

                if (s1.find(temp[j]) != string::npos) {
                    a++;//if the whole string exist in s1 then a will be equal to the size of temp otherwise not
                }
                if (s2.find(temp[j]) != string::npos) {
                    b++;
                }
                if (s3.find(temp[j]) != string::npos) {
                    c++;
                }
            }
            if(a==temp.size() || b==temp.size() || c==temp.size()){
                ans.push_back(temp);
               

            }
             a=b=c=0;
        }
        return ans;
    }
};