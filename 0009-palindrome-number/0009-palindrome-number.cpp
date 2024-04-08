class Solution {
public:
    bool isPalindrome(int x) {
        // doesnt work for negetive numbers
        // if(x < 0){
        //     return false;
        // }
        // double y =  log10(x);
        // int i = 0;
        // while(y <= i){
        //     double st = x%(pow(10,y));
        //     double en = x%pow(10,i);
        //     if(st != en){
        //         return false;
        //     }
        //     y--;
        //     i++;
        // }
        // return true;

        string str = to_string(x);
        string strev = str;
        reverse(strev.begin(), strev.end());
        
        return str == strev;
    }
};