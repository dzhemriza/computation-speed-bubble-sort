// file name: bubble.cpp
#include <iostream>

void bubble(int* arr, int c)
{
  bool quit = false;
  while (!quit)
  {
    quit = true;
    for (int i = 1; i < c; ++i)
    {
      if (arr[i] < arr[i - 1])
      {
        int t = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = t;
        quit = false;
      }
    }
  }
}

void tester()
{
  int times = 1;
  int max = 100000000;
  int T[] = {100, 200, 1000, 10000, 100000};

  for (int t = 0; t < times; ++t)
  {
    for (int c = 0; c < sizeof(T) / sizeof(int); ++c)
    {
      int* arr = new int[T[c]];

      // fill with data
      for (int m = max, j = 0; j < T[c]; ++j, --m)
      {
        arr[j] = m;
      }

      bubble(arr, T[c]);

      // validate
      for (int j = 0; j < T[c] - 1; ++j) {
        if (arr[j] > arr[j + 1]) {
          std::cout << "ERROR!" << std::endl;;
          return;
        }
      }


      delete[] arr;
    }
  }
}

int main()
{
  tester();
  return 0;
}
