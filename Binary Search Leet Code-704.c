
/*
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
*/

#include<stdio.h>
int search(int* nums, int numsSize, int target)
{
    int left=0,right=numsSize-1;
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid]<target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {-1,0,3,5,9,12};
    int target = 9;
    int len = sizeof(arr)/sizeof(arr[0]);

    int index = search(arr,len,target);
    printf("%d ",index);
}
