int gcd(int a, int b){
	return a?gcd(b%a, a):b;
}
int lcm(int a, int b){
	return a*b/gcd(a, b);
}
