#include <stdio.h>
#include "main.h"

/*
 * main - Entry point.
 * @n: Length of the array
 *
 * Description: Delete an element from an array.
 * Return: A new array without the deleted element.
 */

void main()
{
  int p[max], n, i, j, k;

  //prompt the user for number of elements in the array
  printf("Enter the length of the array: ");
  scanf("%d", &n);

  //prompt the user to enter elements in the array
  printf("Enter %d elements to the array:\n", n);
  for(i = 0; i <= n-1; i++)
    {
      scanf("%d", &p[i]);
    }
  //print out elements in the array before insertion
  printf("\nThe array created is:\n");
  for(i = 0; i <= n - 1; i++)
    {
      printf("%d\n", p[i]);
    }
  //prompt the user to enter the position of element to be deleted
  printf("\nEnter the position of the element to be deleted: ");
  scanf("%d", &k);
  k--; //since C uses zero-based indexing we decrement by one.

  //Shifting all the elements of the array one position up to the position of the    deleted element.
  for(j = k; j <= n - 2; j++)
    {
      p[j] = p[j + 1];
    }
  //vacant position at the bottom of the array is set to 0
  p[n - 1] = 0;
  //print all the elements of the array after the deletion
  printf("\nArrays after deleting the element is: \n");
  for(i = 0; i <= n - 2; i++)
    {
      printf("%d\n", p[i]);
    }
}
