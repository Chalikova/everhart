#pragma once
#include <vector>
#include <functional>
class everhart_solver
{
	std::vector<std::function<double(const std::vector<double>&, double)>> _equations;
public:
	everhart_solver(const std::vector<std::function<double(const std::vector<double>&, double)>>& equations) :_equations(equations) {}

	std::vector<double> solve(double left, double right, const std::vector<double> & initial_dispacement, const std::vector<double>& initial_speed) const;
};

