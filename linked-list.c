#include<stdlib.h>
#include<stdio.h>

typedef struct Node Node;
struct Node {
  Node *prev;
  int value;
  Node *next;
};

Node *buildNode(int value) {
  Node *node = (Node*) malloc( sizeof(Node) );
  node->value = value;
  return node; 
}

void appendNode(Node *root, int value) {
  Node *lastNode = root;
  Node *newNode = buildNode(value);

  while ( lastNode->next ) {
    lastNode = lastNode->next;
  }

  lastNode->next = newNode;
  newNode->prev = lastNode;
}

void printList(Node *node) {
  do {
    printf("%d ", node->value);
  } while ( node = node->next );
  printf("\n");
}

void freeList(Node *root) {
  if ( root->next ) {
    freeList( root->next );
  }
  free(root);
}

int main() {
  Node *root = buildNode(0);

  int arrSize = 7;
  int numbers[7] = {1, 2, 3, 4, 5, 6, 7};
  int i;
  for (i = 0; i < arrSize; i++) {
    int number = numbers[i];
    appendNode(root, number);
  }

  printList(root);

  freeList(root);

  return 0;
}

