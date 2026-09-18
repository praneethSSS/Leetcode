class Solution {
public:
    int reverseBits(int n) {
        int power = 31;
        int res = 0;

        while(n > 0){
            int rem = n%2;
            res += rem*pow(2,power);
            n = n/2;

            power--;

        }
        return res;
    }
};