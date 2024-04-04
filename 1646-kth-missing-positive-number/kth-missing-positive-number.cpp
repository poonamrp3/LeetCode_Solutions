class Solution {
public:
    int binarySearch(vector<int> arr, int k){
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            int missingNos = arr[mid] - (mid + 1);
            if(missingNos < k){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return (high+1+k);
    }
    int findKthPositive(vector<int>& arr, int k) {
        return binarySearch(arr, k);
    }
};