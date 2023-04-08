#include<stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
 
void reverse(int array[], int array_size)
{
    
    int *ptr1=array,
 
        
        *ptr2 = array + array_size - 1;
    while (ptr1 < ptr2) {
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }
}
 

void print(int*array, int array_size)
{
    
    int*length = array + array_size,
 
        
        *position = array;
    printf("Array = ");
    for (position = array; position < length; position++)
        printf("%d ", *position);
}
 

int main()
{

    int array[] = { 2, 4, -6, 5, 8, -1 };
 
    printf("Original ");
    print(array, 6);
 
    printf("Reverse ");
    reverse(array, 6);
    print(array, 6);
    return 0;
}
 

