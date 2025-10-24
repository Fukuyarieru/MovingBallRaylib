#include <stdio.h>
#include <raylib.h>
#include "main.h"

const int BALLS_AMOUNT=10;

int screenWidth=1920;
int screenHeight=1080;

int id=0;

const struct Ball balls[BALLS_AMOUNT];

int main() {

    for(int i=0;i<BALLS_AMOUNT;i++) {
        spawnBall();
    }

    InitWindow(screenWidth, screenHeight, "Moving Ball");

    while(!WindowShouldClose()) {

        BeginDrawing();

        screenWidth=GetScreenWidth();
        screenHeight=GetScreenHeight();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

void DrawBall(struct Ball ball) {
    DrawCircle(ball.cx, ball.cy, ball.radius, ball.color);
}

struct Ball spawnBall(Color color, int radius) {
    struct Ball ball = {.id=id,.cx=screenWidth/2,.cy=screenHeight/2,.color=color,.radius=radius};
    id++;
    return ball;
}
