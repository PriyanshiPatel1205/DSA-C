// LeetCode: Remove Element
// Approach: In-place modification (Week 1 level)

int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize; i++) {
            if (nums[i] == val) {
                for (int k = i; k < numsSize - 1; k++) {
                    nums[k] = nums[k + 1];
                }
                numsSize--;
                i--;
            }
        }
    
    return numsSize;
}  