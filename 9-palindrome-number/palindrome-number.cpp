class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0, current_digit = 0, value = x;
        bool negative = false;
        if(negative){
            value = abs(x);
        }
        while(value > 0){
            current_digit = value % 10;
            if (reverse > (INT_MAX - current_digit) / 10) {
                return false;  // Overflow will occur, return 0
            }
            reverse = (reverse * 10) + current_digit;
            value = value / 10;
        }

        if(negative){
            reverse = -1 * reverse;
        }

        return x == reverse;
    }
};