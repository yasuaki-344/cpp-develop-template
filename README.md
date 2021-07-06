# cpp-develop-template

このプロジェクトはCMakeを利用して以下の内容を実現するためのテンプレートです.

* 外部プロジェクトの取り込みおよび利用設定
* 静的ライブラリの作成
* 単体テストの作成, 実行
* アプリケーションのビルド

## 事前設定

### 必要パッケージ

* gcc (C++11対応)
* cmake
* conan

### conanの設定変更

```shell
conan profile update settings.compiler.libcxx=libstdc++11 default
```

## ビルド方法・単体テストの実行

```shell
conan install -if ./build.conan .
cmake -B ./build.cmake
cmake --build ./build.cmake
```

単体テストを実行する場合は, 上記のコマンドを実行後に次のコマンドを実行します.

```shell
cd ./build.cmake
ctest
```

## ディレクトリ構成

```text
|---- external/ : 外部プロジェクトを取り込むための.cmakeファイルを管理
|---- src/      : アプリケーションまたはライブラリのプロジェクトの作成フォルダ
|    |---- app/        : アプリケーションプロジェクトのサンプル
|    |---- lib/        : 静的ライブラリプロジェクトのサンプル
|    |---- app-for-di/ : fruitを用いて構築されるライブラリを呼び出すアプリケーション
|    |---- di-lib/     : fruitを用いたDIによって構築されるライブラリプロジェクトのサンプル
|    `---- pimpl-lib/  : Pimplイディオムを用いたライブラリプロジェクトのサンプル
`---- test/     : 単体テストプロジェクトの作成フォルダ
     |---- sample-test/    : google testによる単体テストプロジェクトのサンプル
     |---- di-lib-test/    : DIによって構築されるライブラリの単体テストプロジェクトのサンプル
     `---- pimpl-lib-test/ : Pimplイディオムを用いたライブラリの単体テストプロジェクトのサンプル
```
