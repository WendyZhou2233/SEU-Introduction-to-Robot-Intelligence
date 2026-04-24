#include <vector>
#include <queue>
#include <stack>
#include <iostream>

using namespace std;

enum class AIMethod
{
	DFS,
	BFS,
	UCS,
	AStar
};

// the puzzle class
class AI_Puzzle
{
public:
	AI_Puzzle() { ; };
	AI_Puzzle(const vector<int>& init_state) {
		m_init_state.assign(init_state.begin(), init_state.end());
	};
	~AI_Puzzle() { ; };

public:
	// set the init state
	void setInitState(const vector<int>& init_state) {
		m_init_state.assign(init_state.begin(), init_state.end());
	};

	//
	// please fill THREE OR FOUR types of solver to find the solution
	// 
	// return true if the problem has solution
	// return false if the problem does not have solution
	// results: the output sequences of states
	// 
	// We want the final state is
	//
	//		0	1	2
	//		3	4	5
	//		6	7	8
	//
	bool solution(vector<vector<int>>& results, AIMethod method)
	{
		// TODO: please fill in the code
		//
		// Yangang Wang @SEU

		return true;
	}

private:
	// bfs to find the solution
	bool BFS(vector<vector<int>>& results)
	{
		// TODO: please fill in the code
		//
		// Yangang Wang @SEU

		return true;
	}

	// dfs to find the solution
	bool DFS(vector<vector<int>>& results)
	{
		// TODO: please fill in the code
		//
		// Yangang Wang @SEU

		return true;
	}

	// ucs to find the solution
	bool UCS(vector<vector<int>>& results)
	{
		// TODO: please fill in the code
		//
		// Yangang Wang @SEU

		return true;
	}

	// A* to find the solution
	bool AStar(vector<vector<int>>& results)
	{
		// TODO: please fill in the code
		//
		// Yangang Wang @SEU

		return true;
	}

private:
	vector<int> m_init_state;
};

// test function for 16-puzzle problem
void test(const vector<int>& init_state, AIMethod method) {

	// output the method type
	switch (method)
	{
	case AIMethod::DFS:
		printf("try method: DFS\n");
			break;
	case AIMethod::BFS:
		printf("try method: BFS\n");
			break;
	case AIMethod::UCS:
		printf("try method: UCS\n");
			break;
	case AIMethod::AStar:
		printf("try method: A star\n");
			break;
	default:
		printf("invalid method, return!\n");
		return;
	}

	AI_Puzzle puzzle;
	puzzle.setInitState(init_state);
	vector<vector<int>> results;
	if (puzzle.solution(results, method)) {
		printf("solution for the initial state: ");
		for (int i = 0; i < init_state.size(); i++)
			printf("%d ", init_state[i]);
		printf("\n");
		for (int i = 0; i < results.size(); i++) {
			printf("step: %03d:", i);
			for (int j = 0; j < results[i].size(); j++) {
				printf(" %d", results[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("no solution for the initial state: ");
		for (int i = 0; i < init_state.size(); i++)
			printf("%d ", init_state[i]);
		printf("\n");
	}
	printf("\n");
}

int main(int argc, char** argv)
{
	// This is the code for testing the 8-puzzle problem
	// Please fill in the code of class 'AI_Puzzle'
	// and write your design, running tests, analysis and etc. into your report
	// Be careful: in each step, we can ONLY exchange with ONE neighbor of digit 0, horizontally or vertically
	//
	// Good Luck!
	//
	// Yangang Wang @SEU

	// Test 1
	//	5   1   2
	//	6   3   0
	//	4   7   8
	vector<int> init_state1 = { 5, 1, 2, 6, 3, 0, 4, 7, 8 };
	// compare
	test(init_state1, AIMethod::DFS);
	test(init_state1, AIMethod::BFS);
	test(init_state1, AIMethod::UCS);
	test(init_state1, AIMethod::AStar);

	// Test 2
	//
	//	2   8   3
	//	1   6   4
	//	7   5   0
	vector<int> init_state_2 = { 2, 8, 3, 1, 6, 4, 7, 5, 0 };
	// compare
	test(init_state_2, AIMethod::DFS);
	test(init_state_2, AIMethod::BFS);
	test(init_state_2, AIMethod::UCS);
	test(init_state_2, AIMethod::AStar);

	// Test 3
	//
	//	1   0   2
	//	3   4   5
	//	6   7   8
	vector<int> init_state_3 = { 1, 0, 2, 3, 4, 5, 6, 7, 8 };
	// compare
	test(init_state_3, AIMethod::DFS);
	test(init_state_3, AIMethod::BFS);
	test(init_state_3, AIMethod::UCS);
	test(init_state_3, AIMethod::AStar);

	// Test 4
	//
	//	4   3   5
	//	6   0   8
	//	2   1   7
	vector<int> init_state_4 = { 4, 3, 5, 6, 0, 8, 2, 1, 7 };
	// compare
	test(init_state_4, AIMethod::DFS);
	test(init_state_4, AIMethod::BFS);
	test(init_state_4, AIMethod::UCS);
	test(init_state_4, AIMethod::AStar);

	// Test 5
	//
	//	1   7   3
	//	0   5   4
	//	6   2   8
	vector<int> init_state_5 = { 1, 7, 3, 0, 5, 4, 6, 2, 8 };
	// compare
	test(init_state_5, AIMethod::DFS);
	test(init_state_5, AIMethod::BFS);
	test(init_state_5, AIMethod::UCS);
	test(init_state_5, AIMethod::AStar);


	// Test 6, 4*4
	//	14   1   3   15
	//	13   6   0   11
	//	4    2   7   5
	//  8    12  10  9
	vector<int> init_state_6 = { 14, 1, 3, 15, 13, 6, 0, 11, 4, 2, 7, 5, 8, 12, 10, 9 };
	// compare
	test(init_state_6, AIMethod::DFS);
	test(init_state_6, AIMethod::BFS);
	test(init_state_6, AIMethod::UCS);
	test(init_state_6, AIMethod::AStar);

	return 0;
}