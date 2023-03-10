#include <stdio.h>
#include <stdlib.h>
struct node {
        	int data;
        	struct node* left;
        	struct node* right;
};
struct node* newNode(int data)
{
        	struct node* node
                    	= (struct node*)malloc(sizeof(struct node));
        	node->data = data;
        	node->left = NULL;
        	node->right = NULL;
        	return (node);
}
void printInorder(struct node* node)
{
        	if (node == NULL)
                    	return;
         	printInorder(node->left);
         	printf("%d ", node->data);
         	printInorder(node->right);
}
int main()
{
        	printf("Nandini Arora \n");
          printf("2100320120116\n");
        	struct node* root = newNode(1);
        	root->left = newNode(2);
        	root->right = newNode(3);
        	root->left->left = newNode(4);
        	root->left->right = newNode(5);
         	printf("\nInorder traversal of binary tree is \n");
        	printInorder(root);
        	getchar();
        	return 0;
}

