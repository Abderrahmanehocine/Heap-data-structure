#include "print.h"

//print data (level travercel)
void print(heap* root){
  if(root == NULL){
   return;
  }
  std::queue<heap*>Q;
  Q.push(root);
  while(!Q.empty()){
    heap* current= Q.front();
    std::cout<<current->get_data()<<" ";
    if(current->left !=NULL){
      Q.push(current->left);
    }
    if(current->right != NULL){
      Q.push(current->right);
    }
    Q.pop();
  }
}