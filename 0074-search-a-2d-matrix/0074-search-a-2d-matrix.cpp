class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //for binary search for codn low<=high the search ends when low>high incase the element is not found so the target will be 
        //in bw
        int low=0;
        int high=matrix.size()-1;
        int mid =(low+high)/2;
        while(low<=high){
            mid=(low+high)/2;

            if(matrix[mid][0]==target){
                return true;

            }else if(matrix[mid][0]>target){
                high=mid-1;

            }else {
                low=mid+1;
            }

        }
        //now target can be in the array which has high as its starting index
        if(high==-1){//the edge case when the taget is less than the first element of the matrix
        return false; 
        }
        //there is another edge case when the target is bigger than the first element of the last row where low becomes matrix.size() but for that case it will not go out of bounds
      int  low1=0;
      int  high1=matrix[high].size()-1;
        int mid1= (low1+high1)/2;

        while(low1<=high1){
            mid1= (low1+high1)/2;
            if(matrix[high][mid1]==target){
                return true;

            }else if(matrix[high][mid1]>target){
                high1=mid1-1;

            }else{
                low1=mid1+1;
            }


        }
        return false;



    }
};