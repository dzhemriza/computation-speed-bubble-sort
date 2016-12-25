// file name: bubble.java


class Bubble {

   private static void bubble(int[] arr) {

      boolean quit = false;
      while (!quit) {
         quit = true;
         for (int i = 1; i < arr.length; ++i) {
            if (arr[i] < arr[i - 1]) {
               int t = arr[i];
               arr[i] = arr[i - 1];
               arr[i - 1] = t;
               quit = false;
            }
         }
      }
   }

   private static void tester()
   {
      int times = 1;
      int max = 100000000;
      int[] T = {100, 200, 1000, 10000, 100000};

      for (int t = 0; t < times; ++t) {
         for (int c = 0; c < T.length; ++c) {
            int[] arr = new int[T[c]];

            // fill with data
            for (int m = max, j = 0; j < T[c]; ++j, --m) {
               arr[j] = m;
            }

            bubble(arr);

            // validate
            for (int j = 0; j < T[c] - 1; ++j) {
               if (arr[j] > arr[j + 1]) {
                  System.out.println("ERROR!");
                  return;
               }
            }
         }
      }
   }

   public static void main(String[] args)
   {
      tester();
   }
}
