InitList(&L);
Length(L);
LocateElem(L, e);
GetElem(L, i);
ListInsert(&L, i, &e);
ListDelete(&L, i, &e);
PrintList(L);
Empty(L);
DestroyList(&L);


#define MaxSize 100
typedef struct {
	ElemType data[MaxSize];
	int length;
} SqList;

#define InitSize 100
typedef struct {
	ElemType* data;
	int MaxSize, length;
} SeqList;

// 动态分配
L.data = (ElemType*) malloc(sizeof(ElemType) * InitSize);
L.data = new ElemType(InitSize);

bool ListInsert(SqList &L, int i, ElemType e) {
	if (i < 1 || i > L.length + 1) {
		return false;
	}
	if (L.length >= MaxSize) {
		return false;
	}
	for(int j = L.length; j >= i; j--) {
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

bool ListDelete(SqList &L, int i, ElemType &e) {
	if (i < 1 || i > L.length) {
		return false;
	}
	e = L.data[i - 1];
	for (int j = i; j < L.length; j++) {
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

int LocateElem(SqList L, ElemType e) {
	int i;
	for(i = 0; i < L.length; i++) {
		if (L.data[i] == e) {
			return i + 1;
		}
	}
	return 0;
}