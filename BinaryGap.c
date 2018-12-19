int maxval(int x, int y){
    	if(x >= y) return x;
	else return y;
}

int solution(int N) {
	int max_gap = 0;
	int current_gap = 0;
	int reminder=0;

	while (N>0 && N % 2 == 0) {
		N = N / 2;
	}
	while (N>0) {
		reminder = N % 2;
		if (reminder == 0) {
			current_gap++;
		}
		else {
			if (current_gap != 0) {
				max_gap = maxval(max_gap, current_gap);
				current_gap = 0;
			}
		}
		N = N / 2;

	}
	return max_gap;
}

