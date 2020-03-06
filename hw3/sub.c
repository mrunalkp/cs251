#include <stdio.h>
#include <stdlib.h>

float subr(float in1, float in2) {
    float ret = 0.0;
    asm ("fsubr %2, %0" : "=&t" (ret) : "%0" (in1), "u" (in2));
    return ret;
}

float sub(float in1, float in2) {
    float ret = 0.0;
    asm ("fsub %2, %0" : "=&t" (ret) : "%0" (in1), "u" (in2));
    return ret;
}

int main(int argc, char** argv) {

    float f1 = 3.6;
    float f2 = 1.2;
    float r1 = sub(3.6, 1.2);
    float r2 = subr(3.6, 1.2);

    printf("SUB(%f, %f) = %f\n", f1, f2, r1);
    printf("SUBR(%f, %f) = %f\n", f1, f2, r2);

    return 0;
}