
/*

Leet Code Problem : Q1. Concatenation of Array

Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.
Return the array ans.

Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]

Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]

*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int space = nums.size();

        if (space <= 0)
        {
            return {0};
        }

        vector<int> combined_array(2 * space);

        for(int i=0;i < space + 1 ;i++)
        {
            if(i == space)
            {
                for(int k = i ; k < 2 * space ; k++)
                {
                    combined_array[k] = nums[k - i];
                }
                return combined_array;
                
            }
            combined_array[i] = nums[i];
        }
        return {0};
    }
};
