//链式前向星存图......
void dfs(int u, int f) {
  sz[u] = 1;
  for (int i = head[u]; i != -1; i = nxt[i]) {
    int v = to[i];
    if (v != f) {
      dfs(v, u);
      sz[u] += sz[v];
      mx[u] = max(mx[u], sz[v]);
    }
  }
  mx[u] = max(mx[u], n - sz[u]);
}
//建立双向边......
//求所有的mx里面的最小值......（即答案）
