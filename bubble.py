#!/usr/bin/python

def bubble(arr):
    quit = False
    while not quit:
        quit = True
        for i in range(1, len(arr)):
            if arr[i] < arr[i - 1]:
                t = arr[i]
                arr[i] = arr[i - 1]
                arr[i - 1] = t
                quit = False

def main():
    TIMES = 1
    MAX = 100000000
    T = [100, 200, 1000, 10000, 100000]

    for i in range(0, TIMES):
        for c in range(0, len(T)):
            arr = [0] * T[c]

            m = MAX
            for j in range(0, len(arr)):
                arr[j] = m
                m -= 1

            bubble(arr)

            # validate
            for j in range(1, len(arr)):
                if arr[j] < arr[j - 1]:
                    print("ERROR")

if __name__ == "__main__":
    main()
