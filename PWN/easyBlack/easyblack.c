#include <stdio.h>  
#include <stdint.h>  

int main()
{
    
    puts("Mr. Xie said that all my questions are too difficult, let me also come up with some easy questions ......");
    puts("This is a easy stack");
    vuln();
}

int vuln()
{
    int stack[10];
    read(0, stack, 0x80);
}


void backdoor()
{
	system("/bin/sh");
}
