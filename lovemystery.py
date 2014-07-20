# Solution for https://www.hackerrank.com/challenges/the-love-letter-mystery

'''
Input Format
The first line contains an integer T, i.e., the number of test cases.
The next T lines will contain a string each.

Output Format
A single line containing the number of minimum operations corresponding to each test case.

Constraints
1 <= T <= 10
1 <= length of string <= 104
All characters are lower cased english letters. 
'''
import math

def numrotations(s):
	outputstr = ','.join(s) #pulling characters from string
	count = 0


	for i in range(len(outputstr)/2):
		count += abs(ord(outputstr[i]) - ord(outputstr[-i-1]))
	return count


T = int(input()) #No. of test cases
strings=[]
for t in xrange(T):
	x = raw_input()
	strings.append(x)

for s in strings:
	print numrotations(s)



