#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
char *bfPtr = (char*) calloc (30000, sizeof(char));
char *freePtr = bfPtr;
unsigned int cnt = 0;

++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
--*bfPtr;
--*bfPtr;
putchar(*bfPtr);
fflush(stdout);
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
--*bfPtr;
--*bfPtr;
--*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
--*bfPtr;
--*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
while (*bfPtr){
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
if(cnt != 0){ --bfPtr; --cnt;}
--*bfPtr;
}
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
if(cnt != 29999){ ++bfPtr; ++cnt;}
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
++*bfPtr;
putchar(*bfPtr);
fflush(stdout);
free(freePtr);
return 0;
}