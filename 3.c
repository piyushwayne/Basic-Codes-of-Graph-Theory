#include <stdio.h>
#include <stdbool.h>
#define n 7
bool visit[n];
int queue[n];
int front, rear;
void initialize(){
 front = -1;
rear = -1;
}
void enqueue(int x){
printf("%d ",x);
if(rear==n-1){
 printf("Overflow\n");
}
if(front==-1){
 front = 0;
}
rear++;
queue[rear]=x;
}
int dequeue(){
if(front==rear+1){
 printf("Underflow\n");
}
return queue[front++];
}
void bfs(int adj[n][n],int s){
for(int i = 0; i<n; i++)
 visit[i] = false;
visit[s]=true;
initialize();
enqueue(s);
while(front!=rear+1){
 int v = dequeue();
 for(int i=0; i<n; i++){
 if(adj[v][i]==1 && visit[i]==false){
 visit[i]=true;
enqueue(i);
 }
 }
}

}
void main(){
/*int adj[n][n] = {{0, 0, 0 , 1, 1},
 {0, 0, 0 , 1, 1},
{0, 0, 0 , 1, 1},
{1, 1, 1 , 0, 0},
{1, 1, 1 , 0, 0} };
*/

int adj[n][n] = {{0, 1, 1 ,0, 0},
{1, 0, 0 , 1, 0},
{1, 0, 0 , 0, 1},
{0, 1, 0 , 0, 0},
{0, 0, 1 , 0, 0} };
bfs(adj,0);
}
