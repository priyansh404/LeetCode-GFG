class Solution {
public:
    long long int mySqrt(int x) {
        int s = 0, e = x;
        long long int mid = s+(e-s)/2;
        long long int ans = 0;
        while(s<=e){
            long long int square = mid*mid;
            if(square == x){
                return mid;
            }
            else if(square>x){
                e = mid-1;
            }
            else{
                ans = mid;
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};