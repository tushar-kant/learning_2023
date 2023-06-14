#include <stdio.h>

int main() {
    int roll;
    char name[100];
    float phy, math, chem;
    float total, percentage;

    printf("roll no");
    scanf("%d", &roll);
    printf("name");
    scanf(" %s", name);

    printf("marks in physics ");
    scanf("%f", &phy);
    printf("marks in math ");
    scanf("%f", &math);

    printf("marks in chem ");
    scanf("%f", &chem);

    total = phy + math + chem;
    percentage = (total / 300) * 100;

    printf("roll No %d\n", roll);
    printf("name %s\n", name);
    printf("physics Marks %f\n", phy);
    printf("math Marks %f\n", math);
    printf("chem %f\n", chem);
    printf("total Mark %f\n", total);
    printf("percentage %f\n", percentage);

    return 0;
}
