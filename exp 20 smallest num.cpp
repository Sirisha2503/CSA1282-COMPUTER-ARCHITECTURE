#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], small, i;
    printf("Enter 10 Array Elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    i=0;
    small=arr[i];
    while(i<10)
    {
        if(small>arr[i])
            small = arr[i];
        i++;
    }
    printf("\nSmallest Number = %d", small);
    return 0;
}
