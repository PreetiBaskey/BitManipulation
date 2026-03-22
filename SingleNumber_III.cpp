//approach - 1
//time complexity - O(n)
//space complexity - O(1)
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // Step 1: XOR all numbers in the array.
        // Since x ^ x = 0, all pairs will cancel out.
        // xorNums will result in (firstUnique ^ secondUnique).
        long long xorNums = 0;
        for(int &num : nums) {
            xorNums ^= num;
        }

        // Step 2: Find the rightmost set bit (1) in the combined XOR result.
        // This bit must be different between the two unique numbers (one has 0, one has 1).
        // Using -xorNums (2's complement) helps isolate this bit.
        int mask = xorNums & (-xorNums);

        int groupA = 0;
        int groupB = 0;

        // Step 3: Divide all numbers into two groups based on the mask bit.
        // Group A: Numbers that have the bit set at the mask position.
        // Group B: Numbers that do not have the bit set at that position.
        for(int num : nums) {
            if(mask & num) {
                // The first unique number and its paired duplicates end up here.
                groupA ^= num;
            }
            else {
                // The second unique number and its paired duplicates end up here.
                groupB ^= num;
            }
        }

        // Step 4: After XORing within groups, duplicates cancel out, leaving the two uniques.
        return {groupA, groupB};
    }
};
