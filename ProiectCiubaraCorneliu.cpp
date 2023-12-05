#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Edge {
    int source, destination, weight;
};

void bellmanFord(vector<Edge>& edges, int numNodes, int source) {
    vector<int> distance(numNodes, numeric_limits<int>::max());
    distance[source] = 0;

    for (int i = 1; i <= numNodes - 1; ++i) {
        for (const auto& edge : edges) {
            int u = edge.source;
            int v = edge.destination;
            int weight = edge.weight;
            if (distance[u] != numeric_limits<int>::max() && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
            }
        }
    }

    for (const auto& edge : edges) {
        int u = edge.source;
        int v = edge.destination;
        int weight = edge.weight;
        if (distance[u] != numeric_limits<int>::max() && distance[u] + weight < distance[v]) {
            cout << "Graful conține un ciclu de cost negativ!" << endl;
            return;
        }
    }

    cout << "Distanțele minime de la nodul sursă " << source << " către celelalte noduri sunt:" << endl;
    for (int i = 0; i < numNodes; ++i) {
        cout << "Nodul " << i << ": ";
        if (distance[i] == numeric_limits<int>::max()) {
            cout << "Infinit" << endl;
        } else {
            cout << distance[i] << endl;
        }
    }
}

int main() {
    int numNodes, numEdges;
    cout << "Introduceți numărul de noduri și de muchii: ";
    cin >> numNodes >> numEdges;

    vector<Edge> edges(numEdges);
    cout << "Introduceți nodul sursă, nodul destinație și ponderea pentru fiecare muchie:" << endl;
    for (int i = 0; i < numEdges; ++i) {
        cin >> edges[i].source >> edges[i].destination >> edges[i].weight;
    }

    int sourceNode;
    cout << "Introduceți nodul sursă: ";
    cin >> sourceNode;

    bellmanFord(edges, numNodes, sourceNode);

    return 0;
}
