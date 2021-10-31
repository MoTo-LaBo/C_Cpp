#include <stdio.h>

int main(void){

// 出力
printf("Hello word\n");
puts("putsは何もしなくても改行してくれる");

printf("printf はバックスラッシュn を入れないと改行されない\n");

// 入力
int a;
a = 10;

printf("%d\n", a + 1);

int num;
scanf("%d", &num);  // bの中に user から入力された値を入れる
// ここで一度実行が stop

// 値が入力されたら実行される
printf("あなたの入力した値は %d ですね\n", num);  // 入力値を表示


    return 0;
}
