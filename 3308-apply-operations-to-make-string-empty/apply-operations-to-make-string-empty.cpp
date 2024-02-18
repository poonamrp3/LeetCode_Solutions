class Solution {
public:
    string lastNonEmptyString(string s) {
        map<char, pair<int, int>> mpp;

        for(int i = 0; i < s.length(); i++){
            mpp[s[i]].first++;       // Increment count
            mpp[s[i]].second = i;    // Update last index
        }
        int max_value = INT_MIN;
        vector<int> indx;
        for(const auto& pair: mpp){
            if(pair.second.first > max_value){
                max_value = pair.second.first;
            }
        }
        for(const auto& pair:mpp){
            if(pair.second.first == max_value){
                indx.push_back(pair.second.second);
            }
        }
        sort(indx.begin(), indx.end());    
        string result;
        for (int num : indx) {
            result += s[num];
        }
        return result;
    }
};