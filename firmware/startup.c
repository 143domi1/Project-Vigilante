#include<stdio.h>
#include<stdbool.h>

int main(void) {
    bool status = false;
    float version = 0.1;
    printf("Project Vigilante firmware\n");
    printf("Status: %s\n", status ? "Online" : "Offline");
    printf("Version %.1f\n", version);
    return 0;
}