#include <stdio.h>
#include <raylib.h>
#include "main.h"

int id=0;

int main() {

    int screenWidth=1920;
    int screenHeight=1080;

    InitWindow(screenWidth, screenHeight, "Moving Ball");

    while(!WindowShouldClose()) {

        BeginDrawing();



        EndDrawing();
    }
    return 0;
}

void DrawBall(struct Ball ball) {
    DrawCircle(ball.cx, ball.cy, ball.radius, ball.color);
}

struct Ball spawnBall() {
    return Ball {

    }
}
