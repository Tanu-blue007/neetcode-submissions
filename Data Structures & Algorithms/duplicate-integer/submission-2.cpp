class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i = 1; i < nums.size();i++){
        //     if(nums[i] == nums[i-1]){
        //         return true;
        //     }
        // }
        unordered_map<int,int> freq;
        for(auto i : nums){
            freq[i]++;
        }
        for(auto it : freq){
            if(it.second > 1){
                return true;
            }
        }
        return false;
    }
};