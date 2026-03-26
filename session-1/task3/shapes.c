
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Point p = {.x=1, .y=2}; 
    
    Rectangle r = makeRectangle(p, 4.0, 3.0);

    printf("Area: %.2f\n", area(r));

    Point dp = {.x=2, .y=1};
    shiftRectangle(&r, dp);

    printf("Shifted position: (%.1f, %.1f)\n", r.p.x, r.p.y);

    scaleRectangle(&r, 2.0);

    printf("Scaled width: %.1f, height: %.1f\n", r.width, r.height);
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r;

    r.p = p;
    r.width = width; 
    r.height = height; 

    return r;
}

float area( Rectangle r ) {
    return r.width * r.height;
}

void shiftRectangle( Rectangle *r, Point dp ) {
    r ->p.x += dp.x;
    r ->p.y += dp.y;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r ->width *= scale; 
    r -> height *= scale; 
}
