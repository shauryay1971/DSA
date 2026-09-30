class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n =columnTitle.size();
     
        int count=0;
        for(int i=n-1,j=0;i>=0;i--,j++){
          count=count+pow(26,i)*(columnTitle[j]-'@');
        }
        return count;

        
    }
};