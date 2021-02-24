#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/errno.h>
#include <string.h>

int main(){
    
    
    printf("%d\n", ft_strcmp("\xfe", "\xfe\xff"));

    printf("%d\n", strcmp("\xfe", "\xfe\xff"));


}