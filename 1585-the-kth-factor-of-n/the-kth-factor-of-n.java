class Solution {
    public int kthFactor(int n, int k) {
        for(int i = 1; i * i <= n; i++){

            if(n % i == 0){

                k--;

                if(k == 0)
                { 

                    return i;
                }
            }
        }
          for(int i = (int)Math.sqrt(n - 1); i >= 1; i--){

            if(n % i == 0){

                k--;

                if(k == 0){

                    return n / i;
                }
            }
        }
        return -1;
    }
}