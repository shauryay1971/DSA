class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mpp;
        mpp[')'] = '(';
        mpp['}'] = '{';
        mpp[']'] = '[';
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (!st.empty() && st.top() == mpp[s[i]] ) {// first we should check the empty condition because if stack is empty then we cannot compare the second condition or even pop anything 
                    st.pop();

                } else {//this will trigger when a correct pair is not formed or the first element in the string is a closing bracket
                    return false;
                }
            }
        }
        if (st.empty()) {//if some bracket is left 
            return true;
        }
        return false;
    }
};