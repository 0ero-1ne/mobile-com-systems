#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAXN = 6;
const double R = 6.0;

struct Station {
	double x, y;
};

Station stations[MAXN] = {
	{6.0, 0.0}, {13.0, 8.0}, {12.0, 1.0},
	{7.0, 5.0}, {1.0, 3.0}, {3.0, 8.0}
};

vector<int> adj[MAXN];

void addEdge(int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

double distance(const Station& s1, const Station& s2) {
	return sqrt((s1.x - s2.x) * (s1.x - s2.x) + (s1.y - s2.y) * (s1.y - s2.y));
}

void buildGraph() {
	for (int i = 0; i < MAXN; i++) {
		for (int j = i + 1; j < MAXN; j++) {
			double d = distance(stations[i], stations[j]);
			if (d <= R) {// && freq[i] == freq[j]
				addEdge(i, j);
			}
		}
	}
}

void printGraph() {
	int matrix[MAXN][MAXN] = {};
	for (int u = 0; u < MAXN; u++) {
		for (int v : adj[u]) {
			matrix[u][v] = matrix[v][u] = 1;
		}
	}

	cout << "    ";
	for (int i = 0; i < MAXN; i++) {
		cout << i + 1 << " ";
	}
	cout << endl << endl;
	
	for (int i = 0; i < MAXN; i++) {
		cout << i + 1 << "   ";
		for (int j = 0; j < MAXN; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	buildGraph();
	printGraph();

	system("pause");

	return 0;
}