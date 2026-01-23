// LeetCode: Remove Duplicates from Sorted Array
// Approach: In-place modification (Week 1 level)

int removeDuplicates(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                for(int k=j;k<numsSize-1;k++)
                {
                    nums[k]=nums[k+1];
                   
                }
                 numsSize--;
                    j--;
            }
        }
    }
    return numsSize;
}