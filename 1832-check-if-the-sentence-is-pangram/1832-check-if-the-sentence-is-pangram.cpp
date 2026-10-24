class Solution {
public:
    bool checkIfPangram(string sentence) {

        vector<bool> freq(26,false);
        int count =0;

        for(int i=0;i<sentence.size();i++){

            if(freq[sentence[i]-'a']==false){
                count++;
                freq[sentence[i]-'a']=true;

            }
            if(count==26){
                return true;

            }


        }
        return false;
        
    }
};