#include <graphics.h>
#include <conio.h>
#include <dos.h>

void drawCube() {
    // This function would draw a simple cube in 2D
    // (replace this with appropriate drawing logic for Turbo C++)
    // For example, drawing squares or rectangles
    rectangle(100, 100, 200, 200); // Dummy representation
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    while (!kbhit()) {
        cleardevice(); // Clear the screen
        drawCube(); // Draw cube
        delay(100); // Delay for animation
    }

    closegraph();
    return 0;
}
