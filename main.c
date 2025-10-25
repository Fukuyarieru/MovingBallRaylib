#include <stdio.h>
#include <raylib.h>
#include "main.h"

// const int BALLS_AMOUNT=10;

int screenWidth=1920;
int screenHeight=1080;

const int ballMovingSpeed=10;

// int id=0;

// const struct Ball balls[BALLS_AMOUNT];

int main() {

    InitWindow(screenWidth, screenHeight, "Moving Ball");

    // for(int i=0;i<BALLS_AMOUNT;i++) {
    //     spawnBall(BLACK,3);

    struct Ball ball= spawnBall(BLACK, 100);

    while(!WindowShouldClose()) {

        BeginDrawing();

        ClearBackground(RAYWHITE);

        ball=MoveBall(ball);

        DrawBall(ball);

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

struct Ball MoveBall(struct Ball ball) {

    if(GetKeyPressed()==KEY_A) {
        ball.cx-=ballMovingSpeed;
    }
    if(GetKeyPressed()==KEY_D) {
        ball.cx+=ballMovingSpeed;
    }
    if(GetKeyPressed()==KEY_W) {
        ball.cy+=ballMovingSpeed;
    }
    if(GetKeyPressed()==KEY_S) {
        ball.cy-=ballMovingSpeed;
    }

    printf("cx: %d, cy: %d \n", ball.cx, ball.cy);

    return ball;
}

struct Ball spawnBall(Color color, int radius) {
    struct Ball ball = {.id=0,.cx=screenWidth/2,.cy=screenHeight/2,.color=color,.radius=radius};
    // id++;
    return ball;
}

// inline void ballPhysics(struct Ball balls[]) {
//
// }
