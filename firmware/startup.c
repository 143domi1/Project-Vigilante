#include<stdio.h>
#include<stdbool.h>
#include "scan.h"

void scan_startup(void);

bool status = false;

int main(void) {
    float version = 0.1;
    printf("Project Vigilante firmware\n");
    printf("Status: %s\n", status ? "Online" : "Offline");
    printf("Version %.1f\n", version);
    scan_startup();
    return 0;
}

void scan_startup(void) {
    if (status == true) {
        while (status == true) {
            scan_files();
        }
    } else {
        printf("Not scanning\n");
    }
}