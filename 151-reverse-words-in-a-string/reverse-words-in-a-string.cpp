#include<bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
    
    string res = "";
	string tmp = "";
	int left = 0, right = s.length() -1;
	while(left <= right){
		char ch = s[left];
		if(ch!= ' '){
			tmp += ch;
		}
		else if(ch == ' '){
			if(tmp != ""){
				if(res != ""){
                    res = tmp + " " + res;
				} else {
                    res = tmp;
				}
			}
		    tmp = "";
		}
		left++;
	}

    if (tmp != "") {
        if (res != "") {
            res = tmp + " " + res;
        } else {
            res = tmp;
        }
    }
	return res;   
    }
};