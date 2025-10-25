#include <raylib.h>

typedef struct Ball {
    int id;
    int cx;
    int cy;
    int radius;
    Vector2 velocity;
    Color color;
};

struct Ball MoveBall(struct Ball ball);
void DrawBall(struct Ball ball);
struct Ball spawnBall(Color color, int radius);
