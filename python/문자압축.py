#입력
# AAAAAAABBCCCDEEEEFFFFFG

#출력
#A7B2C3D1E4F5G1
st = list(input())
for i in range(len(st)):
	if(st[i] == st[i-1]):
		continue
	w = st.count(st[i])
	print(f'{st[i]}{w}',end="")