# C言語　Webots sumilation
1. 環境構築 | Web IDEである　[Gitpod](https://www.gitpod.io/docs/getting-started)　の導入

2. C言語 を使用して webots sumilation

3. Webots 導入

4. Webots による Robots sumilation

## Gitpod
> https://www.gitpod.io/docs/getting-started
### 1. Repository に添付 -> Enter
- browser’s address bar に　->　`gitpod.io/#`

  - 例）
    ```
    gitpod.io/#https://github.com/gitpod-io/website
    ```
    - そうする事で browser 上で 添付した Repository 環境で Gitpod を使用できる

### 2. 実行 file 作成

    # 実行file作成 : compile
    gcc -o <実行file名> file名.c

    # 実行
    ./<実行file名>
- working dirctory で compile & 実行

### 3. code format : .clang-format 作成

    # terminal で実行 : file作成
    clang-format -style=llvm -dump-config > .clang-format

    # clang-format : 変更
    IndentWidth: 4
- 拡張機能 : [clangd](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd) install
- [Clang-Format Style](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)

### 4. debug 拡張追加
- 拡張機能 : [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) install
