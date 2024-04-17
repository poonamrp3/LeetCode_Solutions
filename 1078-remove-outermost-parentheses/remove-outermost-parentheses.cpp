class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int cnt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                cnt+=1;
                if(cnt > 1){
                    result += s[i];
                }
            } else {
                cnt -= 1;
                if(cnt > 0){
                    result += s[i];
                }
            }
        }
        return result;
    }
};