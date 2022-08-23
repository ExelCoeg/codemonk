#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int A[10000];
        int B[10000];
        int N, K;
        cin >> N >> K;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++)
        {

            B[i + K] = A[i];

            if ((i + K) >= N)
            {
                B[(i + K) % N] = A[i];
            }
        }
        for (int i = 0; i < N; i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
    }
}