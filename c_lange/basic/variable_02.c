// 変数の詳しい取り扱い
// a b c の中に 10, 11, 12 といった形で色々な数を入れて操作

# include <stdio.h>

int main(void){

int a, b; // a, bを入れるための箱を用意
    a = 1;
    b = 2;
    printf("a = %d, b = %d\n", a, b);

    // a, b を応用する
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); // 1 / 2 = 0.5 int型なので 0  .5 で出力されない

    float af, bf; // float -> %f,  double -> %lf という型を使うと桁を多く取ることが出来る
    af = 1; // 1.00000
    bf = 2; // 2.00000
    printf("af = %f, bf = %f\n", af, bf);
    printf("af / bf = %f\n", af / bf);

    // double型 -> %lf
    double ab, bd;
    ab = 1;
    bd = 2;
    printf("ab = %lf, bd = %lf\n", ab, bd);
    printf("ab / bd = %lf\n", ab / bd);

    // string [a] [b] -> char型 -> %c
    char c1; // 文字列 "一文字"　入れる事ができる変数
    c1 = 'a';
    printf("c1の中には「%c」が入っています\n", c1);

    return 0;
}


