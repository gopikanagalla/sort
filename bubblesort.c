#include <stdio.h>
void bubble_sort(int [],int);

int main()
{
  int array[100], n, c;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  bubble_sort(array, n);
  printf("Sorted list in ascending order:\n");
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);
  return 0;
}

void bubble_sort(int list[],int n)
{
  long c, d, t;
  for (c = 0 ; c < n - 1; c++) 
  {
    for (d = 0 ; d < n - c - 1; d++) 
    {
      if (list[d] > list[d+1]) 
      {
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
