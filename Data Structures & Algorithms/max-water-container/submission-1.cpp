class Solution {
public:
    int maxArea(vector<int>& h) {

        // int maxArea = 0;
        // for(int i = 0; i < h.size(); i++){
        //     for(int j = i+1; j < h.size();j++){
        //         int height = min(h[i], h[j]);
        //         int width = j -i;
        //         int area = height * width;
        //         maxArea = max(area, maxArea);
        //     }
        // }
        // return maxArea;

        int n = h.size();
        int i = 0, j = n -1;
        int maxArea = 0;
        while(i < j){
            int min_h = min(h[i], h[j]);
            int width = j - i;
            int area = min_h * width;
            maxArea = max(area, maxArea);

            if(h[i] < h[j]){
                i++;
            }
            else 
                j--;
        }
        return maxArea;
    }
};
