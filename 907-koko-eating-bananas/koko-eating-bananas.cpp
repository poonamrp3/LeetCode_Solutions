#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //get max of the array 
    int getMax(vector<int> &v){
        int n = v.size();
        int maxElem = INT_MIN;
        for(int i = 0; i < n ;i++){
            maxElem = max(maxElem, v[i]);
        }
        return maxElem;
    }

    //give total hours possible
    double totalHours(vector<int> &v, int rate){
        double th = 0;
        int n = v.size();
        for(int i = 0; i < n ; i++){
            th += ceil(static_cast<double>(v[i]) / rate);
        }
        return th;
    }
    //search for answer
    int search(vector<int> v, int h){
        int n = v.size();
        int low = 1, high = getMax(v);
        while(low <= high){
            int mid = (low+high)/2;
            double th = totalHours(v, mid);
            cout << th << endl;
            if(th <= h){
            high = mid - 1;
            } else {
            low = mid + 1;
            }
        }
        return low;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        return search(piles, h);
    }
};

