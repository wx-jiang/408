bool deleteMin(SqList &L, elemType &value) {
	if(L.length == 0) {
		return false;
	}
	value = L.data[0];
	int mark = 0;
	for (int i = 1; i < L.length; i++) {
		if(L.data[i] < curr) {
			value = L.data[i];
			mark = i;
		}
	}
	L.data[mark] = L.data[L.length - 1];
	L.length--;
	return true;
}