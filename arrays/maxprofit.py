list  = [7,9,1,3,4,9]
def stock(list):
  maxprofit = 0
  bestbuy = list[0]
  for i in range(1,len(list)):
    if(list[i]>bestbuy):
      maxprofit = max(maxprofit, (list[i]-bestbuy))
    bestbuy = min(list[i],bestbuy)
  return maxprofit
print(stock(list))
    