#include "check.h"

//check if the tree is a binary tree or not
bool checkBinary(heap* root){
  if(root == NULL){
    return true;
  }
  if(root->left == NULL && root->right == NULL){
    return true;
  }
  if(root->left != NULL && root->right != NULL){
    return checkBinary(root->left) && checkBinary(root->right);
  }
  return false;
}

//check if the binary tree is a Max heap
bool checkMaxHeap(heap* root){
  if(root == NULL){
    return true;
  }
  if(root->left == NULL && root->right == NULL){
    return true;
  }
  if(root->left->get_data() <= root->get_data() && root->right->get_data() <= root->get_data()){
    return checkMaxHeap(root->left) && checkMaxHeap(root->right);
  }
  return false;
}

//check if the binary tree is Min heap
bool checkMinHeap(heap* root){
  if(root==NULL){
    return true;
  }
  if(root->left == NULL && root->right == NULL){
    return true;
  }
  if(root->left->get_data() >= root->get_data() && root->right->get_data() >=root->get_data()){
    return checkMinHeap(root->left) && checkMinHeap(root->right);
  }
  return false;
}