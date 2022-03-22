#include "insert.h"

static int lef=0,righ=0,num=4;

//insert new node
heap* insert(heap* root, int data, heap* temp){
  if(root == NULL){
    root= new heap(data);
  }
  else if(root->left == NULL){
    root->left=insert(root->left,data,temp);
  }
  else if(root->right == NULL){
    root->right=insert(root->right,data,temp);
  }
  else{
    if(lef != num/2){
      root->left=insert(root->left,data,temp);
      if(root == temp)lef++;
    }
    else if(righ != num/2){
      root->right=insert(root->right,data,temp);
      if(root == temp)righ++;
    }
    if(lef+righ == num){
      num=num*2;
      lef=righ=0;
    }
  }
  return root;
}