#include <string.h>
#include <stdio.h>

int main(){
    char str[] = "Favour Precious";
    int size_int = strlen(str);
    char delim[] = " ";

    char *ptr = strtok(str, delim);
    

    while (ptr != NULL)
    {

        
        for (int i = 0; i < strlen(ptr); i++)
        {
            printf("%c",*ptr);
        }
        ptr++
        printf("%li", strlen(ptr));
        ptr = strtok(NULL, delim);
    }
    printf("\n");
    return (0);
}



