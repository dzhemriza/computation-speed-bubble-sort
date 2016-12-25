#include <stdio.h>
#include <stdlib.h>

void bubble(int* arr, int c)
{
  int quit = 0;
  while (!quit)
  {
    int i = 1;
    quit = 1;
    for (i = 1; i < c; ++i)
    {
      if (arr[i] < arr[i - 1])
      {
        int t = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = t;
        quit = 0;
      }
    }
  }
}

void tester()
{
  int times = 1;
  int max = 100000000;
  int T[] = {100, 200, 1000, 10000, 100000};
  int t = 0;
  int c = 0;

  for (t = 0; t < times; ++t)
  {
    for (c = 0; c < sizeof(T) / sizeof(int); ++c)
    {
      int* arr = malloc(sizeof(int) * T[c]);
      int i = 0;
      int j = 0;
      int m = max;

      // fill with data
      for (m = max, j = 0; j < T[c]; ++j, --m)
      {
        arr[j] = m;
      }

      bubble(arr, T[c]);

      // validate
      for (j = 0; j < T[c] - 1; ++j) {
        if (arr[j] > arr[j + 1]) {
          printf("ERROR!\n");
          return;
        }
      }

      free(arr);
    }
  }
}

int main(int argc, char** argv)
{
  tester();
  return 0;
}
