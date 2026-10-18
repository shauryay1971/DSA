class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int j=0;
        int count=0;

        int a=0,b=0,c=0;//have to keep track of number a ,b,c
        bool track=false;
    //we will reset j back to the index at which condn were met
    //move i one by one and do this until j reaches the end 
        while(j<=s.size()){//we will move j only when we are trying to find a new set that follows the condition
//j<=s.size() as j points to the element after the end of the string
            if(!track){//does not track
                if(s[j]=='a'){
                    a++;
                }else if(s[j]=='b'){
                    b++;
                }else if(s[j]=='c'){
                    c++;
                }
                j++;
                if(a && b && c){
                    track=true;

                }
              
            }if(track){

                count=count+(s.size()-j)+1;

                if(s[i]=='a'){
                    a--;
                if(a && b && c){
                    track=true;

                }else{
                    track=false;
                }
                    
                }else if(s[i]=='b'){
                    b--;
                    if(a && b && c){
                    track=true;

                }else{
                    track=false;
                }
                    
                }else if(s[i]=='c'){
                    c--;
                    if(a && b && c){
                    track=true;

                }else{
                    track=false;
                }
                    
                }

                i++;

            }

        }
        return count;
        
        
    }
};