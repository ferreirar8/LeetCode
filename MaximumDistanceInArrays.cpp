class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int min_so_far = arrays[0].front();  // Initialize to the first element of the first array
        int max_so_far = arrays[0].back();   // Initialize to the last element of the first array
        int max_distance = 0;
        
        for (int i = 1; i < arrays.size(); i++) {
            int min_current = arrays[i].front();  // First element of the current array
            int max_current = arrays[i].back();   // Last element of the current array
            
            // Calculate the distance with the min and max from previous arrays
            max_distance = max(max_distance, max(abs(max_current - min_so_far), abs(max_so_far - min_current)));
            
            // Update min_so_far and max_so_far
            min_so_far = min(min_so_far, min_current);
            max_so_far = max(max_so_far, max_current);
        }
        
        return max_distance;
    }
};
