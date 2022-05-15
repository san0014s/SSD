#include <stdio.h>
int main(int argc, char **argv)
{
char buf[8]; // buffer for eight characters
char buf2[8]; //second buffer
fgets(buf,8, stdin); // read from stdio (sensitive function!)
fgets(buf2,8, stdin);
printf("%s\n", buf); // print out data stored in buf
printf("%s\n", buf2); // print out data stored in buf
return 0; // 0 as return value
}
