#include <stdio.h>
// this function swap the values of two variables
void swap(int *x, int *y)
{
    int temp = *x; // store the value of x temporarily
    *x = *y;       // put the value of y into x
    *y = temp;     // put the old value of x into y
}

int main()
{
    int a[5], i, j;
    // ask the user to enter the 5 numbers
    printf("Enter 5 elements: ");
    // take 5 numbers as input from the user
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    // Bubble sort strat here
    // compare adjacent elements and swap if they are in the wrong order    
    for(i = 0; i < 4; i++)
    {
    // comparer each elements with the next element
        for(j = 0; j < 4-i; j++)
           { 
            // if the currant element is greater than the next element
            // swap they possitions
             if(a[j] > a[j+1])
               swap(&a[j], &a[j+1]);
           }   
    }
    // print the sorted array
    printf("Sorted elements: ");

    // display all 5 sorted elements
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;

}
