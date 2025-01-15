#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_PLATES 1000000

const char valid_letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};

bool contains_SS(const char* plate) {
    return (plate[7] == 'S' && plate[8] == 'S');
}

void generate_license_plates() {
    char plate[12];
    int plate_count = 0;

    for (int first = 0; first < 22; first++) {
        for (int second = 0; second < 22; second++) {
            for (int num = 1; num <= 999; num++) {
                for (int third = 0; third < 22; third++) {
                    for (int fourth = 0; fourth < 22; fourth++) {
                        if (third == 18 && fourth == 18) continue;

                        sprintf(plate, "%c%c-%03d-%c%c", valid_letters[first], valid_letters[second], num, valid_letters[third], valid_letters[fourth]);

                        if (plate[0] == 'W') continue;

                        printf("%s\n", plate);
                        plate_count++;

                        if (plate_count >= MAX_PLATES) return;
                    }
                }
            }
        }
    }

    for (int first = 0; first < 22; first++) {
        for (int second = 0; second < 22; second++) {
            for (int num = 1; num <= 999; num++) {
                for (int third = 0; third < 22; third++) {
                    for (int fourth = 0; fourth < 22; fourth++) {
                        if (third == 18 && fourth == 18) continue;

                        sprintf(plate, "%c%c-%03d-%c%c", valid_letters[first], valid_letters[second], num, valid_letters[third], valid_letters[fourth]);

                        if (plate[0] == 'W') continue;

                        printf("%s\n", plate);
                        plate_count++;

                        if (plate_count >= MAX_PLATES) return;
                    }
                }
            }
        }
    }

    for (int first = 0; first < 22; first++) {
        for (int second = 0; second < 22; second++) {
            for (int num = 1; num <= 999; num++) {
                for (int third = 0; third < 22; third++) {
                    for (int fourth = 0; fourth < 22; fourth++) {
                        if (third == 18 && fourth == 18) continue;

                        sprintf(plate, "%c%c-%03d-%c%c", valid_letters[first], valid_letters[second], num, valid_letters[third], valid_letters[fourth]);

                        if (plate[0] == 'W') continue;

                        printf("%s\n", plate);
                        plate_count++;

                        if (plate_count >= MAX_PLATES) return;
                    }
                }
            }
        }
    }
}

int main() {
    generate_license_plates();
    return 0;
}
