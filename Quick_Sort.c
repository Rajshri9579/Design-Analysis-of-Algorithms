//Quick Sort

#include<stdio.h>
void quicksort(int number[25] , int first , int last)
{
    int i , j , pivot , temp;
    if(first < last)
    {
        pivot = first ;
        i = first;
        j = last;
           while(i<j)
           {
               while(number[i] <= number[pivot] && i<last)
               {
                   i = i+1; 
               }
               while(number[j] > number[pivot])
               {
                   j= j-1;
               }
               if(i<j)
               {
                   temp = number[i];
                   number[i] = number[j];
                   number[j] = temp;
               }
           }
           temp = number[pivot];
           number[pivot]=number[j];
           number[j] = temp;
           quicksort(number , first , j-1);
           quicksort(number , j+1 , last);
    }
}
int main()
{
    int i, count , number[25];
    printf("How many elements are you going to enter?: ");
    scanf("%d" , &count);
    printf("Enter %d elements : " , count);
    for(i=0 ; i<count ; i++)
 
        scanf("%d" , &number[i]);
         quicksort(number , 0 , count-1);
 
         printf("Order of the sorted elements: ");
         for(i=0; i<count; i++)
            printf("%d ", number[i]);
    return 0;
 
}

