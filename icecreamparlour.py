'''
Solution to https://www.hackerrank.com/challenges/icecream-parlor

Input Format

The first line of the input contains T, T test cases follow.
Each test case follows the format: The first line contains M. The second line contains the number N. The third line contains N single space separated integers denoting the price of each flavor ci.

Output Format

Output two integers, each of which is a valid index of the flavor. The lower index must be printed first. Indices are indexed from 1 to N.

Constraints

The prices of two items may be same and each test case has a unique solution.

'''

T = int(input())

for _ in range(T):
	M = int(input())
	N = int(input())
	c = list(map(int,input().split()))

	for i, cost in enumerate(c[:-1]):
		for j in range(i + 1, len(c)):
			if c[j] == M - cost:
				print i + 1, j + 1
				break