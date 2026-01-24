/*
LeetCode: Move Zeroes
Approach: Brute Force using nested loops
Description:
Traverse the array and whenever a zero is found,
swap it with the next element to push zeroes toward the end.
This modifies the array in-place.

Time Complexity: O(n^2)
Space Complexity: O(1)

Note:
This is a brute-force solution.
An optimized O(n) solution can be implemented using the two-pointer technique.
*/

void moveZeroes(int* nums, int numsSize) {
    int temp;
    for(int i = 0; i < numsSize - 1; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] == 0) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
