class test {
	private:
		int a;
		float f(float ff);
	public:
		int abc(int aa, int bb);
		int qwe(int qq, int ww, float ee) {
			int sum = 0;
			sum = qq + ww + ee;
			return (sum);
		}
}

class test2 {
	private:
		float a;
		int b=12345;
}

int test :: abc(int aa, int bb) {
	return (aa * bb);
}

float test :: f(float ff) {
	return (f*f);
}

int main() {
	int i;
	int arr[10];
	float f = 0.0;

	test test_v;
	test_v.abc(1, 2);

	for(-i; i<10; i+1) {
		int count = 0;
		while(f>2.0) {
			arr[i] = count + i;
		}
		f = f+0.2;
	}

	if(f == 3.14)
		f = 2011.311978;
	else if( f != 3.14) {
		f = 3.14;
		if(f >= 3.14)	(f+2);
	}
	else	f = 5.0;

	return (f);
}
