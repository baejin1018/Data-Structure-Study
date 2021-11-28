#두 정 수 N과 K를 입력받는다.
# 어떤 수 N이 1이 될 때까지 
# N이 K보다 큰 경우
# 1-1, 1-2 두 과정 중 하나를 선택하여 반복한다.
# 1-1. N 에서 1을 뺀다(정수 N을 K로 정확히 나눌 수 없을 때)
# 1-2. N을 K로 나누어지면 N은 K로 나눈 몫이 저장된다.
# N이 K보다 작은 경우 1-1을 반복한다.
# N이 1이 되면 1회 카운트하고 종료된다.
# [입력]
# 17 4
# [출력]
# 4


# # -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

n,k = map(int,input().split())
cnt =0
while n>=k:
	while n%k !=0:
		n-=1
		cnt+=1
		continue
	n//=k
	cnt+=1
while n>=1:
	n=n-1
	cnt+=1
print(cnt)