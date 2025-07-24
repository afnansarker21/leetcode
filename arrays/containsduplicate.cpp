class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // get an unordered map
        unordered_map<int, int> hash;
        // analysing the vector and seeing if there is a duplicate
        for (int num:nums) { // yes u can (int i = 0; i < nums.size(); i++)
            if (hash[num] > 0) {
                return true;
            }
            hash[num]++;
        }



        return false;

        
    }
};