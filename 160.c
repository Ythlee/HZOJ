#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    int r, h;
    double ans = 0.0;

    scanf("%d%d", &r, &h);
    double s_circle = pow((double)r, 2.0) * PI / 2.0;
    double s_triangle = pow((double)r * 2.0, 2.0) / 2.0;
    double l_arc = (double)r * PI;
    double l_triangle = (double)r * 2.0 + sqrt(2.0 * pow((double)r * 2.0, 2.0));
    double s_sides = (double)h * (l_arc + l_triangle);
    ans = s_sides + (s_circle + s_triangle) * 2.0;

    printf("%.2lf", ans);

    return 0;
}
