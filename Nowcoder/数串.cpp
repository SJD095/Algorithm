#include <iostream>
#include <string>

using namespace std;

bool LeftGreaterThanRight(int left, int right)
{
    string leftFirst, rightFirst;
    leftFirst = to_string(left) + to_string(right);
    rightFirst = to_string(right) + to_string(left);

    if(leftFirst > rightFirst)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int N, tmp;

    cin >> N;

    int data[N];

    for(int i = 0; i < N; i++)
    {
        cin >> data[i];
    }

    for(int i = N - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(LeftGreaterThanRight(data[j], data[j+1]))
            {
                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }

    for(int i = N - 1; i >= 0; i--)
    {
        cout << data[i];
    }

    cout << endl;
}