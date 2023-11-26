const int N = 100010;
int que[N], head, tail;

int front() {
	return que[head];
}
int pop() {
	head++;
}
void push(int x) {
	que[tail++] = x;
}
int size() {
	return tail - head;
}
bool empty() {
	return head >= tail;
}
