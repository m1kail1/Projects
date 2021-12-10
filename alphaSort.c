#include <stdio.h>
#include <string.h>

//sort function
void sort_alphabetic(char* a[], char n){
    int i;
    int j;
    //For alphabetical order(A/a)
    if(n == 'A' || n == 'a'){
        for (i = 0; i < 7; i++){
            for (j = i + 1; j < 8; j++){
            //if first word is higher on the
            //alphabet, switch
                if (strcmp(a[i], a[j]) > 0) {
                    //temp variable to switch
                    char *t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
    //for reverse order(D/d)
    if(n == 'D' || n == 'd'){
        for (i = 0; i < 7; i++){
            for (j = i + 1; j < 8; j++){
            //if first word is lower on the
            //alphabet, switch
                if (strcmp(a[i], a[j]) < 0) {
                    //temp variable to switch
                    char *t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
}
int main(){
    //Given array
    char* a[]= {"Systems", "Programming", "Deep", 
    "Learning", "Internet", "Things", "Robotics", "Course"};
    printf("Alphabetical order: A or a\n");
    printf("Reverse alphabetical order: D or d\n");
    char in;
    //takes user input for order
    scanf("%c", &in);
    //calls sort function
    sort_alphabetic(a, in);
    //Printing sorted array
    printf("Sorted array:\n");
    int i;
    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
        printf("%s\n", a[i]);
    return 0;
}