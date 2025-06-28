list = [1,2,3,4,5,6,-9]
def kadane(list):
  max_num = float('-inf')
  new_num = 0
  for i in range(0,len(list)):
    new_num +=list[i]
    max_num = max(max_num,new_num)
    if(new_num<0):
      new_num =0
  return max_num

print(kadane(list))
