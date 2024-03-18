#include <stdarg.h>
#include <stdio.h>
int sum(int fixed_arg, ...) {
va_list args;
va_start(args, fixed_arg);
int sum = fixed_arg;
int num;
// Loop through remaining arguments until null terminator encountered
while ((num = va_arg(args, int)) != 0) {
sum += num;
}
va_end(args);
return sum;
}
int main() {
int result1 = sum(5, 3, 7);
int result2 = sum(10, 1, 2, 3);
printf("Sum (5, 3, 7): %d\n", result1);
printf("Sum (10, 1, 2, 3): %d\n", result2);
return 0;
}

