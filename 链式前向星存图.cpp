/*
 * 解析：
 * 首先，每次加边直接充当这个父亲节点里最后一条边
 * head[u]表示最后以u为父亲节点的最后一条边是head[u]
 * nxt[E]表示编号为E的边的上一条边的编号是nxt[E]
 */
int head[N], nxt[M], to[M], w[M];
int E;

//初始化
void init() {
  E = 0;
  memset(head, -1, sizeof(head));
}

//建边
void add(int a, int b, int c) {
  to[E]= b;
  w[E] = c;
  nxt[E] = head[a];
  head[a] = E++;
}

//遍历
int dfs(int u, int f) {
  for (int i = head[u]; i != -1; i = nxt[i]) {
    int v = to[u];
    if (v != f) {
      dfs(v, u);
      //其他操作......(code)
    }
  }
}
int main() {
  //使用初始化函数......(code)
  //输入和使用建边函数...(code)
  //遍历......(code)
  return 0;
}
