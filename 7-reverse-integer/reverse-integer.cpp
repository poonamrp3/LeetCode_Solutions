#include<cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reverse = 0, current_digit = 0;
        bool negative = false;
        int value = x;
        if(x<0){
            value = abs(x);
            negative = true;
        }

        while(value > 0){
            current_digit = value % 10;
            // Check for integer overflow before the multiplication
            if (reverse > (INT_MAX - current_digit) / 10) {
                return 0;  // Overflow will occur, return 0
            }

            value = value / 10;
            reverse = (reverse * 10) + current_digit;
        }
        if(negative){
            reverse = reverse * -1;
        }
        return reverse;
    }
};
