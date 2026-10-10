class Solution {
public:

    void makeRow(vector<vector<int>> &ans,int i){
        // Avoid Reference Invalidation: Never rely on references, iterators, or indexing of a container while mutating that same container's capacity via .push_back() or .resize().

        // Build Locally First: Construct temporary rows/sub-containers entirely as local variables on the stack, then push the finished object into the parent vector once complete.

       vector<int> ans2;
       ans2.push_back(1);//first 0th index
        for(int k=1;k<ans[i-1].size();k++){
            ans2.push_back(ans[i-1][k]+ans[i-1][k-1]);
        }
        ans2.push_back(1);//end 1
        ans.push_back(ans2);


    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans={{1},{1,1}};
        if(numRows==1){
            return {{1}};

        }else{
        

            for(int i=2;i<numRows;i++){

                    makeRow(ans,i);

            }

        }
        return ans;
    }
};