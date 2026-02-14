/*

Date Solved : 14 - 02 - 2026
Solution Author : Armaan Nain
-> I had to read editorial for this one :/ , To find most optimized solution.

Leetcode Problem : Q4 Set Mismatch

You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error,
one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.

Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]

Example 2:
Input: nums = [1,1]
Output: [1,2]

Constraints:
    2 <= nums.length <= 104
    1 <= nums[i] <= 104

*/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        long long n = nums.size();

        long long S = n * (n + 1) / 2;
        long long P = n * (n + 1) * (2 * n + 1) / 6;
        
        long long S_actual = 0, P_actual = 0;

        for (int num : nums) {
            S_actual += num;
            P_actual += 1LL * num * num;
        }

        long long A = S - S_actual;           
        long long B = (P - P_actual) / A;     

        long long missing = (A + B) / 2;
        long long duplicate = missing - A;

        return {(int)duplicate, (int)missing};
    }
};