int findDuplicate(int* nums, int numsSize){
    int aux[numsSize-1];

    for(int i = 0; i < numsSize-1; i++) 
        aux[i] = 0;

    for(int i = 0; i <= numsSize; i++) {
        aux[nums[i]-1] += 1;
        if (aux[nums[i]-1] > 1)
            return nums[i];
    }
    return 0;
}
