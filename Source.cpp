#include"everhart_solver.h"


int main() {
	std::vector<std::function<double(const std::vector<double>&, double)>> equations = {
		[](const std::vector<double>& x, double t) {return -x[0]; }
	};
	std::vector<double> initial_dispacement = { 1.0 };
	std::vector<double> initial_speed = { 0.0 };
	const double left = 0.0;
	const double right = 1.0;
	everhart_solver esolver = { equations };
	auto solution = esolver.solve(right, left, initial_dispacement, initial_speed);
	system("pause");
}