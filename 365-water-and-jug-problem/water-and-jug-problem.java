class Solution {
    private static int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
    public boolean canMeasureWater(int x, int y, int target) {
        if((x+y)<target)
         return false;
        int g=gcd(x,y);

        if(g==0)
        return target==0;

        return target%g==0;
    }
}
/*

Bezout's Lemma states that if x and y are nonzero integers and
 g = gcd(x,y), then there exist integers a and b such that ax+by=g. 
 In other words, there exists a linear combination of x and y equal to g.

Furthermore, g is the smallest positive integer that can be expressed in 
this form, i.e. g = min{ax+by | a, b in Z, ax+by > 0}.

*/