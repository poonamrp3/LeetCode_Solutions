#include<cctype>
using namespace std;

class Solution {
public:     
    bool chkPal(string &str){
        int l = 0, r = str.length() -1;
        while(l < r){
            if(!isalnum(str[l])){
                l++;
            } else if(!isalnum(str[r])){
                r--;
            } else if(tolower(str[l]) != tolower(str[r])){
                return false;
            } else {
                l++;
                r--;
            }
        } return true;
    }

    bool isPalindrome(string s) {
        return chkPal(s);
    }
};
