/* n=5
  1  2  3  4   5
  16 17 18 19  6
  15 24 25 20  7 
  14 23 22 21  8 
  13 12 11 10  9
*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[10][10];
    int k = 1;

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (k <= n * n)
    {
        // Left -> Right
        for (int i = left; i <= right; i++)
            a[top][i] = k++;
        top++;

        // Top -> Bottom
        for (int i = top; i <= bottom; i++)
            a[i][right] = k++;
        right--;

        // Right -> Left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                a[bottom][i] = k++;
            bottom--;
        }

        // Bottom -> Top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                a[i][left] = k++;
            left++;
        }
    }

    // Print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}