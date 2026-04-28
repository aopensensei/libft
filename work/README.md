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

### Libc functions

- 文字判定 / 変換
  - ft_isalpha：英字判定  
    - 戻り値：英字なら1、それ以外は0
  - ft_isdigit：数字判定  
    - 戻り値：数字なら1、それ以外は0
  - ft_isalnum：英数字判定  
    - 戻り値：英数字なら1、それ以外は0
  - ft_isascii：ASCII判定  
    - 戻り値：0〜127なら1、それ以外は0
  - ft_isprint：表示可能文字判定  
    - 戻り値：表示可能文字なら1、それ以外は0
  - ft_toupper：小文字から大文字変換  
    - 戻り値：変換後の文字（該当しない場合はそのまま）
  - ft_tolower：大文字から小文字変換  
    - 戻り値：変換後の文字（該当しない場合はそのまま）

- 文字列操作
  - ft_strlen：文字列長取得  
    - 戻り値：文字列長（終端'\0'を除く）
  - ft_strlcpy：文字列コピー（size - 1までコピーし、終端保証）  
    - 戻り値：srcの長さ
    - 備考：
      - 戻り値がsize以上の場合、切り詰めが発生している
      - sizeが0の場合、コピーは行われず、終端書き込みもない
  - ft_strlcat：文字列連結
    - 戻り値：連結しようとした文字列の長さ（size内で確認できたdst長 + src長）
    - 備考：
      - 戻り値がsize以上の場合、切り詰めが発生している
      - dstがsize以内にNULL終端していない場合、コピーは行われない
  - ft_strchr：文字検索（先頭から）  
    - 戻り値：見つかった位置へのポインタ、見つからなければNULL
  - ft_strrchr：文字検索（末尾から）  
    - 戻り値：見つかった位置へのポインタ、見つからなければNULL
  - ft_strncmp：文字列比較  
    - 戻り値：最初に異なる文字をunsigned charとして比較した差、同一なら0
  - ft_strnstr：部分文字列検索  
    - 戻り値：見つかった位置へのポインタ、見つからなければNULL
    - 備考：needleが空文字列の場合はhaystackを返す
  - ft_atoi：文字列から整数へ変換  
    - 戻り値：変換されたint値
    - 備考：オーバーフロー時の挙動は未定義

- メモリ操作
  - ft_memset：メモリ初期化  
    - 戻り値：dstポインタ
  - ft_bzero：メモリゼロクリア  
    - 戻り値：なし
  - ft_memcpy：メモリコピー（非重複）  
    - 戻り値：dstポインタ
    - 備考：領域が重複する場合の動作は未定義
  - ft_memmove：メモリコピー（重複対応）  
    - 戻り値：dstポインタ
    - 備考：領域が重複しても安全にコピーされる
  - ft_memchr：メモリ検索  
    - 戻り値：見つかった位置へのポインタ、見つからなければNULL
  - ft_memcmp：メモリ比較  
    - 戻り値：最初に異なるバイトをunsigned charとして比較した差、同一なら0
  - ft_calloc：ゼロ初期化メモリ確保  
    - 戻り値：確保されたメモリ、失敗時はNULL

- メモリ確保 / 複製
  - ft_strdup：文字列複製  
    - 戻り値：複製された文字列、失敗時はNULL

#### Additional functions

- 文字列生成 / 加工
  - ft_substr：部分文字列生成  
    - 戻り値：生成された文字列、失敗時はNULL
    - 備考：startが文字列長以上の場合は空文字列を返す
  - ft_strjoin：文字列連結  
    - 戻り値：生成された文字列、失敗時はNULL
  - ft_strtrim：文字列トリム  
    - 戻り値：生成された文字列、失敗時はNULL
  - ft_split：文字列分割  
    - 戻り値：文字列配列、失敗時はNULL
    - 備考：連続する区切り文字は無視される（空要素は生成されない）

- 数値から文字列へ変換
  - ft_itoa：整数から文字列へ変換  
    - 戻り値：生成された文字列、失敗時はNULL

- 文字列への各文字反復処理
  - ft_striteri：各文字に関数を適用（既存文字列に対して処理）  
    - 戻り値：なし
  - ft_strmapi：各文字に関数を適用（新規文字列を生成）  
    - 戻り値：生成された文字列、失敗時はNULL

- 出力先を指定しての出力
  - ft_putchar_fd：文字出力  
    - 戻り値：なし
  - ft_putstr_fd：文字列出力  
    - 戻り値：なし
  - ft_putendl_fd：改行付き文字列出力  
    - 戻り値：なし
  - ft_putnbr_fd：数値出力  
    - 戻り値：なし

#### Linked list

- 生成 / 追加
  - ft_lstnew：ノード生成  
    - 戻り値：新規ノード、失敗時はNULL
  - ft_lstadd_front：先頭追加  
    - 戻り値：なし
  - ft_lstadd_back：末尾追加  
    - 戻り値：なし

- 参照
  - ft_lstsize：サイズ取得  
    - 戻り値：ノード数
  - ft_lstlast：末尾ノード取得  
    - 戻り値：末尾ノードへのポインタ

- 削除
  - ft_lstdelone：単一ノード削除  
    - 戻り値：なし
  - ft_lstclear：リスト全削除  
    - 戻り値：なし

- 反復処理
  - ft_lstiter：各ノードに関数を適用（既存リストに対して処理）  
    - 戻り値：なし
  - ft_lstmap：各ノードに関数を適用（新規リストを生成）  
    - 戻り値：新規リスト、失敗時はNULL
