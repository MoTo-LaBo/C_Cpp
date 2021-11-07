#include <stdio.h>

class TestClass {
private:
    int val1_, val2_;
    int addVal_;

public:
    // 1, コンストラクター : classが実行された時に実行される
    TestClass() {
        printf("hoge\n");
    }

    // 2, 引数の違いで呼び出す コンストラクタを変えられる
    // TestClass(int val) {
    //     printf("val = %d\n", val);
    // }

    // // 3, 同じコンストラクタでも,違う挙動を取る事ができる
    // TestClass(float val) {
    //     printf("float val = %f\n", val);
    // }

    // このような記述の方が高速だと言われている
    TestClass(int val1, int val2):
        val1_(val1),
        val2_(val2)
    {
        printf("fuga\n");
    }

    // class は変数も関数も持てる
    void printVals(void) {
        printf("val1 =%d, val2 = %d\n", val1_, val2_);
    }

    void addVals(void) {
        addVal_ = val1_ + val2_;
    }

    void printAddVal(void) {
        printf("addVal = %d\n", addVal_);
    }

};

int main(int argc, char **argv) {

    // 引数によって 1, 2, 3 の呼び出すコンストラクタを変える事ができる
    TestClass test(10, 5);
    // test.printVals();
    test.addVals();
    test.printAddVal();
    return 0;
}
