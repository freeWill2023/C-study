#include <stdio.h>

int main(int argc, const char* argv[])
{
    printf("argc = %d, argv[0] = %s \n", argc, argv[0]);
    printf("argc = %d, argv[1] = %s \n", argc, argv[1]);
    printf("argc = %d, argv[2] = %s \n", argc, argv[2]);

    return 0;
}

//                  int argc, const char* argv[]
//alot@ubnt22:~/c_src/TCPIP$ ./hello 127.0.0.1 9999
//argc = 3, argv[0] = ./hello 
//argc = 3, argv[1] = 127.0.0.1 
//argc = 3, argv[2] = 9999 