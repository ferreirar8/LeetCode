class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_so_far = arrays[0].front();
        int max_so_far = arrays[0].back();
        int max_distance = 0;
        
        for (int i = 1; i < arrays.size(); i++) {
            int min_current = arrays[i].front();
            int max_current = arrays[i].back();
            
            max_distance = max(max_distance, max(abs(max_current - min_so_far), abs(max_so_far - min_current)));

            min_so_far = min(min_so_far, min_current);
            max_so_far = max(max_so_far, max_current);
        }
        
        return max_distance;
    }
};
