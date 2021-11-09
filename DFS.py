
def dfs(v):
    visited[v] = True #리스트에 방문 했음을 True로 표기
    print(v,end=' ')
    for i in graph[v]:
        if not visited[i]: #방문하지 않은 노드만 방문하도록 함
            dfs(i)

graph =[ #인접리스트로 노드를 표현한것
    [],
    [2,3,8],
    [1,7],
    [1,4,5],
    [3,5],
    [3,4],
    [7],
    [2,6,8],
    [1,7]
]

visited = [0]*9 #visited =[0,0,0,0,0,0,0,0,0]
dfs(1) #1번노드부터 출발