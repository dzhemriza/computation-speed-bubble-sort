#!/bin/bash

echo ==== c ====
time ./bubble.c.out

echo ==== c optimized ====
time ./bubble.c.opt.out

echo ==== cpp ====
time ./bubble.out

echo ==== cpp optimized ====
time ./bubble.opt.out

echo ==== java ====
time java Bubble

echo ==== python ====
time ./bubble.py
