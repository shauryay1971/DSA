class Solution {
public:

    void makeRow(vector<int> &ans){
        ans.push_back(1);

       int temp=ans[1];//save the left one in a variable
        ans[1]=1+ans[1];

        for(int k=2;k<ans.size()-1;k++){
            int p=ans[k];//save the present one i a variable as it will be the left one in the next ase
            ans[k]=temp+ans[k];//add the left one
            temp=p;//update the left one
        }


    }

    vector<int> getRow(int rowIndex) {
        vector<int> ans={1,1};
        if(rowIndex==0){
            return {1};

        }else if(rowIndex==1){
            return {1,1};

        }else{
           

            for(int i=2;i<=rowIndex;i++){

                    makeRow(ans);

            }

        }
        return ans;
    }
};