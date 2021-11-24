
#학교체육대회로 운동장에 모였다
# 각 학생들의 키 순으로 줄을 세우려고한다
#첫 줄에는 학생의 수 N 이 주어진다
#둘째 줄 부터 N개의 정수 키를 입력받는다
#입력
#165
#156
#189

#출력
#157 165 189
# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = int(input())
cm =[]
for i in range(n):
	cm.append(input())
cm.sort()
print(*cm)