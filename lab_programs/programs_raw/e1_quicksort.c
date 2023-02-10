#include <stdio.h>
#include <stdlib.h>

int RandomizedPartition(int A[100], int start, int end)
{
  int randomPivotIndex = (rand() % (end - start + 1)) + start;
  int temp = A[randomPivotIndex];
  A[randomPivotIndex] = A[end];
  A[end] = temp;
  Partition(A, start, end);
}

int Partition(int A[100], int start, int end)
{
  int i, temp;
  int pivot = A[end];
  int partitionIndex = start;

  for (i = start; i < end; i++)
  {
    if (A[i] <= pivot)
    {
      temp = A[i];
      A[i] = A[partitionIndex];
      A[partitionIndex] = temp;
      partitionIndex++;
    }
  }
  temp = A[partitionIndex];
  A[partitionIndex] = A[end];
  A[end] = temp;

  return partitionIndex;
}

void QuickSort(int A[100], int start, int end)
{
  if (start < end)
  {
    int partitionIndex = RandomizedPartition(A, start, end);
    QuickSort(A, start, partitionIndex - 1);
    QuickSort(A, partitionIndex + 1, end);
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
    printf("Enter element #%d: ", i + 1);
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
