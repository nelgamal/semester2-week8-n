
#include <stdio.h>
#include "points.h"
#include <math.h>

int main( void ) {

    // complete the structure definition in the header file first
    // implement code for the following
    // include necessary libraries
    
    Point p1 = { .x=1, .y=2 };
    Point p2 = { .x=-2, .y=4 };
    
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %f\n", 
             p1.x,p1.y,p2.x,p2.y,distance(p1,p2));
    

    Point r = reflect(p1);
    printf("Reflected: (%.1f, %.1f)\n", r.x, r.y);

    Point dq = { .x=1, .y=-1 };
    Point s = shift(p1, dq);
    printf("Shifted: (%.1f, %.1f)\n", s.x, s.y);

    return 0;

}

float distance( Point p, Point q ) {
    // implement distance here
    float dx = p.x - q.x; 
    float dy = p.y - q.y;
    return sqrt(dx*dx + dy*dy);
}

Point reflect(Point q) {
    Point p;
    p.x = q.x; 
    p.y = -q.y; 
    return p;
}

Point shift(Point q, Point dq) {
    Point p; 
    p.x = q.x + dq.x;
    p.y = q.y + dq.y;
    return p;
}