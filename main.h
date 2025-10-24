#include <raylib.h>

typedef struct Ball {
    int id;
    int cx;
    int cy;
    int radius;
    Vector2 velocity;
    Color color;
};

void DrawBall(struct Ball ball);
