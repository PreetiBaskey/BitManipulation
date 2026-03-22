//approach - 1
//time complexity - O(n)
//space complexity - O(1)
class Solution {
public:
    int xorOperation(int n, int start) {
        // Initialize the result with the first element of the sequence (i = 0)
        int result = start;

        // Iterate from the second element (i = 1) up to the nth element
        for(int i = 1; i < n; i++) {
            // Calculate the current number in the sequence: start + 2 * i
            // Then update the running result using the bitwise XOR operator
            result ^= (start + 2 * i); 
        }

        // Return the final XOR sum of all generated elements
        return result;
    }
};
