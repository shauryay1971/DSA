class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        unordered_map<int, string> mpp;
        mpp[1] = "qwertyuiop";
        mpp[2] = "asdfghjkl";
        mpp[3] = "zxcvbnm";
        auto it = mpp.begin();
        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            for (int l = 0; l < words[i].size(); l++) {
                temp[l] = tolower(temp[l]);
            }
            for (int j = 0; j < temp.size(); j++) {
                if (it == mpp.end()) {
                    break;
                }
                if (it->second.find(temp[j]) ==
                    string::npos) { // if we use .find() on a string and it does
                                    // not find the character it sends back
                                    // string::npos
                    it++;
                    j = -1; // reset
                }
            }
            if (it == mpp.end()) {
                it = mpp.begin();
            } else {
                it = mpp.begin();
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};