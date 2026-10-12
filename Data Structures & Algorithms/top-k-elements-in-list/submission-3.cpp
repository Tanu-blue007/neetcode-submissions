class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        for(auto i : nums){
            freq[i]++;
        }
        // vector<pair<int, int>> elements(freq.begin(), freq.end());
        // sort(elements.begin(), elements.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        //     return a.second > b.second;
        // });
        vector<pair<int, int>> arr;
        for(auto e : freq){
            arr.push_back({e.second, e.first});
        }
        sort(arr.rbegin(), arr.rend());
        
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
