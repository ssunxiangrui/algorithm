#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
const int M = 200010;

int head[N], nxt[M], to[M], w[M];
int E;

void init() {
  E = 0;
  memset(head, -1, sizeof(head));
}
void add(int a, int b, int c) {
  to[E]= b;
  w[E] = c;
  nxt[E] = head[a];
  head[a] = E++;
}
int find(int u) {
  for (int i = head[u]; i != -1; i = nxt[i]) {
    ......
  }
}
int main() {
  init();
  int n;
  scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    add(a, b, c);
    add(b, a, c);
  }
  return 0;
}
