#입력
# a123b4
# 출력
# 1239

# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = list(input())
num = 0
for i in range(len(n)):
	if(ord(n[i])< 65):
		num += int(n[i])
		num *= 10
num //= 10
num += 5
print(num)