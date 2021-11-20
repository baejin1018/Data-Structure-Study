#n까지 입력 받아 1~n까지의 합을 출력하는 프로그램을 만드시오.
#5를 입력하면 15 출력
# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = int(input())
sum=0
for i in range(1,n+1):
	sum+=i
print(sum)