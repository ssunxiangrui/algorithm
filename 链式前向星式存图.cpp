#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
const int M = 200010;

int head[N], to[M], nxt[M], w[M];
int E, n;

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
int main() {
  init();
  int n;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    add(a, b, c);
    add(b, a, c);
  }
  return 0;
}
