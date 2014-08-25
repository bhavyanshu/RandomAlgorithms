#Solution to https://www.hackerrank.com/challenges/hackerrank-tweets


n = int(input())
buffer = []
count = 0
for t in xrange(n):
	txt = raw_input().lower()
	buffer.append(txt+'\n')
	txt = '\n'.join(buffer)    
    
for lines in txt.splitlines():
    for l in lines.split():
        if "hackerrank" in l:
            count+=1
            
print count