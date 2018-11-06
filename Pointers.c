#include <stdio.h>

int main()
{
    int a = 3;
    int* p = &a;

    printf("Address of a=%u; value stored in p=%u\n",&a,p);
    printf("\n\n");

    printf("value of a using p=%d\n",*p);
    printf("\n\n");

    int arr[] = {1,2,3,4,5};
    printf("first location of array thru ptr=%u; thru normal notation=%u\n",arr,&(arr[0]));
    printf("\n\n");
    int i=0;
    printf("Printing array address normally(using & operator): \n");
    for(int i=0;i<5;i++)
    {
        printf("%u ",&(arr[i]));
    }
    printf("\n\n");

    printf("\nPrinting array address through ptr: \n");
    for(int i=0;i<5;i++)
    {
        printf("%u ",(arr+i));
    }
    printf("\n\n");

    printf("\nPrinting array values through ptr: \n");
    for(int i=0;i<5;i++)
    {
        printf("%u ",*(arr+i));
    }
    
    return 0;
}