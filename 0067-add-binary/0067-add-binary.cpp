class Solution {
public:
    string addBinary(string a, string b) {
        int i=0;
        int j=0;

        while(a[i]!='\0'){
            i++;

        }
        while(b[j]!='\0'){
            j++;

        }
        int carry=0;
        string k;
        int r;

        if(i>j){
            k=a;
            r=i;
            
        }else{
            k=b;
            r=j;
        }
        i--;
        j--;
        r--;
        while(i>=0 && j>=0){

            if(((a[i]=='0' && b[j]=='1') || (a[i]=='1' && b[j]=='0')) && carry==0){

                carry=0;
                k[r]='1';
                r--;
                i--;
                j--;

            }else if(((a[i]=='0' && b[j]=='1') || (a[i]=='1' && b[j]=='0')) && carry==1){

                carry=1;
                k[r]='0';
                r--;
                i--;
                j--;

            }else if(a[i]=='0' && b[j]=='0' && carry==0){
                carry=0;
                k[r]='0';
                r--;
                i--;
                j--;

            }else if(a[i]=='0' && b[j]=='0' && carry==1){
                carry=0;
                k[r]='1';
                r--;
                i--;
                j--;

            }else if(a[i]=='1' && b[j]=='1' && carry==0){
                carry=1;
                k[r]='0';
                r--;
                i--;
                j--;


            }else if(a[i]=='1' && b[j]=='1' && carry==1){
                carry=1;
                k[r]='1';
                r--;
                i--;
                j--;


            }

        }
        here:
        if(carry==1 && r>=0){
            if(k[r]=='0'){
                k[r]='1';
                r--;
                carry=0;

            }else{
                k[r]='0';
                r--;
                carry=1;
                goto here;
            }

        }
        if(carry==1 && r<0){
            k.insert(0,"1");//use double quotes here

        }
        return k;
        
    }
};