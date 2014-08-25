'''
Solution to https://www.hackerrank.com/challenges/lonely-integer

Input Format

The first line of the input contains an integer N indicating number of integers in the array A.
The next line contains N integers each separated by a single space.

Constraints

1 <= N < 100
N % 2 = 1 ( N is an odd number )
0 <= A[i] <= 100, for all i belongs to [1, N]

Output Format

Output S, the number that occurs only once. 
'''

N = int(input())
A = sorted(map(int, raw_input().split()))
i=0	
while(i<=N):
	if A[i] == A[N-1]: #If last element is the unique element!
		print A[i] 
	elif A[i] == A[i+1]:
		pass
	else:
		print A[i]
		exit()

	i = i+2