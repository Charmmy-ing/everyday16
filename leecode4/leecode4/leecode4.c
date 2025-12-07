
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    int* arr = malloc(numsSize * sizeof(int));
    for (long long i = 0; i < numsSize; i++)
    {
        long long a = 0;
        for (long long j = 0; j < numsSize; j++)
        {
            if (nums[i] > nums[j])
            {
                a++;
            }
        }
        arr[i] = a;
        printf("%d", arr[i]);
    }
    *returnSize = numsSize;
    return arr;
}