class Solution {
public:
    bool isAnagram(string s, string t) {
        //the array only consists of lower case eng letters so we can use that

        if(s.size()==t.size()){
         vector<int> freq(26,0);//26 because there are 26 letters 

        for(int i=0;i<s.size();i++){

            freq[s[i]-'a']++;//subtraction of characters will give us the difference bw the ascii values 
            freq[t[i]-'a']--;//here we will dec the frequency 
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;

            }

        }
        return true;

        }else {
            return false;
        }



        
    }
};