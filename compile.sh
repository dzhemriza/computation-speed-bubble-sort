#!/bin/bash

# compile cpp code
echo cpp compile...

g++ bubble.cpp -o bubble.out

echo cpp compile...done

# compile cpp code
echo cpp compile optimized...

g++ bubble.cpp -O3 -o bubble.opt.out

echo cpp compile optimized...done

# compile java code
echo java compile...

javac bubble.java

echo java compile...done

# compile c code
echo c compile...

gcc bubble.c -o bubble.c.out

echo c compile...done

# compile c code optimized
echo c compile optimized...

gcc bubble.c -O3 -o bubble.c.opt.out

echo c compile optimized...done
