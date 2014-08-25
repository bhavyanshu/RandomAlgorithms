#Solution to https://www.hackerrank.com/challenges/maximizing-xor

'''
Given two integers: L and R,

find the maximal values of A xor B given, L <= A <= B <= R

Input Format
The input contains two lines, L is present in the first line.
R in the second line.

Constraints
1 <= L <= R <= 103

Output Format
The maximal value as mentioned in the problem statement.
'''

#!/bin/python

# Complete the function below.


def  maxXor( l,  r, maxX):

  for le in range(l,r+1):
  	for re in range(le,r+1):
  		xor = le ^ re
  		if xor > maxX:
  			maxX = xor
  return maxX


_l = int(raw_input());
maxX = 0
_r = int(raw_input());

res = maxXor(_l, _r, maxX);
print(res)

