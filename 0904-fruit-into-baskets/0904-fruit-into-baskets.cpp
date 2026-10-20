class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        //"1  1  2  2  1  2  2  2  2  3  3  1  1  2  3  3  1"

        int a =-1;
        int b =-1;
        //will have to store the index at which last change of fruit happened 
        int k=0;
        int maxm=0;
        int i=0;
        int j=0;

        while(j<fruits.size()){//no need to inc i after wards as then the window size will only decrease
        if(a==-1) {
            a=fruits[j];
            j++;

        }else if(b==-1 && fruits[j]!=a){
            b=fruits[j];
            k=j;//first time we hit a new element
            j++;
            

        }else if(fruits[j]==a && fruits[j-1]==b){//will only trigger when a has been give some value
            k=j;
            j++;
        }else if(fruits[j]==b && fruits[j-1]==a){
            k=j;
            j++;

        }else if(fruits[j]==a || fruits[j]==b){
            j++;

        }

        else if(fruits[j]!=a && fruits[j]!=b){//this can only trigger if a third number comes or if a or b were -1 but a or b being -1 wont happen here as that would be taken care of in the above code
         //right now j points to the new number
        maxm=max(maxm,j-i);
        i=k;
        a=fruits[i];
        b=fruits[j];
        k=j;
        j++;

        }
        


        }
        maxm=max(maxm,j-i);//if the array is completed and this never got triggered eg [1,2,1]
        return maxm;
        
    }
};