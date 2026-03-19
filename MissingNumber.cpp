//approach - 1 - mathematics - sum of fist n natural numbers from 0 to n - n * (n + 1) /2
//time complexity - O(n)
//space complexity - O(1)
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();

//         int sumFrom0ToN = n * (n + 1) / 2;

//         int currSum = 0;
//         for(int &n: nums) {
//             currSum += n;
//         }

//         return sumFrom0ToN - currSum; 
//     }
// };





//approach - 2
//time complexity - O(n)
//space complexity - O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        // Initialize result with n because the loop only goes up to n-1
        int result = n; 
        
        for(int i = 0; i < n; i++) {
            // XOR the index and the value at that index
            // Property: x ^ x = 0. All numbers present in both 
            // the index and the array will cancel each other out.
            result = result ^ i;
            result = result ^ nums[i];
        }

        // The only number that doesn't have a "pair" stays in result
        return result;
    }
};
