import numpy as np


print("enter row and col for matrix : ")
r = int(input())
c = int(input())


l1 =[]


print("Elements for matrix : ")
for i in range(r):
  a = []
  for j in range(c):
    a.append(int(input()))
  l1.append(a)
  


print("matrix is :",l1)

p = np.matrix(l1)
print(p.transpose())
