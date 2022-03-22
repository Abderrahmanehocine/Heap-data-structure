#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <stdlib.h>

class heap{
 private: 
  int data;
 public: 
  class heap* left;
  class heap* right;
  heap(int input){
    std::cout<<"\nNew node inserted\n";
    data=input;
    left=right=NULL;
  }
  int get_data(){
    return data;
  }
};

#endif