/*
Intuition
The problem is to find all unique combinations in a given list of integers (candidates) that sum up to a target value. Each number in the list can only be used once in each combination, and the solution must avoid duplicate combinations.

Approach
Sorting:
First, sort the candidates array. This helps in easily skipping duplicates and optimizing the search process by breaking out early when the current number exceeds the remaining target.
Backtracking:
We use a backtracking approach to explore all possible combinations.
Start with an empty combination (ds) and try to build combinations by adding one candidate at a time.
If the remaining target becomes zero, we've found a valid combination, so we add it to the answer (ans).
Skip duplicate elements by ensuring that the current element is not the same as the previous one when it's at the same decision level (i > ind && nums[i] == nums[i - 1]).
If the current element exceeds the remaining target (target), break out of the loop since further elements will also exceed the target (due to sorting).
After exploring the current element, backtrack by removing it from the current combination (ds.pop_back()) and move to the next candidate.
Base Case:
If the target becomes zero, it means we've found a valid combination that sums up to the desired target.
Complexity
Time complexity:O(2^N×N+NlogN)
Space complexity:O(N)
  */


class Solution {
    void comb(int ind,int target,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>target)break;
            ds.push_back(nums[i]);
            comb(i+1,target-nums[i],nums,ans,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        comb(0,target,candidates,ans,ds);
        return ans;
    }
};


