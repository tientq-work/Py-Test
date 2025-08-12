// faulty_li64.c
#include <stdio.h>
#include <stdint.h>

int main(void) {
    int64_t number = 9223372036854775807LL;

    printf("Number is: %ld\n", number) // ❌ thiếu dấu chấm phẩy

    // ❌ logic lỗi: biến 'result' chưa được khai báo
    result = number + 100;

    // ❌ format specifier sai (dùng %d cho int64_t có thể gây warning/ lỗi)
    printf("Result is: %d\n", result);

    return 0
}
