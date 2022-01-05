#include <stdio.h>
#include <stdlib.h>

#define SIZE 10  // Maximum array size

void printArray(int *, int);

/* Sorting behaviour declarations */
int sort_ascending(const void *, const void *);
int sort_descending(const void *, const void *);

int main()
{
    int array[SIZE] = {20, 80, 100, 50, 40, 30, 60, 90, 70, 10};

    int (* compare)(const void *, const void *);    // Function pointer

    printf("Unsorted array");
    printArray(array, SIZE);

    compare = sort_ascending;	// compare now points to sort_ascending function

    // Call qsort() function with ascending sorting behaviour
    qsort(array, SIZE, sizeof(int), compare);

    printf("\n\nAscending sorted array");
    printArray(array, SIZE);

    compare = sort_descending;	// compare now points to sort_descending function

    // Call qsort() function with descending sorting behaviour
    qsort(array, SIZE, sizeof(int), compare);

    printf("\n\nDescending sorted array");
    printArray(array, SIZE);

    return 0;
}

/**
 * The function accepts two void pointers. It internally 
 * converts void pointer to integer and returns a
 * negative value if num1 < num2
 * positive value if num1 > num2
 * and zero value if num1 ==num2
 */
int sort_ascending(const void * num1, const void * num2)
{
    return (*(int *)num1) - (*(int *)num2);
}


/**
 * The function accepts two void pointers. It internally 
 * converts void pointer to integer and returns a
 * negative value if num1 > num2
 * positive value if num1 < num2
 * and zero value if num1 ==num2
 */
int sort_descending(const void * num1, const void * num2)
{
    return (*(int *)num2) - (*(int *)num1);
}


/**
 * printArray accepts pointer to an array and size of the 
 * array. It prints all elements of the given array.
 */
void printArray(int * array, int size)
{
    int i;
    printf("\nArray elements are: ");
    for(i=0; i<size; i++)
    {
        printf("%d, ", *(array + i));
    }
}
