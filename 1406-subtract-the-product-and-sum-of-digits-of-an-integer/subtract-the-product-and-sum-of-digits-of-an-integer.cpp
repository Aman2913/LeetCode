class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp,p=1;
        int sum=0;
        while(n)
        {
            temp=n%10;
            sum+=temp;
            p*=temp;
            n/=10;
        }
        return p-sum;
        }
};