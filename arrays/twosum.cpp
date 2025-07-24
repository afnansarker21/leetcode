class Solution {
    // time: O(n)
    // space: O(n)
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        // going through the entire array, one by one
        for (int i = 0; i < nums.size(); i++) {
            // im guessing u grab the current value of i
            hash[nums[i]] = i;
            // for example, the first number of the array is 3. It will go to 3 and subtract it by the target number. if the sol not there, move on to the next number in the array. 
        }
        // going thru loop again
        for (int i = 0; i < nums.size(); i++) {
            // doing the calculation 
            int x = target - nums[i];
            // if the solution is found, then return the current number and sol e.g [0,1]
            if (hash.find(x) != hash.end() && hash[x] != i) {
                return {i, hash[x]};
            }
        }
        // or else return nothing
        return {};
    }
};