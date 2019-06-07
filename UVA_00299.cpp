/****
    * Problem ID        : UVA 299
    * Problem Name      : Train Swapping
    * Required Topics   : Greedy
****/

#include <stdio.h>

int main(void)
{
    int n,l,j,k,x,c;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&l);
        int arr[l];

        for(j=0; j<l; j++)
            scanf("%d",&arr[j]);

        //c is the counter of number of swaps.
        //We start from last indexes of the array & ensure
        //that the train carriages get sorted from beginning indexes of the array
        //The process is almost like "Insertion Sort"
        for(j=0,c=0; j<(l-1); j++)
            for(k=l-1; k>j; k--)
                if(arr[k]<arr[k-1])
                {
                    x=arr[k];
                    arr[k]=arr[k-1];
                    arr[k-1]=x;
                    c++;
                }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
