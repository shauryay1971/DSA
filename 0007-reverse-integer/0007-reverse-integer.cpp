class Solution {
public:
    int reverse(int x) {
        //INT_MAX is defined using #define INT_MAX 2147483647
        bool sign=true;
        unsigned int p=x;
        if(x<0){
            sign=false;
           p=-p;//edge case if x is INT_MIN then -x can nnot be represented in int
        }

       int num=0;
       int k=0;
        while(p>0){
            num=num*10+(p%10);
            p=p/10;
            k++;
            if(k==9 && num>214748364 && p>0){
                return 0;
            }else if(k==9 && num==214748364 &&p>0){
                if(p>8 && sign==true){
                    return 0;

                }else if(sign==false && p>9){
                    return 0;

                }

            }

        }
        if(sign){
            return num;

        }else{
            return -num;
        }

        
    }
};