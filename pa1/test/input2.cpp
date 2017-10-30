class test {
	private:
		int a;
		int b;
	public:
		int abc(int aa, int bb);
		int qwe(int qq, int ww, float ee) {
			int sum = 0;
			sum = qq + ww + ee;
			return (sum);
		}
}

int test :: abc(int aa, int bb) {
	return (aa * bb);
}

int main() {
	int i;
	float f = 0.0;
	for(-i; i<10; i+1) {
		f = f+0.2;
	}
	
	return (f);
}
