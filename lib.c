#include <stdio.h>
#include <stdlib.h>
/******************
*Jeferson Silva 
*Diego teixeira
*
*******************/
//---------------------------Data structure--------------------//

typedef struct player
{
    char *name;
    int coin;
}player;


typedef struct node
{   
    struct player player;
    int position;
    struct node *left;
    struct node *right;
}node;

int position = 0;

//---------------------------- Functions ----------------------//


// Defalt Binarye Tree operatios
node *insertNode(node *root, player player); // insert ordering nodes
node deleteNode(player player, node *root);
node searchNode(player player, node *root);

int swapNodes(node whereNode, node fromNode); /// BOSS****

// Custom Operatios
int sumCoins(char* playerName,int coinsToSum);
int rmCoins(char* playerName, int coinsToRemove);
void printTree(node *root);//  mostrar arvore em ERD 
node *calcPositions(node *root);


//Implementatios Defalt Binarye Tree operatios

node *insertNode(node *root,player player){
    node *current   = (node *)malloc(sizeof(struct node));
    current->left = NULL;
    current->right = NULL;
    current->player = player;
    if(root == NULL){
    	current->position = 1;
        return current;
    }else  if(root->player.coin < player.coin){
        root->left = insertNode(root->left,current->player);
    }else{
        root->right = insertNode(root->right,current->player);
    }

    position = 1;
	return  calcPositions(root);
}


node deleteNode(player player, node *root){

}

node serachNode(player player, node root){

}

//Implementatios Custom Operatios

void printTree (node *root) {
   if (root != NULL) {
		printTree (root->left);  
		printf("**********    Player   *******\n");
		printf ("Posicao: %d\n", root->position);
		printf ("Nome: %s\n", root->player.name); 
		printf ("Pontos: %d\n", root->player.coin);
		printf("\n****************************\n");  
		printTree (root->right);     
   }
}

node *calcPositions(node *root){
	if (root != NULL) {
		calcPositions(root->left); 
		root->position = position;  
		position++;
		calcPositions(root->right);     
   }
   return root; 	
}







