#include <stdio.h>
#include <unistd.h>

int main() {
    int hr;
    int min;
    int sec;
    //Asking for time
    printf("What time is it right now? (Format as hr min sec): ");
    scanf("%d %d %d", &hr, &min, &sec);

    if(hr>12||min>60||sec>60){
        printf("Error");
    }


    while(1){   
        sec = sec +1;

        if(sec > 59){
            min = min +1;
            sec = 0;

        }
        if(min > 60){
            hr = hr +1;
            min = 0;
        }
        if(hr > 12){
            hr =0;
        }
        printf("%02d:%02d:%02d \n", hr, min, sec);
        sleep(1);
        system("clear");

    }


}
