#include <stdio.h>
#include <conio.h>

void Merge(int a[], int low, int mid, int high)
{
  int i, j, k, b[20];
  i = low;
  j = mid + 1;
  k = low;

  while (i <= mid && j <= high)
  {
    if (a[i] <= a[j])
    {
      b[k++] = a[i++];
    }
    else
    {
      b[k++] = a[j++];
    }
  }

  while (i <= mid)
  {
    b[k++] = a[i++];
  }
  while (j <= high)
  {
    b[k++] = a[j++];
  }
  for (k = low; k <= high; k++)
  {
    a[k] = b[k];
  }
}

void MergeSort(int a[], int low, int high)
{
  int mid;
  if (low >= high)
  {
    return;
  }
  mid = (low + high) / 2;
  MergeSort(a, low, mid);
  MergeSort(a, mid + 1, high);
  Merge(a, low, mid, high);
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

  MergeSort(number, 0, count - 1);

  printf("Sorted Elements: ");
  for (i = 0; i < count; i++)
  {
    printf(" %d", number[i]);
  }

  getch();
}
