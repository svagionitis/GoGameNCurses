#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef struct go_board
{
    char stone; // 0: Black, 1: White, .: No stone
}go_board_t;

void usage(char *argv0)
{
    printf("%s [size of grid]\n", argv0);
    printf("E.g %s 19\n", argv0);
}

void print_empty_board(uint16_t size)
{
    for (uint16_t i = 0;i< 2*size;i++)
    {
        for (uint16_t j = 0;j<size;j++)
        {
            if (i%2 == 0) // Even rows
            {
                if (j != size - 1)
                    printf(".-");
                else
                    printf(". %d", i/2);
            }
            else // Odd rows
            {
                if (i != 2*size - 1)
                {
                    if (j != size - 1)
                        printf("| ");
                    else
                        printf("|");
                }
                else
                {
                    if (j != size - 1)
                        printf("%d ", j);
                    else
                        printf("%d", j);
                }
            }
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        usage(argv[0]);
        return -1;
    }

    uint16_t size_board = strtoul(argv[1], NULL, 10);

    print_empty_board(size_board);

    return 0;
}
