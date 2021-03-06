#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int mdc(int a, int b)
{
    int resto = 0;
    
    while(b != 0)
    {
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}

int main()
{
    char a, b, c;
    int d, e, f, g;
    int n;
    int resp1, resp2;
    
    cin >> n;
    while(n-- > 0)
    {
        scanf("%d %c %d %c %d %c %d", &d, &a, &e, &b, &f, &c, &g);
        switch(b)
        {
            case '+':
                resp1 = d*g + e*f;
                resp2 = e*g;
                printf("%d/%d = %d/%d\n", resp1, resp2, resp1/mdc(resp1, resp2), resp2/mdc(resp1, resp2));
                break;
            case '-':
                resp1 = d*g - e*f;
                resp2 = e*g;
                printf("%d/%d = %d/%d\n", resp1, resp2, resp1/mdc(abs(resp1), resp2), resp2/mdc(abs(resp1), resp2));
                break;
            case '*':
                resp1 = d*f;
                resp2 = e*g;
                printf("%d/%d = %d/%d\n", resp1, resp2, resp1/mdc(resp1, resp2), resp2/mdc(resp1, resp2));
                break;
            case '/':
                resp1 = d*g;
                resp2 = e*f;
                printf("%d/%d = %d/%d\n", resp1, resp2, resp1/mdc(resp1, resp2), resp2/mdc(resp1, resp2));
                break;
        }
    }
    
    return 0;
}
