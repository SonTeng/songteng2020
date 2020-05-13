#include <stddef.h>
#include <stdio.h>

struct address {
   char name[50];
   char street[50];
   int phone;
};
   
int main()
{
   size_t i = offsetof(struct address,name); 
   printf("address 结构中的 name 偏移 = %d 字节。\n",i);
   
   size_t j = offsetof(struct address, street);
   printf("address 结构中的 street 偏移 = %d 字节。\n",j);
   
   size_t k = offsetof(struct address, phone);
   printf("address 结构中的 phone 偏移 = %d 字节。\n",k);

   return(0);
} 

/*
address 结构中的 name 偏移 = 0 字节。
address 结构中的 street 偏移 = 50 字节。
address 结构中的 phone 偏移 = 100 字节。
*/