#include<cctype>
using namespace std;

class Solution {
public:
    string keepLetters(const string& s){
        string result;
        for(char c : s){
            if(isalnum(c)){
                result+=c;
            }
        }
        return result;
    }
    bool chkPal(int i, string &str){
        if(i >= str.length() / 2){return true;}
        if(tolower(str[i]) != tolower(str[str.length()-i-1])){
            return false;
        }
        return chkPal(i+1, str);
    }

    bool isPalindrome(string s) {
        string str = keepLetters(s);
        return chkPal(0, str);
    }
};

