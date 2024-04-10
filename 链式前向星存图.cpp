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
      /*
       * 其他操作
       * ......
       */
    }
  }
}
int main() {
  /*
   * 使用初始化函数
   * ......
   * 输入和使用建边函数
   * ......
   * 遍历
   * ......
   */
  return 0;
}
