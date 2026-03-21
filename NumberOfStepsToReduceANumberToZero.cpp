//approach - 1 - using math
//time complexity - O(logn)
//space complexity - O(1)
// class Solution {
// public:
//     int numberOfSteps(int num) {
//         int opCount = 0;

//         while(num > 0) {
//             if(num % 2 == 0) {
//                 num /= 2;
//             }
//             else {
//                 num -= 1;
//             }

//             opCount++;
//         }

//         return opCount;
//     }
// };





//approach - 2 - using bit manipulation
//time complexity - O(logn)
//space complexity - O(1)
class Solution {
public:
    int numberOfSteps(int num) {
        int opCount = 0;

        while(num > 0) {
            if((num & 1) != 1) { //num & 1 - will give 1, if number is odd
                num >>= 1;
            }
            else {
                num -= 1;
            }

            opCount++;
        }

        return opCount;
    }
};
