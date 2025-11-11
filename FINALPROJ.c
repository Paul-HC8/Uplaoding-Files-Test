#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>


// DIGIAL CLOCK

int main(){

time_t rawtime = 0; // time_t holds UNIX Epoch (how many Second have passed by Jan 1 1970 1.7bil secs)

struct tm *pTime = NULL;
bool isRunning = true;

printf("DIGITAL CLOCK \n");

while(isRunning){
    time(&rawtime);
  
    pTime = localtime(&rawtime);

    printf("\r%02d:%02d:%02d\n", pTime->tm_hour,pTime->tm_min,pTime->tm_sec);

    sleep(1);
}
}