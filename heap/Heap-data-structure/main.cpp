#include "class/class.h"
#include "insert/insert.h"
#include "print/print.h"
#include "check/check.h"
#include "delete/freeMemory.h"


int main() {
  heap* root=NULL;
  int input,choice;
  repeat:
  std::cout<<"\n1) Add\n"
             "2) Show\n"
             "3) check binary tree or not\n"
             "4) check if the binary tree is Min heap or Max heap\n"
             "0) Exit\n";
  std::cout<<"choose: ";
  std::cin>>choice;
  if(choice == 0){
    freeMemory(root);
    exit(0);
  }
  else if(choice == 1){
    std::cout<<"\nEnter a number: ";
    std::cin>>input;
    root=insert(root,input,root);
  }
  else if(choice == 2){
    std::cout<<std::endl;
    print(root);
    std::cout<<std::endl;
  }
  else if(choice == 3){
    if(checkBinary(root)){
      std::cout<<"\nThis is a complete binary tree\n";
    }
    else{
      std::cout<<"\nThis is not a complet binary tree\n";
    }
  }
  else if(choice == 4){
    if(checkBinary(root) && checkMaxHeap(root)){
      std::cout<<"\nThis is a Max heap binary tree\n";
    }
    else if(checkBinary(root) && checkMinHeap(root)){
      std::cout<<"\nThis is a Min heap binary tree\n";
    }
    else{
      std::cout<<"\nThis is not a binary tree\n";
    }
  }
  else{
    std::cout<<"\nPlease enter the correct number\n";
  }
  goto repeat;
}