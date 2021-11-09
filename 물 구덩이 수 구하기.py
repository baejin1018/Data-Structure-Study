# 물 구덩이 수 구하기

#4 5
#00110
#00011
#11111
#00000
#출력
#3

# 첫 번째 줄에 땅의 크기 n,m 1<=n,m<=1000
# 두번째 줄에 n+1 번째 줄까지 땅에 대한 표시이다
# 0 은 물구덩이 1은 밟아도 무너지지 않는 땅이다
# 전체 땅 속에서 물 구덩이 개수를 출력한다

#5 5
#00110
#00010
#11111
#00001
#11100
#출력
#

n,m = map(int,input().split())
graph =[] #빈 리스트 선언
for i in range(n):
    graph.append(list(map(int,input())))

def puddle(x,y): #물 웅덩이 갯수 체크
    if x <= -1 or x >= n or y<=-1 or y >= m:
        return False
    if graph[x][y] == 0: # 물웅덩이라면
        graph[x][y] =1
        puddle(x-1,y) #puddle(-1,0)
        puddle(x,y-1) #puddle(0,-1)
        puddle(x+1,y) #puddle(1,0)
        puddle(x,y+1) #puddle(0,1)
        return True
    else:
        return False

cnt =0 #물 웅덩이 개수
for i in range(n):
    for j in range(m):
        if puddle(i,j) ==True:
            cnt+=1
print(cnt)