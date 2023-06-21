#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};
double calvolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}
double calsurfacearea(struct Box *boxPtr) {
    double length = boxPtr->length;
    double width = boxPtr->width;
    double height = boxPtr->height;

    return 2 * (length * width + length * height + width * height);
}
int main() {
    struct Box b1;
    struct Box *boxPtr = &b1;
    b1.length = 2.0;
    b1.width = 3.0;
    b1.height = 5.0;
    printf("Volume: %.2f\n", calvolume(&b1));
    printf("Surface Area: %.2f\n", calsurfacearea(&b1));

    boxPtr->length = 7.0;
    boxPtr->width = 4.0;
    boxPtr->height = 3.0;

    printf("volume %f\n", calvolume(boxPtr));
    printf("surface Area %f\n", calsurfacearea(boxPtr));

    return 0;
}