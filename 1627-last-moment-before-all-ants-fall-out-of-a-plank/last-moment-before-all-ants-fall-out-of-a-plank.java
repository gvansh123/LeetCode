class Solution {
    public int getLastMoment(int n, int[] left, int[] right) {
        int leftmax =0, rightmin=0;
        if(left.length!=0){
            leftmax = left[0];
        }
        if(right.length!=0){
            rightmin = right[0];

        }
        for(int i =0;i<left.length;i++){
            if(left[i]>leftmax){
                leftmax=left[i];
            }
        }
        for(int j=0;j<right.length;j++){
            if(right[j]<rightmin){
            rightmin= right[j];
        }
    }
    if(left.length==0){
        return n-rightmin;
    }
    if(right.length==0){
        return leftmax;
    }
    return Math.max(leftmax,n-rightmin);
}
}