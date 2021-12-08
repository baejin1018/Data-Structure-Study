# 자기 자신을 제외한 양의 약수를 모두 더했을때 자기 자신이 되는 양의 정수를 구하는 문제
#입력
#100
#출력
#6
#28
n = int(input())
sum=0
pn=[]

for j in range(1,n):
	for i in range(1,j):
		if j%i == 0:
			sum+=i
	if j == sum:
			pn.append(sum)
	sum=0
for i in range(len(pn)):
	print(pn[i])