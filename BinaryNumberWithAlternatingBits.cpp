//approach - 1
//time complexity - O(logbase(2)n)
//space complexity - O(1)
// class Solution {
// public:
//     bool hasAlternatingBits(int n) {
//         int currBit = n % 2;
//         n = n / 2;

//         while(n > 0) {
//             if(currBit == n % 2) {
//                 return false;
//             }

//             currBit = n % 2;
//             n = n / 2;
//         }

//         return true;
//     }
// };





//approach - 2
//time complexity - O(1)
//space complexity - O(1)
class Solution {
public:
    bool hasAlternatingBits(int n) {
        // Use long to prevent overflow during (temp + 1)
        long temp = n ^ (n >> 1);

        // Check if temp is of the form 2^k - 1 (all 1s in binary)
        return (temp & (temp + 1)) == 0;
    }
};
