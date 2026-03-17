//approach - 1
//time complexity - O(n * logm), m = size of map
//space complexity - O(m)
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int, int> mp; //num, numFreq

//         for(int &num: nums) {
//             mp[num]++;
//         }

//         for(auto &it: mp) {
//             if(it.second == 1) {
//                 return it.first;
//             }
//         }

//         return -1;
//     }
// };




//approach - 2
//time complexity - O(n)
//space complexity - O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int &num: nums) {
            result = result ^ num;
        }

        return result;
    }
};
