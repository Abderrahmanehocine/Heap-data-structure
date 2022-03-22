#include "freeMemory.h"

// free the memory (clear all the nodes)
void freeMemory(heap* root){
  if(root == NULL){
    return;
  }
  freeMemory(root->left);
  delete(root);
  freeMemory(root->right);
}