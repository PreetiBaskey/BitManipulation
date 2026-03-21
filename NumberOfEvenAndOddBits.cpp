//approach - 1
//time complexity - O(logn)
//space complexity - O(1)
class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;

        // Process bits as long as n is not zero
        while(n) {
            // Check if the current bit (even index: 0, 2, 4...) is 1
            if(n & 1)
                even++;
            
            // Shift right to move to the next bit (odd index)
            n >>= 1;

            // Check if the current bit (odd index: 1, 3, 5...) is 1
            if(n & 1)
                odd++;
            
            // Shift right to move to the next even index bit
            n >>= 1;
        }

        return {even, odd};
    }
};
