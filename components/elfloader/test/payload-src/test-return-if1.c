#include <stdint.h>
#include <stdint.h>


uint32_t data;

intptr_t local_main(intptr_t arg) {
    if (arg == 0) {
        data = 0;
    } else {
        data = 0x12345678;
    }
    return data;
}
