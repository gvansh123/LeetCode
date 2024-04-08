class Solution {
     public void moveZeroes(int[] nums) {
        int win = 0; 
        for (int i=0;i<nums.length;i++){
	        if (nums[i]==0){
                win++; 
            }
            else if (win > 0) {
	            int t = nums[i];
	            nums[i]=0;
	            nums[i-win]=t;
            }
        }
    }
}