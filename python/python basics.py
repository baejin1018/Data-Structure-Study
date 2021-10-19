# print(10>5) #True
# print(10<3) #False
# print(10>5 or 10<3)  #True   ||
# print(10>5 and 10<3) #False &&
# print(not True) #False
# print(not True and True) #False
# print(not True or True) #True
# name = input('이름을 입력하세요')
# print("my name is",name)#,하면 자동으로 한칸 띄어쓰기
# print("my name is"+name)#+ 하면 그냥 더해서 나온다

#입력
# a=input('a=')
# b=input('b=')
# a=int(a)
# b=int(b)
# print('-'*30)
# print(a+b)
# print('-'*30)
# a=int(input('a='))

#사칙연산
# a=int(input('a='))
# b=int(input('b='))
# print(a+b)
# print(a-b)
# print(a*b)
# print(a/b)

#함수
# def Hello():
#     print('Hello')
#     print('kim')
#
# #파이썬에서는 {}로 함수범위를 구분하지 않는다
# #대신 들여쓰기로 코드의 각 영역을 구분한다
# Hello()

# def Hello(name):
#     print('Hi',name)
#
# def Hello1(name):
#     print(f'Hi {name}')
#
# Hello('진영')
# Hello1('진영')
#
#
# 함수의 매개변수 사용해보기

# def Hello(name):
#     print('Hi', name)
#
# Hello('Bae')

# def Hello1(name):
#     print(f'hello, {name}') # f-string 방식으로 출력, f 접두사
#     # python 3.6 version 이상
#
# Hello1('bae')
#
#
# def Hello2(name, hobby):
#     print(f'Hi, My name is {name},' \
#           f' My hobby is {hobby}')
#     # 여러줄 연결 (\)
#
# Hello2('bae', 'game')

# 매개변수로 넘긴 문자열 3개를 출력하는 프로그램 만들기

# def info(name,age,hobby):
#     print(f'제 이름은 {name}이고 나이는 {age}입니다.'\
#           f'제 취미는 {hobby}에요')
#
# info('bae','17','게임')

# Hello() 함수에 'Kim'과 18이라는 매개변수 값을 넘겨줄때
# 'Hi,Kim,you are 18 years old.'이 출력되도록 하시오

# def Hello(name,age):
#     print(f'Hi,{name}, You are {age} years old.')
#
# Hello('Kim',18)

#자신이 좋아하는 가수 이름을 3개 입력 받고 출력하는 함수 만들기
#함수이름 : singer(a,b,c)

# def singer(a,b,c):
#     print(f'내가 좋아하는 가수{a},{b},{c} 입니다.')
#
# a = input('내가 좋아하는 첫번째 가수 : ')
# b = input('내가 좋아하는 두번째 가수 : ')
# c = input('내가 좋아하는 세번째 가수 : ')
#
# singer(a,b,c)

#두 수를 입력받아 덧셈을 출력하도록 하시오
#입력 : 4 7
#출력 : 11

# n1,n2 =map(int,input().split())
# print(n1+n2)

# 두 수를 한줄에 입력받아 두 변수의 값을 SWAP 하여 출력하시오
# 입력 7 9
# 출력 9 7
# a,b =map(int,input().split())
# a,b=b,a
# print(a,b)

# if 문
# a=5
# if a>=3:
#     print('3이상')
# elif a>1: #els if
#     print('3미만 1초과')
# else:
#     print('1이하')

# 두 숫자를 한줄에 입력 받아 더 큰수를 출력하는 프로그램을 만들어보시오
# 입력 8 3
# 출력 8

# a,b= map(int,input().split())
# if a>b:
#     print(a)
# else:
#     print(b)

# 숫자 하나를 입력받아 70점 이상이면 최우수
# 그외 50점 이상이면 우수
# 그외 20점 이상이면 보통
# 그외는 노력필요를 출력하는 프로그램 작성
#
# a = int(input())
#
# if a>=70:
#     print("최우수")
# elif a>= 50:
#     print("우수")
# elif a>=20:
#     print("보통")
# else:
#     print("노력필요")

# 리스트에 주어진 알파벳을 오름차순 정렬하라
# arr=['b','c','a','f','t','e']
# arr.sort()#정렬
# print(arr)
# print(arr[2])#c 출력
# print(len(arr))#배열,리스트의 길이

#리스트 요소중 아스키코드값이 가장 큰 알파벳을 출력하시오
# arr = ['b','c','a','f','t','e']
# arr.sort() #arr.sort(reverse=True)#역순으로 정렬
# print(arr[len(arr)-1])
# print(arr[-1]) #가장 마지막 요소 출력

#최고점 최저점 출력하기
# score = [55,78,99,34,87]
# score.sort()
# print(f'최고점 : {score[-1]} 최저점 : {score[0]}')
#
# print(max(score))#최고점
# print(min(score))#최저점

#for
# for i in range(10): # 0~9,range
# for i in range(0,10,2):#2의 배수로 출력
#     #print(i)# 한칸씩 내려가면서 세로로 출력 (enter가 기본값)
#     print(i,end=' ') # 한칸씩 띄우면서 가로로 출력

#1에서 100 이하까지 홀수를 한줄로 출력하시오

# for i in range(1,101,2):
#     print(i,end=' ')