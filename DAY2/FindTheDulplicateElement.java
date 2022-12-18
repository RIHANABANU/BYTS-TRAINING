class Solution {
    public int findDuplicate(int[] nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[show];
            fast = nums[nums[fast]];
        }
        while(slow!=fast);
        fast = nums[0];
        while(slow!=fast)
        {
            slow = nums[0];
            fast = nums[0];
        }
        return slow;
    }
}
