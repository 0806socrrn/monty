#include "monty.h"
/**
 * @brief
 *
 */
void parse_method(char *content, unsigned int line_number)
{
    char *method = strtok(content, " \n");
    char *args = strtok(NULL, " \n");
    global_stack = args;

    void (*method_ptr)(stack_t * *stack, unsigned int line_number);
    method_ptr = get_method(method, line_number);
    // Create a new stack
    method_ptr(&global_stack_head, line_number);
    free(method);
    free(args);
}
/**
 * @brief
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    int line_number;
    char *method_file, *content;
    FILE *fd;
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    method_file = argv[1];
    fd = fopen(method_file, "r");
    if (fd == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", method_file);
        exit(EXIT_FAILURE);
    }

    getline(&content, NULL, fd);

    line_number = 0;
    while (getline(&content, NULL, fd) != -1)
    {
        line_number++;
        parse_method(content, line_number);
        free(content);
        content = NULL;
    }
    return 0;
}
