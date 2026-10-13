class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //will try to use sliding window if a bigger window will exist then it will fit
        //we will use a single map
        //we will move the window forward if the conditions are not met other wise increase the size of the window

        //if there are duplicates in the woindow then the size of the map will be smaller then the window size 
        //move window when size of window is greater than the map size

        //if the frequency becomes zero then we need to remmove that element from the map
        unordered_map<char,int> mpp;

        int i=0;//starting
        int j=0;//ending

        while(j<s.size()){
          //j points to one element ahead of the actual window
         //but j-i will give us the window size

            if(j-i==mpp.size()){//window is correct ,here the size of window will increase

                 mpp[s[j]]++;//first we add the frequency of the element which is currently at j
                 j++;//increase the size of window (two cases if the previous element was duplicate then this increment as shift of the front pointer of the window otherwise it act as the inc in size of the window)

            }
             if(j-i>mpp.size()){//when this hits  we need to move the window forward 
           // before hitting this we have already moved the front pointer just need to move the back pointer
            here:
            mpp[s[i]]--;//first delete 
            if(mpp[s[i]]==0){
                mpp.erase(s[i]);
            }
            i++;//moved it forward --we have the valid window size now
           
            if(j-i==mpp.size()){//we ove out of this if a new set of numbers satisfy the window and againn check if the window can extended
                continue;

            }else if(j-i>mpp.size() && j<s.size()) {//when there is still a duplicate we try to move the window
                mpp[s[j]]++;//first increment as j pointd to 1 ahed of window
                j++;//moving the window ahead
                if(j<s.size()){
                goto here;
                }else{
                    i++;//fix
                    return j-i;
                }


            }


            }


        }
        return j-i;




        
    }
};