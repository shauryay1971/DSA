class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){//it is avector string so it will also store character as stings so use double quotes
                int temp =stack.top();
                stack.pop();
                int sum =temp+stack.top();
                stack.push(temp);
                stack.push(sum);

            }else if(operations[i]=="D"){
                stack.push(2*stack.top());

            }else if(operations[i]=="C"){
                stack.pop();

            }else{//numbers are stored as integers
               int temp = std::stoi(operations[i]);//cannot use static_cast<int> here as it is used to convert character to int strings cannot be directly converted into characters
                stack.push(temp);//we have to convert first
            }

        }
        int ans=0;
        while(!stack.empty()){
            ans=ans+ stack.top();
            stack.pop();
        }
        return ans;
        
    }
};