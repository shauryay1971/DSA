class Solution {
public:
    bool isValid(string s) {
        // ()40,41
        // []91,93
        // {}123,125
        //the closing bracket ascii value is always greater 
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            if(!stk.empty() && (static_cast<int>(s[i]) - static_cast<int>(stk.top()) ==2 || static_cast<int>(s[i]) - static_cast<int>(stk.top()) ==1 )){
                //meaning stk top is a opening bracket
                stk.pop();

            }else if(static_cast<int>(s[i])==40 || static_cast<int>(s[i])==91 || static_cast<int>(s[i])==123){
                stk.push(s[i]);
                
            }else {
                return false;
            }
            

        }

        if(stk.empty()){
            return true;

        }
        return false;

        
    }
};