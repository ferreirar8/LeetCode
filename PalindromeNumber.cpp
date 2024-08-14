class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int revnum = 0; 
        long long int duck = x;
        while (x > 0){
            int lastdigit = x % 10;
            revnum = (revnum*10)+lastdigit;
            x =  x/10;
        }
    return (duck == revnum);
    }
};
