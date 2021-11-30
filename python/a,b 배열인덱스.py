# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = list(input().split())
# n = list(map(str,input().split()))
n.sort()
for i in range(len(n)):
   for j in range(len(n)):
      if(n[j].count(str(i))):
         print(n[j],end=" ")