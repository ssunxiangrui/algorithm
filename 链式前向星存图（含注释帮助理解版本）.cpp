#include <bits/stdc++.h>
using namespace std;

const int N = 100010;//点数
const int M = 200010;//边数

/*
 * !!!!!!!!!（重要）：head[a]表示以a为父亲节点的最后一条边的编号是head[a]
 * !!!!!!!!!（重要）：nxt[E]表示编号为E的边的父亲节点的上一条边的编号是nxt[E]
 * 
 * to[E]表示编号为E的边连向的节点是to[E]
 * w[E]表示编号为E的边的边权是w[E]
 */
int head[N], nxt[M], to[M], w[M];
int E;

//初始化
void init() {
  E = 0;
  memset(head, -1, sizeof(head));
}
/*
 * 加边函数
 * 这里的逻辑（仅仅是nxt数组和head数组变化的逻辑）：
 * 因为新加入的一条边应当再所有边的后边
 * 所以这条边的上一条边为之前所有边的最后一条边
 * 所有边的最后一条边应当更新为现在的新加的边
 * 最后边的编号增加1
 */

//加边
void add(int a, int b, int c) {
  to[E]= b;
  w[E] = c;
  nxt[E] = head[a];
  head[a] = E++;
}
//遍历
int find(int u) {
  for (int i = head[u]; i != -1; i = nxt[i]) {
    ......
  }
}
int main() {
  init();
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n - 1; i++) {//这里以一棵树举例
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    add(a, b, c);
    add(b, a, c);
  }
  return 0;
}
