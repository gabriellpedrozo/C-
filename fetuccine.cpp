#include <iostream>
using namespace std;

int fetuccine(int n, int termo0, int termo1)
{
    if (n == 0)
        return termo0;
    if (n == 1)
        return termo1;

    if (n % 2 == 0)
    {
        return (fetuccine(n - 1, termo0, termo1) - fetuccine(n - 2, termo0, termo1));
    }
    else
    {
        return (fetuccine(n - 1, termo0, termo1) + fetuccine(n - 2, termo0, termo1));
    }
}

int main()
{
    int n0, n1;
    cin >> n0 >> n1;

    int num;
    cin >> num;

    int i = 0;
    while (i < num)
    {
        cout << fetuccine(i, n0, n1) << " ";
    }

    cout << endl;

    return 0;
}