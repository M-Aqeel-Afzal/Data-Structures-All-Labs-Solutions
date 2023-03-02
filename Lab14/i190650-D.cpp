
#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

template<typename T>
class Graph {
private:
	T* Data;
	int** Matrix;
	int M_size;
	int current;

public:
	Graph(int x = 0)
	{
		Data = new T[x];

		Matrix = new int* [x];
		for (int i = 0; i < x; i++)
		{
			*(Matrix + i) = new int[x];
		}

		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				Matrix[i][j] = 0;
			}
		}

		M_size = x;

		current = 0;
	}

	int createVertex(T newVertex)
	{
		Data[current] = newVertex;
		current++;
		return current - 1;
	}

	void insertEdge(int A, int B)
	{
		Matrix[A][B] = 1; Matrix[B][A] = 1;
	}

	void showGraphStructure()
	{
		bool empty = true;
		for (int i = 0; i < M_size; i++)
		{
			for (int j = 0; j < M_size; j++)
			{
				if (Matrix[i][j] != 0)
				{
					empty = false;
					break;
				}
			}
			if (empty == false)
				break;
		}

		if (empty == true)
			cout << "EMPTY GRAPH" << endl;
		else
		{
			cout << "Cols->";
			cout << '\t';
			for (int i = 0; i < M_size; i++)
			{
				cout << i << '\t';
			} cout << endl;
			cout << "Rows|" << endl;
			cout << "    v" << endl;
			for (int i = 0; i < M_size; i++)
			{
				cout << i << '\t';

				for (int j = 0; j < M_size; j++)
				{
					cout << Matrix[i][j] << '\t';
				}

				cout << endl;
			}
		}
	}

	void DFS(int start)                             //DFS implemetation
	{
		string traversal = "";
		int* visited = new int[M_size];
		for (int i = 0; i < M_size; i++)
		{
			visited[i] = 0;
		}
		stack<int> wait;
		wait.push(start);

		while (!wait.empty())
		{
			int current = wait.top();
			wait.pop();
			if (visited[current] == 0)
			{
				visited[current] = 1;
				traversal = traversal + to_string(current) + ",";
				for (int i = M_size - 1; i >= 0; i--)
				{
					if (Matrix[current][i] == 1)
						wait.push(i);
				}
			}
		}

		traversal.pop_back();
		cout << traversal << endl;
	}

	void BFS(int start)                             //BFS implemetation
	{
		string traversal = "";
		int* visited = new int[M_size];
		for (int i = 0; i < M_size; i++)
		{
			visited[i] = 0;
		}
		queue<int> wait;

		wait.push(start);

		while (!wait.empty())
		{
			int current = wait.front();
			wait.pop();
			if (visited[current] == 0)
			{
				visited[current] = 1;
				traversal = traversal + to_string(current) + ",";
				for (int i = 0; i < M_size; i++)
				{
					if (Matrix[current][i] == 1)
						wait.push(i);
				}
			}
		}

		traversal.pop_back();
		cout << traversal << endl;
	}

	
};

int main()
{
	Graph<int> gh(5);                  
	gh.insertEdge(0, 1);
	gh.insertEdge(0, 4);
	gh.insertEdge(1, 2);
	gh.insertEdge(1, 3);
	gh.insertEdge(1, 4);
	gh.insertEdge(2, 3);
	gh.insertEdge(3, 4);


	gh.showGraphStructure();

	cout << "depth First search" << endl;
	gh.DFS(0);                                  //depth First search
	cout << endl;
	cout << "bridth First search" << endl;
	gh.BFS(0);                                      //bridth First search
	cout << endl;

	return 0;
}