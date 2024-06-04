//leetcode 29: divide two integers
class Solution
{
public:
    int divide(int dividendx, int divisorx)
    {
        if (dividendx == INT_MIN && divisorx == -1)
            return INT_MAX;

        bool ans_pos_sign = true; //is final ans positive?
        if (dividendx < 0 && divisorx > 0)
            ans_pos_sign = false;
        if (dividendx > 0 && divisorx < 0)
            ans_pos_sign = false;

        //now dividing with BS using only positive numbers
        long long int dividend = abs(dividendx);
        long long int divisor = abs(divisorx);
        long long int s = 0, e = dividend;
        long long ans = 0;

        while (s <= e)
        {
            long long mid = ((e - s) >> 1) + s;

            if (mid * divisor <= dividend)
            {

                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }

        if (ans_pos_sign == false)
            return -ans;
        return ans;
    }
};