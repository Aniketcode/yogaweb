# def swap_case(s):
#     return s.swapcase()
# if __name__=='__main__':
#     s=input()
#     result=swap_case(s)
#     print(result)

from collections import*;
N = int(input())
d = OrderedDict()
for i in range(N):
    item = input().split()
    itemPrice = int(item[-1])
    itemName = " ".join(item[:-1])
    if(d.get(itemName)):
        d[itemName] += itemPrice
    else:
        d[itemName] = itemPrice
for i in d.keys():
    print(i, d[i])