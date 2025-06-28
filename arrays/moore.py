list = [1,1,1,2,2]
# def moores(list):
#   num = 0
#   freq = 0 
#   for i in range(0,len(list)):
#     if(freq==0):
#       num = list[i]
#     if(num==list[i]):
#       freq+=1
#     else:
#       freq-=1
#   return num
# print(moores(list))
def duplicate(list):
  n = len(list)/2
  for i in list:
    freq=0
    for j in list:
      if(i==j):
        freq+=1
      if(freq>n):
        return freq
  return -1
print(duplicate(list))
 #using in keyword specifies value and uing range specifies the index