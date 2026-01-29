// LeetCode: Search Insert Position
// Time Complexity: O(n)
// Space Complexity: O(1)

int searchInsert(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize; i++)
    {
        if (nums[i] >= target) 
        {
            return i;
        }
    }
    return numsSize;
}