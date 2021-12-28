#include <stdio.h>
#include "main.h"

/*
 * main - Entry point.
 * @n: Length of the array
 * 
 * Description: Insert an element into an array.
 * Return: A new array with the newly inserted element.
 */
void main()
{
  int p[max], n, i, j, k, l;

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
  //prompt the user to enter the position of the new element
  printf("\nEnter position where to insert the new element: ");
  scanf("%d", &k);
  k--;   //since C uses zero-based indexing we decrement by one.

  //Shifting all the elements of the array one position down from the positon of in  //ertion.
  for(j = n - 1; j >= k; j--)
    {
      p[j + 1] = p[j];
    }
  //Prompt the user to enetr the new element.
  printf("\nEnter the value to insert: ");
  scanf("%d", &p[k]);
  //print the array after insertion of the new value
  printf("\nArray after insertion of the new element: \n");
  for(i = 0; i <= n; i++)
    {
      printf("%d\n", p[i]);
    }
}
