#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
   //char lock1[5],lock2[5];
   int lock1,lock2;
   scanf("%d" , &lock1);
   scanf("%d" , &lock2);
   //std::cin>>lock1;
   //std::cin>>lock2;
   // int l1=stoi(lock1);
   // int l2=stoi(lock2);
   //printf("%s",lock1+3);
    if (lock1%2==0||lock2%2!=0)
       std::cout<<"yes"<<std::endl;
    else 
       std::cout<<"no"<<std::endl;
//
    return 0;
}