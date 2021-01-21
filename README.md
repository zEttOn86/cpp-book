### 動的ライブラリ

実行に必要な処理の一部を分割して外部ファイルにしておき、実行時に結合することができます。 これはビルド時に依存関係の設定だけを行い、実行時に解決することで実現されます。 この外部ファイルを動的ライブラリといい、 そのファイルをリンクして依存関係を設定することを動的リンクといいます。
```
$ g++ -std=c++11 -shared -o libhoge.so add.o sub.o
```

-shared をつけることで動的ライブラリの生成が行われます。 生成する動的ライブラリのファイル名は -o で指定します。

libhoge.so を動的リンクするには下記コマンドを実行します。

```
g++ main.o libhoge.so
```

動的ライブラリの子依存関係は ldd コマンドで確認できます。
```
ldd a.out
```