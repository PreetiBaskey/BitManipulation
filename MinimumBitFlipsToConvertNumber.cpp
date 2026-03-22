//approach - 1
//time complexity - O(logn)
//space complexity - O(1)
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flips = 0;

        int temp = start ^ goal;
        while(temp > 0) {
            if((temp & 1) == 1) {
                flips++;
            }
            temp >>= 1;
        }


        return flips;
    }
};
