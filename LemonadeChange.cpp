class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    int n = bills.size();
    int total = 0;
    int count_5 = 0;
    int count_10 = 0;
    for (int i = 0; i < n; i++) {
        if (bills[i] == 5) {
            count_5 ++;
        }else if (bills[i] == 10) {
            count_10 ++ ;
            count_5 --;
        }else{
            if (count_10 > 0) {
                count_10 --;
                count_5 --;
            } else {
                count_5 -=3;
            }
        }
        if (count_5 < 0 || count_10 < 0)
            return false;
        }
    return true;
    }
};
