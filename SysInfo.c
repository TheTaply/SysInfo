#include <sys/utsname.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    struct utsname info;
  
    if (uname(&info) < 0)
    {
        perror("uname");
        fprintf(stderr, "Error in uname : %d\n", errno);
        exit(EXIT_FAILURE);
    } else {
        printf("Node Info\n----------\n");
        printf("Distro : %s\n", info.nodename);
        printf("System : %s\n", info.sysname);
        printf("Version : %s\n", info.version);
        printf("Kernel version : %s\n", info.release);
        printf("Architecture : %s\n", info.machine);
        exit(EXIT_SUCCESS);
    }
}
