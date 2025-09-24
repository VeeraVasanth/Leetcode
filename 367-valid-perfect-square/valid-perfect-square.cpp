class Solution {
public:
    bool isPerfectSquare(int num) {
       for(long long i = 1 ; i <= num ; i++){
        long long frac = i*i;
        if(frac == num) return true;
        if(frac > num) return false;
       } 
       return false;
    }
};