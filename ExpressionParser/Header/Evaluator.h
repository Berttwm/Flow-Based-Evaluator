#pragma once
#include <stack>
#include <vector>

#include "Node.h"

class Evaluator {
public:
	Evaluator();

	// Stack operations
	void push_stk(Node node);
	Node pop_stk(Node node);
	// Results vector operations
	void add_results(int level, int column, int results);
	int remove_results(int level, int column);


private:
	std::stack<Node> eval_stack;
	// assuming int is the result of output
	std::vector<std::vector<int>> results_vector; // finished evaluated results should end up here

};