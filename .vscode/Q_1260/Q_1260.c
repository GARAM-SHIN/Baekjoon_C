// DFS와 BFS

#include <stdio.h>
#include <string.h>

#define max 1001   // 정점의 최대 개수

int graph[max][max];    // 인접 행렬로 그래프 표현   
int visited[max];    // 방문 여부를 저장하는 배열
int queue[max];    // BFS에서 사용할 큐 배열

void DFS(int n, int v)    // n : 정점의 개수, v : 현재 방문할 정점
{
    visited[v] = 1;    // 현재 정점을 방문 처리

    printf("%d ", v);    // 현재 정점 출력

    for (int i=1; i<=n; i++)    // v와 연결된 모든 정점을 순서대로 확인
    {
        if (visited[i] == 0 && graph[v][i])    // 아직 방문하지 않고, v와 연결되어 있다면
            DFS(n, i);    // 해당 정점으로 재귀 호출
    }

    return;
}

void BFS(int n, int v)    // n : 정점의 개수, v : 시작 정점
{
    int front = -1;
    int rear = -1;
    int pop;    // 큐에서 꺼낸 값을 저장할 변수

    printf("%d ", v);    // 시작 정점 출력

    visited[v] = 1;    // 시작 정점을 방문 처리
    queue[++rear] = v;    // 시작 정점을 큐에 삽입

    while(front < rear)    // 큐가 비어있지 않은 동안 반복
    {
        pop = queue[++front];    // 큐의 맨 앞 요소를 꺼냄

        for (int i=1; i<=n; i++)    // pop 정점과 연결된 모든 정점을 확인
        {
            if (visited[i] == 0 && graph[pop][i])    // 아직 방문하지 않았고, pop과 연결된 경우
            {
                printf("%d ", i);    // 해당 정점 출력
                visited[i] = 1;    // 방문 처리
                queue[++rear] = i;    // 큐에 삽입
            }
        }
    }

    return;
}

int main()
{
    int n, m, v;    // n : 정점 수, m : 간선 수, v : 시작 정점
    int x, y;    // 간선의 양 끝 정점
    int i, j;
    
    scanf("%d %d %d", &n, &m, &v);

    for(i=0; i<m; i++)
    {
        scanf("%d %d", &x, &y);

        // 무방향 그래프이므로 양쪽 모두 1로 설정
        graph[x][y] = 1;    
        graph[y][x] = 1;
    }

    DFS(n, v);
    printf("\n");

    memset(visited, 0, sizeof(int) * (n + 1));    // 방문 배열 초기화 (DFS 결과 초기화)
    
    BFS(n, v);
    
    return 0;
}