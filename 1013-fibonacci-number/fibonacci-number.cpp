class Solution {
public:
    int getNo(int x){
        if(x <= 1){
            return x;
        } else {
            int slast = getNo(x-2);
            int flast = getNo(x-1);
            return slast + flast;
        }
    }
    int fib(int n) {
        return getNo(n);
    }
};