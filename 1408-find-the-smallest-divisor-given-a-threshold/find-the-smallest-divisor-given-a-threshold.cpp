#include<bits/stdc++.h>
class Solution {
public:
    int possibleSum(vector<int> &arr, int limit, int divisor){
        int n = arr.size(), sum = 0;
        for(int i = 0; i < n ; i++){
            sum += ceil((double)(arr[i])/ (double)(divisor));
        }
        return sum;
    }

    int getmaxEle(vector<int> &arr){
        int maxElem = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            maxElem = max(maxElem, arr[i]);
        }
        return maxElem;
    }
    
    int search(vector<int> &arr, int limit){
        int low = 1, high = getmaxEle(arr);
        while(low <= high){
            int mid = (low+high)/2;
            int sum = possibleSum(arr, limit,mid);
            if(sum <= limit){
                high = mid - 1;
            } else {
                low = mid + 1; 
            }
        }
        return low;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        return search(nums, threshold);
    }
};

