#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double  x, y, xp, xk, dx, i, R;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "------------------" << endl;
    cout << "|" << setw(3) << "N" << "  |" << setw(5) << "y" << "     |" << endl;
    cout << "------------------" << endl;

    i = 1;
    x = xp;
    while (x <= xk) {
        if (x <= -6)
            y = R;
        else
            if (x > -6 && x <= -R)
                y = (x + R) / (6 - R);
            else
                if (x > -R && x <= 0)
                    y = R - sqrt(pow(R, 2) - pow(x + R, 2));
                else
                    if (x > 0 && x <= R)
                        y = sqrt(pow(R, 2) - pow(x, 2));
                    else
                        y = R - x;



        cout << "|" << setw(3) << setprecision(0) << i << "  |" << setw(7) << setprecision(2) << y << "   |" << endl;

        i++;
        x += dx;
    };
    cout << "------------------" << endl;


    system("pause");
    cin.get();
    return 0;
}