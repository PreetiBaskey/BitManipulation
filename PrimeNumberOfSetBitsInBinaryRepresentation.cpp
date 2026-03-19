//approach - 1
//time complexity - O(R - L), R = right, L = left
//space complexity - O(1)
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        // Pre-defined set of prime numbers up to 19 
        // (Since 2^19 < 10^6 and 2^20 > 10^6, 19 is the max possible set bits for the input range)
        unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};

        int result = 0;
        // Iterate through each number in the given inclusive range [left, right]
        for(int num = left; num <= right; num++) {
            // Built-in GCC function to efficiently count set bits (1s) in an integer
            int setBits = __builtin_popcount(num);

            // Check if the count of set bits exists in our prime set
            if(primes.count(setBits)) {
                result += 1;
            }
        }

        return result;
    }
};
