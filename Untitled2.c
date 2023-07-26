#include<stdio.h>  
  
void swap(int*, int*);  
  
int main()  
{  
    int x, y;  
  
    printf("Enter values for x and y\n");  
    scanf("%d%d", &x, &y);  
  
    printf("\n\nBefore swapping: x = %d and y = %d\n", x, y);  
  
    swap(&x, &y);  
  
    printf("\nAfter swapping: x = %d and y = %d\n", x, y);  
  
     
}  
  
void swap(int *x, int *y)  
{  
    int temp;  
  
    temp = *x;  
    *x   = *y;  
    *y   = temp;  
}  
