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
int find(int u) {
  for (int i = head[u]; i != -1; i = nxt[i]) {
    ......
  }
}
int main() {
  /*
   * 初始化
   * 输入和使用建边函数
   * 遍历
   */
  return 0;
}
