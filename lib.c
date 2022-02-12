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

//---------------------------- Functions ----------------------//


// Defalt Binarye Tree operatios
node *insertNode(node *root, player player); // insert ordering nodes
node deleteNode(player player, node *root);
node searchNode(player player, node *root);

int swapNodes(node whereNode, node fromNode); /// BOSS****

// Custom Operatios
int sumCoins(char* playerName,int coinsToSum);
int rmCoins(char* playerName, int coinsToRemove);
void printTree(node root);//  mostrar arvore em ERD 
node calcPositions(node root);


//Implementatios

node *insertNode(node *root,player player){
    node *current   = (node *)malloc(sizeof(struct node));
    current->left = NULL;
    current->right = NULL;
    current->player = player;

    if(root == NULL){
        current ->position = 1;
        return current;
    }else  if(root->position > current->position){
        root->left = insertNode(root->left,current->player);
    }else{
        root->right = insertNode(root->right,current->player);
    }
    return root;
}

node deleteNode(player player, node *root){

}

node serachNode(player player, node root){

}



