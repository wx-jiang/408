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