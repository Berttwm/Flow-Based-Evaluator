#pragma once
#include <stack>
#include <vector>
#include <unordered_set>

#include "Node.h"

class Evaluator {
	/* Fixed configurators */
	const std::unordered_set<std::string> available_operators_str{"OR", "AND"};
public:
	Evaluator();

	// Use DFS - PostOrder processing to process
	int processTree(Node* currNode);
	// Evaluate ready Nodes
	int evaluate(std::string nodeOperator, std::vector<int> result_list);

private:
	Node* baseNode;
};