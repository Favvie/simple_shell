#include <stdio.h>
#include <unistd.h>

extern char **environ;  //variable outside a function
// int main(int ac, char** arc, char **env)
// {
//     int i = 0;

//     while (environ[i] != NULL)
//     {
//         printf("%s\n", environ[i]);
//         i++;
//     }

//     return (0);
// }

int main(int ac, char** arc)
{
    char *cmd = "";
    char *args[] = {};
    char *env[] = {};

    return (0);
}