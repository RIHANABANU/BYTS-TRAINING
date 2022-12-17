int majorityElement(int* nums, int numsSize){
int voter = nums[0];
int vc =1;
for(int i=1;i<numSize;i++)
{
    if(nums[i]==voter) 
       ++vc;
    else
       --vc;
    if(vc==0)
    {
        voter = nums[i];
        vc = 1;
    }
}
return voter;
}
