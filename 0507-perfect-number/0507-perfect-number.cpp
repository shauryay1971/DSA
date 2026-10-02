class Solution {
public:
    bool checkPerfectNumber(int num) {

        int n = sqrt(num);
        int count = 1;
        for (int i = 2; i <= n;
             i++) { // main problem is that if num is a perfect square then n
                    // will be counted twice
            // float p = num / i;//i needs to be float for this to work as if i
            // is int then first int/int will happen
            // float looses precesion
            if (num % i == 0) {
                count += i;
                if (i * i != num) {//for perfect square
                    count += (num / i);
                }
            }
        }
        if (count == num && num != 1) {
            return true;
        }
        cout << count;
        return false;
    }
};