#include "monty.h"
/**
 * @brief 
 * 
 */
void parse_method(char *content)
{
   char *tokent1 = strtok(content, "\n");

   printf("%s",tokent1);
}



/**
 * @brief
 *
 */
int main(int argc, char const *argv[])
{
    char *methode_file = argv[1];

    FILE *fd = fopen(methode_file, "r");
    char *content;

    getline(&content, NULL, fd);
    parse_method(content);
    return 0;
}
