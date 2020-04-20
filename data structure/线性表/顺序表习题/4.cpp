bool deleteS2T(SqList &L, elemType s, elemType t) {
	if (s >= t || L.length == 0) {
		return false;
	}
	int j = 0;
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] < s || L.data[i] > t) {
			L.data[j] = L.data[i];
			j++;
		}
	}
	L.length = k;
	return true;
}