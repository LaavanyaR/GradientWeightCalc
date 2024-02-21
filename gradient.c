#include <stdio.h>


float gradw1(float w1, float w2, float x1, float x2, float y) {
    float der = -2 * (y - (w1 * x1 + w2 * x2) * x1);
    return der;
}



float gradw2(float w1, float w2, float x1, float x2, float y) {
    float der = -2 * (y - (w1 * x1 + w2 * x2) * x2);
    return der;
}

int main() {
    
    float input[4][3] = {
        {0, 1, 1},
        {2, 1, 9},
        {1, 0, 1},
        {-2, 1, 7}
    };

    float w1 = 1; 
    float w2 = 7;

    for (int i = 0; i < 4; ++i) {
        float x1 = input[i][0];
        float x2 = input[i][1];
        float y = input[i][2];

       
        float grad1 = gradw1(w1, w2, x1, x2, y);
        float grad2 = gradw2(w1, w2, x1, x2, y);

        printf("For input [x1=%lf, x2=%lf, y=%lf]:\n", x1, x2, y);
        printf("Gradient for w1: %.2lf\n", grad1);
        printf("Gradient for w2: %.2lf\n\n", grad2);
    }

    return 0;
}

