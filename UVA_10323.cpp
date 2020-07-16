#include <stdio.h>

int main(void)
{
    long long n, out[6] = {40320, 362880, 3628800, 39916800, 479001600, 6227020800};

    while(scanf("%lld", &n) != EOF)
    {
        if(n < 0)
        {
            if(n&1)
                printf("Overflow!\n");
            else
                printf("Underflow!\n");
        }
        else if(n < 8)
            printf("Underflow!\n");
        else if(n > 13)
            printf("Overflow!\n");
        else
            printf("%lld\n", out[n-8]);
    }

    return 0;
}

/**
    For future references:
    1. Used the following python code to see values applicable:
        import math

        for i in range(5, 15):
            if math.factorial(i) < 10000:
                print(str(i) + ' ' + str(math.factorial(i)) + ' Underflow')
            elif math.factorial(i)  > 6227020800:
                print(str(i) + ' ' + str(math.factorial(i)) + ' Overflow')
            else:
                print(str(i) + ' ' + str(math.factorial(i)) + ' Correct')
    2. Why use C/C++ after generating values from python?
        A. Easy to see factorial from python
        B. C/C++ is faster than python
**/
