class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501,0);
        for(int i=0;i<arr.size();i++){

            freq[arr[i]]++;

        }
        int temp=0;
        for(int i=1;i<501;i++){
            if(freq[i]==i){
                temp=i;

            }

        }
        if(temp!=0){
            return temp;

        }
        return -1;
        
    }
};