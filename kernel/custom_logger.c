#include "custom_logger.h"
#include "types.h"
#include "riscv.h"
#include "defs.h"

void log_message(int level, const char *message) {
    if (level == log_level_info) {
        printf("INFO - ");
    } else if (level == log_level_warn) {
        printf("WARNING - ");
    } else if (level == log_level_error) {
        printf("ERROR - ");
    }
    printf("%s\n", message);
}