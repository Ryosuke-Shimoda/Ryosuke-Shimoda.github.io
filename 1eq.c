#include <stdio.h>

int main() {
    float a, b, x;

    printf("1次方程式 ax + b = 0 の解を求めます。\n");
    printf("aの値を入力してください：");
    scanf("%f", &a);
    printf("bの値を入力してください：");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0) {
            printf("この方程式はどんなxに対しても成り立ちます。\n");
        } else {
            printf("この方程式には解がありません。\n");
        }
    } else {
        x = -b / a;
        printf("この方程式の解はx = %fです。\n", x);
    }

    return 0;
}
