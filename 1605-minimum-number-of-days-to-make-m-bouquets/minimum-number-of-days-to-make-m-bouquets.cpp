#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int> &arr, int day, int k , int m){
        int cnt = 0, noB = 0, n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i] <= day){
                cnt++;
            } else {
                noB += (cnt/k);
                cnt = 0;
            }
        }
        noB += (cnt/k);
        return noB >= m;
    }

    int getminEle(vector<int> &arr){
        int minElem = INT_MAX;
        for(int i = 0; i < arr.size(); i++){
            minElem = min(minElem, arr[i]);
        }
        return minElem;
    }

    int getmaxEle(vector<int> &arr){
        int maxElem = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            maxElem = max(maxElem, arr[i]);
        }
        return maxElem;
    }

    int search(vector<int> &arr, int k , int m){
        int low = getminEle(arr), high = getmaxEle(arr);
        while(low <= high){
            int mid = (low+high)/2;
            if(isPossible(arr, mid, k, m)){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((double)k*m > bloomDay.size()){
		    return -1;
        } else {
            return search(bloomDay, k, m);
        }
    }
};