void deletex(SqList &L, elemType x) {
	int numOfX = 0;
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] != x) {
			L.data[i - numOfX] = L.data[i];
		}
		else {
			numOfX++;
		}
	}
	L.length = L.length - numOfX;
	return;
}