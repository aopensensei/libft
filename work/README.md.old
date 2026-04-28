*This project has been created as part of the 42 curriculum by tmaeda*

# Libft

## Description
本ライブラリは、標準Cライブラリ関数の再実装および拡張関数の実装を行ったものである。

## Instructions
### Build
```bash
make # ビルド
make clean # オブジェクトファイル削除
make fclean # 生成物すべて削除
make re # 再ビルド
```

### Usage
```bash
cc main.c -L. -lft -I.
```
または
```bash
cc main.c ./libft.a -I.
```
## Library Description
本ライブラリは以下の3カテゴリで構成される。
- Libc functions
  標準Cライブラリ関数と同等の挙動を再現した基本関数群
- Additional functions
  文字列生成や変換などを行う補助的なユーティリティ関数群
- Linked list
  汎用データ構造である単方向連結リストの操作関数群

## Resources

- man pages
- 42 subject

### AI Usage
- 翻訳、テスト整形、エラー読解、理解確認に使用
- 実装コードの生成には使用していない

## Additional Sections

#### Libc functions

- 文字判定 / 変換
  - ft_isalpha：英字判定
  - ft_isdigit：数字判定
  - ft_isalnum：英数字判定
  - ft_isascii：ASCII判定
  - ft_isprint：表示可能文字判定
  - ft_toupper：小文字から大文字変換
  - ft_tolower：大文字から小文字変換

- 文字列操作
  - ft_strlen：文字列長取得
  - ft_strlcpy：文字列コピー
  - ft_strlcat：文字列連結
  - ft_strchr：文字検索（先頭から）
  - ft_strrchr：文字検索（末尾から）
  - ft_strncmp：文字列比較
  - ft_strnstr：部分文字列検索
  - ft_atoi：文字列から整数へ変換

- メモリ操作
  - ft_memset：メモリ初期化
  - ft_bzero：メモリゼロクリア
  - ft_memcpy：メモリコピー（非重複）
  - ft_memmove：メモリコピー（重複対応）
  - ft_memchr：メモリ検索
  - ft_memcmp：メモリ比較
  - ft_calloc：ゼロ初期化メモリ確保

- メモリ確保 / 複製
  - ft_strdup：文字列複製

#### Additional functions

- 文字列生成 / 加工
  - ft_substr：部分文字列生成
  - ft_strjoin：文字列連結
  - ft_strtrim：文字列トリム
  - ft_split：文字列分割

- 数値から文字列へ変換
  - ft_itoa：整数から文字列へ変換

- 文字列への各文字反復処理
  - ft_striteri：各文字に関数を適用（既存文字列に対して処理）
  - ft_strmapi：各文字に関数を適用（新規文字列を生成）

- 出力先を指定しての出力
  - ft_putchar_fd：文字出力
  - ft_putstr_fd：文字列出力
  - ft_putendl_fd：改行付き文字列出力
  - ft_putnbr_fd：数値出力

#### Linked list

- 生成 / 追加
  - ft_lstnew：ノード生成
  - ft_lstadd_front：先頭追加
  - ft_lstadd_back：末尾追加

- 参照
  - ft_lstsize：サイズ取得
  - ft_lstlast：末尾ノード取得

- 削除
  - ft_lstdelone：単一ノード削除
  - ft_lstclear：リスト全削除

- 反復処理
  - ft_lstiter：各ノードに関数を適用（既存リストに対して処理）
  - ft_lstmap：各ノードに関数を適用（新規リストを生成）
