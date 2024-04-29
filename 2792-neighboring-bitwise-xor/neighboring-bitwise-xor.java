class Solution {
    public boolean doesValidArrayExist(int[] derived) {
         int c=0;
         for(int i:derived)
         {
            c+=i;
         }
         if(c%2==0)
         return true;
         return false;
    }
}