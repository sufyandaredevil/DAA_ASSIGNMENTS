#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[], int l, int r, int key)
{
  while (l <= r)
  {
    int m = l + (r - l) / 2;

    if (arr[m] == key)
      return m;

    if (arr[m] < key)
      l = m + 1;

    else
      r = m - 1;
  }

  return -1;
}

void main()
{
  int i, key, count, number[100], result;
  clrscr();

  printf("Enter the number of elements: ");
  scanf("%d", &count);

  for (i = 0; i < count; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &number[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &key);

  result = binarySearch(number, 0, count - 1, key);
  (result == -1)
      ? printf("Element is not present in array")
      : printf("Element is present at index %d", result);

  getch();
}
