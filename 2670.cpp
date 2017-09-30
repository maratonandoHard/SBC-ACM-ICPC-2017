#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,vetor[3];
    cin >> a >> b >> c;
    vetor[0] = (b * 2) + (c * 4);
    vetor[1] = (a * 2) + (c * 2);
    vetor[2] = (b * 2) + (a * 4);

    sort(vetor,vetor + 3);

    cout << vetor[0] << "\n";
}
