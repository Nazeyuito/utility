#include <stdio.h>
#include <math.h>

float myfPow(float x, int y);//return x^y (x=float)
float dintancePoints(float *p1, float *p2, int elm);//return distans point1 to point2 (elm = number of elements)

struct A {
	float p[2][2];
};

void setA(struct A *a) {
	a->p[0][0] = 0.0;
	a->p[0][1] = 0.0;
	a->p[1][0] = 1.0;
	a->p[1][1] = 1.0;
}
float myfPow(float x, int y) {
	float p = 1;
	for (int i = 0; i < y; i++)
		p *= x;
	return p;
}

float dintancePoints(float *p1, float *p2, int elm) {
	float distance = 0;
	for (int i = 0; i < elm; i++)
		distance += myfPow((p1[i] - p2[i]), 2);
	return sqrtf(distance);
}

float distA(float *p1, float *p2) {
	float dist = 0.0;
	dist = dintancePoints(p1, p2, 2);
	return dist;
}

int main() {
	float p1[2] = { 0.0,0.0 };
	float p2[2] = { 1.0,1.0 };
	float d = 0.0;
	struct A a;
	setA(&a);
	//d = dintancePoints(p1, p2, 2);
	d = distA(p1, p2);
	printf("d = %3f", d);
}