#include <fstream>
using namespace std;
int main()
{
    ifstream f("h.in");
    int n;
    f >> n;
    f.close();
    ofstream g("h.out");
    int x = n + 1;
    int y = x + 2*n -1;
    while (x <= y)
    {
        g << x << ' ';
        x++;
    }
    g.close();
    return 0;
}
