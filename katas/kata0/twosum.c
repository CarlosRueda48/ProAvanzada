#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    int* a = malloc(sizeof(int)*2);
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(i!=j && nums[i]+nums[j]==target){
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;
}
