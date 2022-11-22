//#include <stdio.h>
//int main() {
//    float latitude, longitude;
//    char info[80];
//    int started = 0;
//    puts("data[");
//
//    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude,info) == 3) {
//        if (started)
//            printf(",\n");
//        else
//            started = 1;
//        if (latitude < -90 || latitude > 90) {
//            fprintf(stderr, "Invalid latitude: %f\n", latitude);
//            return 2;
//        }
//        if (longitude < -180 || longitude > 180) {
//            fprintf(stderr, "Invalid longtitude: %f\n", longitude);
//            return 2;
//        }
//        printf("{latitude: %f, longtitude: %f, info: '%s'}", latitude,longitude,info);
//    }
//    puts("\n]");
//    return 0;
//}

//Карта


//#include <stdio.h>
//int main() {
//    char word[40];
//    int i = 0;
//    while (scanf("%39s", word) == 1) {
//        i = i+1;
//        if (i % 2)
//            fprintf(stdout, "%s\n", word);
//        else
//            fprintf(stderr, "%s\n", word);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    char line[80];
//    if (argc != 6) {
//        fprintf(stderr, "Trebuetsya 5 argumentov");
//        return 1;
//    }
//    FILE *in = fopen("spooky.csv", "r");
//    FILE *file1 = fopen(argv[2], "w");
//    FILE *file2 = fopen(argv[4], "w");
//    FILE *file3 = fopen(argv[5], "w");
//    while (fscanf(in, "%79[^\n]\n", line) ==1 ) {
//        if (strstr(line, argv[1]))
//            fprintf(file1, "%s\n", line);
//        else if (strstr(line, argv[3]))
//            fprintf(file2, "%s\n", line);
//        else
//            fprintf(file3, "%s\n", line);
//    }
//
//    fclose(in);
//    fclose(file1);
//    fclose(file2);
//    fclose(file3);
//    return EXIT_SUCCESS;
//}



#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d : t")) != EOF)
        switch (ch) {
            case 'd':
            delivery = optarg;
                break;
        case 't':
            thick = 1;
                break;
            default:
                fprintf(stderr, "Neizvestniy parametr: '%s'\n", optarg);
                return 1;
        }
    argc -= optind;
    argv += optind;

    if (thick)
        puts("Pishnoe testo.");
    if (delivery[0])
        printf("Budet dostavleno %s.\n", delivery);
    puts("Ingredienty:");
    for (count = 0; count < argc; count++)
        puts(argv[count]);
    return 0;
}