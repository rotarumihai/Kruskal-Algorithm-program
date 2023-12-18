#include <iostream>
#include <algorithm>
using namespace std;

struct Muchie {
    int x, y;
    float cost;
};

Muchie v[30];

int c[30];

int gasesteSet(int i) {
    if (c[i] == i)
        return i;
    return gasesteSet(c[i]);
}

void unesteSeturi(int i, int j) {
    int radacina_i = gasesteSet(i);
    int radacina_j = gasesteSet(j);
    c[radacina_i] = radacina_j;
}

int main() {

    int n, m;
    int i, j;
    
    // Citim numarul de noduri (n) si muchii (m) de la tastatura
    cout << "Introdu numarul de noduri: ";
    cin >> n;
    cout << "Introdu numarul de muchii: ";
    cin >> m;

    float ct = 0;

    // Citim informatiile despre muchii de la tastatura
    for (i = 1; i <= m; i++) {
        cout << "Introdu muchia " << i << " (x, y, cost): ";
        cin >> v[i].x >> v[i].y >> v[i].cost;
    }

    // Sortam muchiile in ordine crescatoare a costului
    sort(v + 1, v + m + 1, [](const Muchie& a, const Muchie& b) {
        return a.cost < b.cost;
    });

    // Repartizam nodurile in componente conexe diferite
    for (i = 1; i <= n; i++)
        c[i] = i;

    j = 1;
    for (i = 1; i <= n - 1; i++) {
        while (gasesteSet(v[j].x) == gasesteSet(v[j].y))
            j++;
        cout << v[j].x << ', ' << v[j].y << " cu costul " << v[j].cost << endl;
        ct += v[j].cost;
        unesteSeturi(v[j].x, v[j].y);
    }

    // Afisam rezultatul obtinut
    cout << "Costul total al Arborelui este: " << ct << endl;

    return 0;
}

