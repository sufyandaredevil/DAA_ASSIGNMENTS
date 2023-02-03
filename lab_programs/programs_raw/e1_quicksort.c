#include <stdio.h>
#include <conio.h>

void QuickSort(int number[100], int first, int last)
{
  int i, j, pivot, temp;
  if (first < last)
  {
    pivot = first;
    i = first;
    j = last;

    while (i < j)
    {
      while (number[i] <= number[pivot] && i < last)
      {
        i++;
      }
      while (number[j] > number[pivot])
      {
        j--;
      }
      if (i < j)
      {
        temp = number[i];
        number[i] = number[j];
        number[j] = temp;
      }
    }

    temp = number[pivot];
    number[pivot] = number[j];
    number[j] = temp;

    QuickSort(number, first, j - 1);
    QuickSort(number, j + 1, last);
  }
}

void main()
{
  int i, count, number[100];
  clrscr();

  printf("Enter the number of elements: ");
  scanf("%d", &count);

  for (i = 0; i < count; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &number[i]);
  }

  QuickSort(number, 0, count - 1);

  printf("Sorted Elements: ");
  for (i = 0; i < count; i++)
  {
    printf(" %d", number[i]);
  }

  getch();
}
