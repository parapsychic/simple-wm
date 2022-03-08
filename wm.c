#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>

Display *dpy;

void start();
void grab();
void loop();
void stop();
void die();

int main(){
    start();
    grab();
    loop();
    stop();

    return 0;
}

void start(){
    if(!(dpy = XOpenDisplay(0)))
        die("failed to open display");
}

void loop(){
    while (1) {
    }
}

void stop(){
    XCloseDisplay(dpy);
}

void die(char *exit_msg){
    fprintf(stderr, "%s\n", exit_msg);
    exit(EXIT_FAILURE);
}
