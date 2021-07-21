#include <stdio.h>
#include <stdlib.h>
typedef struct BST
{
	int data;
	struct BST *lchild,*rchild;
}node;
int lh,rh;
node *get_node()
{
	node *temp;
	temp=(node *)malloc(sizeof(struct node*));
	temp->lchild=NULL;
	temp->rchild=NULL;
	return temp;
}
void insert(node *new_node,node *root)
{
	if(new_node->data<root->data)
	{
		if(root->lchild==NULL)
			root->lchild=new_node;
		else
			insert(new_node,root->lchild);
	}
	else if(new_node->data > root->data)
     {
     if(root->rchild==NULL)
         root->rchild=new_node;
     else
         insert(new_node,root->rchild);
     }
}
void preorder(node *temp)
{
 if(temp!=NULL)
    {
    printf("%d ",temp->data);
    preorder(temp->lchild);
    preorder(temp->rchild);
    }
}
int height(node *root)
{
	
	if(root==NULL)
		return 0;
	//if(root->lchild!=NULL)
		lh=height(root->lchild);
	//if(root->rchild!=NULL)
		rh=height(root->rchild);
	return 1 + (lh>rh?lh:rh);
}
int main()
{
	int c,ch,e,key;
	char ans;
	node *root,*new_node,*p;
	root=NULL;
	do
	{
		printf("\t---MENU---\n");
		printf("1.Insert\n2.Preorder Display\n3.Height");
		printf("\nEnter a choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: do
					{
						new_node=get_node();
						printf("\nEnter a value:");
						scanf("%d",&new_node->data);
						if(root==NULL)
							root=new_node;
						else
							insert(new_node,root);
						printf("\nWant To enter More Elements?(y/n)");
						fflush(stdin);
             			ans=getch();

             		}while(ans=='y');
             		break;
            case 2: printf("\nPreorder:");
					preorder(root);
            		break;
            case 3: printf("\nHeight:");
            		printf("%d",height(root));
            		break;
    	}
    	printf("\nDo you want to continue?YES-1 NO-0:");
		scanf("%d",&c);
	}while(c!=0);
}
            		
