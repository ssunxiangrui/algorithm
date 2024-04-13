/*
 * 定义：树上最远的连个点s~t之间的距离叫做树的直径
 * 解法：从树上任意一点出发能走到的最远的点一定是s或者t，再从这个点出发就能搜到直径
 */
//链式前向星存图......(code)
void dfs(int u, int f, int dis) {
  if (dis > mx) mx = dis, id = u;
  for (int i = head[u]; i != -1; i = nxt[i]) {
    int v = to[i];
    if (v != f) dfs(v, u, dis + w[i]);
  }
}
int main() {
  //初始化+建图......(code)
  dfs(0, -1, 0);//从0节点开始，找到最远的节点，作为直径的第一个端点
  dfs(id, -1, 0);//从这个端点开始，搜到最远的节点，这就是直径
  return 0;
}
