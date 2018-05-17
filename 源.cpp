#include <iostream>
#include "rebuild.h"
void main() {
	float curve1[300] = {};
	float curve2[300] = {};
	for (int i = 0; i < 100; i++) {
		curve1[3 * i] = sin(3.14159 / 100 * i);
		curve1[3 * i + 1] = cos(3.14159 / 100 * i);
		curve1[3 * i + 2] = 0;
		curve2[3 * i] = -sin(3.14159 / 100 * i);
		curve2[3 * i + 1] = cos(3.14159 / 100 * i);
		curve2[3 * i + 2] = 0;
	}
	rebuild2D mycurve(2, 50);
	mycurve.rebuild_addCurve(curve1, 100);
	mycurve.rebuild_addCurve(curve2, 100);
	mycurve.rebuild_sample();
	mycurve.rebuild_pointPrint();
	mycurve.rebuild_draw();
}