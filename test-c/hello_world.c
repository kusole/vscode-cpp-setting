#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void bar(int index) {
    for (size_t i = 0; i < index; i++) {
        printf("Something is really rocking, on planet No.%d\n", i);
    }
}

typedef struct {
    uint8_t *Tag;
    int Val;
    void (*FuncPtr)(int);
} foo_t;

int main(void) {
    uint8_t str[] = "ABCDEFG";
    uint8_t *str_offset = str + 2;

    int val = 5;
    int *val_ptr = &val;

    foo_t foo = {
        .Tag = str_offset,
        .Val = val,
        .FuncPtr = &bar,
    };

    foo_t *foo_ptr=&foo;

    printf("Tag:%s, Value:%d\n", foo_ptr->Tag, foo_ptr->Val);
    foo_ptr->FuncPtr(3);
    foo.FuncPtr(3);

    // scanf("%d", val_ptr);

    // if (val == 12) {
    //     int n_val = -val;
    //     printf("Negative Value:%d\n", n_val);
    // }

    printf("hello world\n");
    system("pause");
    return 0;
}