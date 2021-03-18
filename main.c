#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/errno.h>
#include <string.h>
#include <fcntl.h> 

int main(){
    int fd;
    char str[] = "fsdf";
	  int i = -1;
    char s1[100000];
    char s2[100000];
    char s3[100000];
    char s4[100000];
    char *p1;
    char *p2;
    
   
    //ft_write
    fd = open("tmp.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH );
    printf("\nft_write\n#################################\n");
    printf("%d\n" ,(int)ft_write(fd, "fff", strlen(str)));
    printf("%d\n" ,(int)write(fd, "fff", strlen(str)));
    close(fd);

    //ft_read
    fd = open("tmp.txt", O_RDONLY);
    printf("\nft_read\n#################################\n");
    ft_read(fd, s1, 3);
    close(fd);
    printf("%s\n", s1);
    fd = open("tmp.txt", O_RDONLY);
	  read(fd, s2, 3);
    printf("%s\n", s2);
    close(fd);

    //ft_strcmp
    printf("\nstrcmp\n#################################\n");
    printf("%d\n", ft_strcmp("dsaf", "dsaf"));
    printf("%d\n", strcmp("dsaf", "dsaf"));

    //ft_strcpy
    printf("\nstrcpy\n#################################\n");
    printf("%d\n", (int)ft_strcpy(s3, "dsaf"));
    printf("%s\n", s3);
    printf("%d\n", (int)strcpy(s4, "dsaf"));
    printf("%s\n", s4);

    //ft_strdup
    printf("\nstrdup\n#################################\n");
    printf("%s\n", p1 = ft_strdup("dsaf"));
    printf("%s\n", p2 = strdup("dsaf"));


    //ft_strlen
    printf("\nstrlen\n#################################\n");
    printf("%d\n", (int)ft_strlen("dsaf"));
    printf("%d\n", (int)strlen("dsaf"));
}