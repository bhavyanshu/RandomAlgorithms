#Solution to https://www.hackerrank.com/challenges/two-arrays

#Not completed yet! Come back later :|


T = int(input()) #No. of test cases

for _ in xrange(T):
	n,k = list(map(int, raw_input().split()))
	A = sorted(map(int, raw_input().split()))
	B = sorted(map(int, raw_input().split()))

	for a, b in zip(A, reversed(B)):
	    if a + b < k:
	        print('NO')
            break
    	else:
        	print('YES')