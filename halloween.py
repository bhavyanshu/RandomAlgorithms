# Solution for https://www.hackerrank.com/challenges/halloween-party

'''
Input Format
The first line contains an integer T, the number of test cases. T lines follow.
Each line contains an integer K

Output Format
T lines. Each line contains an integer that denotes the maximum number of pieces that can be obtained for each test case.

Constraints
1<=T<=10
2<=K<=107
'''
import math

def maxpieces(f,result):
	if f%2==0:
		result.append(int((f/2)*(f/2)))#Even
	else:
		result.append(int(math.ceil(f/2)*((f-1)/2))) #If N is odd

T = int(input()) #No. of test cases
result = []
k=0.0
for t in xrange(T):
	k = float(input())
	maxpieces(k,result)

for r in result:
	print r
