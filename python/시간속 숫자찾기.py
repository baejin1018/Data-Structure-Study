#00시 00분 00초부터 N시 59분 59초까지의 시각 중에서
#3이 포함된 숫자의 개수를 출력해 보세요
#(단, 0<=N<=23)
#하루는 86,400초 =24*60*60이고 
#00시 00분 00초부터 1시 59분 59까지
#숫자 1 입력시 3840회 나옵니다.
# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
h = int(input())
count =0
for i in range(h+1):#시
	for j in range(60):#분
		for k in range(60):#촌
			ss=str(i)+str(j)+str(k)
			if '3' in ss: ## 3이라는 숫자가 ss 에서 발견되면
				count+=ss.count('3')
print(count)