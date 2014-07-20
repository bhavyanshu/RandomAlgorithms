#Solution to https://www.hackerrank.com/challenges/detect-the-email-addresses

import re

n = int(input())
buffer = []

for t in xrange(n):
	txt = raw_input()
	buffer.append(txt+'\n')
	txt = '\n'.join(buffer)    
found = set()
srch = re.compile(r'[\w\-][\w\-\.]+@[\w\-][\w\-\.]+[a-zA-Z]{1,4}')

for lines in txt.splitlines():
	for l in lines.split():
		found.update(srch.findall(l))

u = {}
for item in found:
    u[item] = 1

print ';'.join(sorted(u.keys()))