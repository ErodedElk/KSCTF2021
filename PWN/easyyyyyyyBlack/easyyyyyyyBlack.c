 #include <stdio.h>  
#include <stdint.h>  

int main()
{
    
    puts("But I think it's too simple, so I changed it a little~");
    puts("try!");
    vuln();
}

int vuln()
{
    int stack[10];
    read(0, stack, 0x80);
}
