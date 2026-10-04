class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // for(int i = 0; i < n;i++){
        //     for(int j = i+1; j < n;j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i, j};
        //         }
        //     }
        // }

        unordered_map<int, int> m;
        for(int i = 0; i < n;i++){
            int need = target - nums[i];
            if(m.contains(need)){
                return {m[need], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
