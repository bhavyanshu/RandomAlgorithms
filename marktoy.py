# Solution for https://www.hackerrank.com/challenges/mark-and-toys

def max_toys(num, price, rupees):
	price.sort()
	count = 0
	for i in xrange(num):
		if (rupees - price[i])>=0:
			rupees = rupees - price[i]
			count += 1

	return count

if __name__ == '__main__':
  n,k = map(int, raw_input().split())
  prices = map(int, raw_input().split())
  print max_toys(n, prices, k)
