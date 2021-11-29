#입력
#-1 1 3 -2 2

#출력
#-1 -2 1 3 2

n = list(map(int, input().split()))
sn = []

for i in range(len(n)):
	if(n[i]<0):
		sn.append(n[i])
	
for i in range(len(n)):
	if(n[i]>0):
		sn.append(n[i])

print(*sn)
	