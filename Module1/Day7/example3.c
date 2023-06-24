#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ENT 100
#define MAX_LEN 256

typedef struct {
    int entryno;
    char sensorno[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
} Member;

Member logentries[MAX_ENT];
int numEntries = 0;

void readdatafile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("failed to open the file\n");
        return;
    }

    char line[MAX_LEN];
    fgets(line, MAX_LEN, file);

    while (fgets(line, MAX_LEN, file) != NULL && numEntries < MAX_ENT) {
        Member entry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &entry.entryno, entry.sensorno, &entry.temperature, &entry.humidity,
               &entry.light, entry.timestamp);
        logentries[numEntries++] = entry;
    }

    fclose(file);
}

void datadisplay() {
    printf("entryno  sensorno  Temperature  Humidity  Light  Timestamp\n");

    for (int i = 0; i < numEntries; i++) {
        Member entry = logentries[i];
        printf("%-8d %-9s %-12.1f %-8d %-6d %-8s\n", entry.entryno, entry.sensorno, entry.temperature, entry.humidity,entry.light, entry.timestamp);
    }
}

int main() {
    readdatafile("data.csv");
    datadisplay();
    return 0;
}