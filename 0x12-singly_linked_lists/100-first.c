#include <stdio.h>

void before_main(void);

#pragma data_seg(".CRT$XCU")
void (*before_main_ptr)(void) = before_main;
#pragma data_seg()

void before_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
