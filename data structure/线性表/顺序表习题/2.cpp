void reverse(SqList &L) {
	int len = L.length;
	elemType curr;
	for (int i = 0; i < len / 2; i++) {
		curr = L.data[i];
		L.data[i] = L.data[len - i - 1];
		L.data[len - i - 1] = curr;
	}
	return;
}