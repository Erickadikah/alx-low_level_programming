#include <stdio.h>

typedef struct Node {
	int x;
	struct Node* next;
} Node;

int main(int argc, char* argv[]) {
	Node root, elem2;
	root.x = 15;
	root.next = &elem2;
	elem2.x = -2;
	elem2.next = NULL;

	printf("first: %d\n", root.x);
	printf("Second: %d\n", elem2.x);
	return 0;
}
