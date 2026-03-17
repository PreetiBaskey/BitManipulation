//approach - 1
//time complexity - O(1)
//space complexity - O(1)
class Solution {
public:
    int minChanges(int n, int k) {
        int result = 0;

        // Iterate through each of the 32 bits of the integers
        for(int i = 0; i < 32; i++) {
            // Check if the i-th bit of 'k' is set (1)
            if(k & (1 << i)) {
                // If 'k' has a 1 but 'n' has a 0, it's impossible (we can't change 0 to 1)
                if(n & (1 << i)) {
                    continue; // Both are 1, no change needed
                }
                else {
                    return -1; // Cannot turn a 0 into a 1
                }
            }
            // If the i-th bit of 'k' is 0, check if 'n' has a 1 there
            else if(n & (1 << i)){
                // 'n' has a 1 and 'k' has a 0; increment count (we can change 1 to 0)
                result++;
            }
        }

        // Return the total number of bits we flipped from 1 to 0
        return result;
    }
};
