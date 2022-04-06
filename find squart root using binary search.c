// It is Java solution
class Solution {
    public int mySqrt(int x) {
        long start=0;
        long end=x;
        long  mid;
        long ans=-1;
        while(start<=end)
        {
            mid=(start+end)/2;
             long sqar=mid*mid;

            if(sqar==x)
            {
                return (int)mid;
            }
            else if(sqar>x)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                start=mid+1;
            }
        }
        return (int)ans;
    }
}
