#include "lib.c"

/******************
*Jeferson Silva 
*Diego teixeira
*
*******************/

int main(int argc, char const *argv[])
{
    node *root  = NULL;  
    player player1;
    player1.name = "jeronimo";
    player1.coin = 100;
    root = insertNode(root,player1);

    player player2;
    player2.name = "JOAO";
    player2.coin = 101;
    root = insertNode(root,player2);

    player player3;
    player3.name = "medonho";
    player3.coin = 99;
    root = insertNode(root,player3);
    
    player player4;
    player4.name = "Jefim";
    player4.coin = 200;
    root = insertNode(root,player4);
    
    player player5;
    player5.name = "Diego";
    player5.coin = 20;
    root = insertNode(root,player5);
    
    

   printTree(root);
   
    return 0;
}
