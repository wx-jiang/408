typedef struct LNode {
	elemType data;
	struct LNode* next;
} LNode, *LinkList;

LinkList List_HeadInsert(LinkList &L) {
	LNode* s;
	int x;
	L = (LinkList) malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while(x != 9999) {
		s = (LNode*) malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}

LinkList List_TailInsert(LinkList &L) {
	int x;
	L = (LinkList) malloc(sizeof(LNode));
	LNode *s, *r = L;
	scanf("%d", &x);
	while(x != 9999) {
		s = (LNode*) malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}

LNode *getElem(LinkList L, int i) {
	int j = 1;
	LNode *p = L->next;
	if (i == 0) {
		return L;
	}
	if (i < 0) {
		return NULL;
	}
	while (p != NULL && j < i) {
		p = p->next;
		j++;
	}
	return p;
}

LNode* locateElem(LinkList L, elemType e) {
	LNode* p = L->next;
	while (p != NULL && p->data != e) {
		p = p->next;
	}
	return p;
}