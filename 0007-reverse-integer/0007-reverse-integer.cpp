class Solution {
public:
    int reverse(int x) {
        // INT_MAX is defined using #define INT_MAX 2147483647

        int num = 0;

        while (x != 0) { // shld run for negative values

            if (abs(num) > 214748364 && x != 0) { // if x is zero then the number has ended
                return 0;
            } else if (abs(num) == 214748364 && (x > 8 || x < -9)) {

                return 0;
            }
            num = num * 10 + (x % 10);
            x = x / 10;
        }

        return num;
    }
};