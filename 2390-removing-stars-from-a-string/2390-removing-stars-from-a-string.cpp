class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int count = 0;
        for (int i = s.size() - 1; i >= 0; i--) {

            if (s[i] != '*') {
                if (count == 0) {
                    st.push(s[i]);
                } else {

                    count--;
                }

            } else {
                count++;
            }
        }
        string ans;
        while (!st.empty()) { // while stack is not empty

            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};