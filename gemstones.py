#Solution for https://www.hackerrank.com/challenges/gem-stones

import collections

cnt = collections.Counter()
N = int(input()) #No. of test cases
strings=[]
elements = 0
for t in xrange(N):
	x = raw_input()
	strings.append(x)

for s in strings:
	cnt.update(set(s.lower()))

for key,val in cnt.most_common():
	 if val == N:
	 	#print key This was just for looking at what are the most common elements. print cnt.most_common() can also be used.
	 	elements +=1

print elements