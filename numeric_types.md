# C 言語数値型

## 整数型
- `int` - 基本整数型 (通常 32bit: -2,147,483,648 〜 2,147,483,647)
- `short` - 小整数 (16bit: -32,768 〜 32,767)
- `long` - 大整数 (32/64bit環境依存)
- `long long` - 超大整数 (64bit: 約±9京)
- `char` - 文字/小整数 (8bit: -128 〜 127)

## 符号なし整数
- `unsigned int` - 符号なし (0 〜 4,294,967,295)
- `unsigned short` - (0 〜 65,535)
- `unsigned long` - (環境依存)
- `unsigned long long` - (0 〜 約1800京)
- `unsigned char` - (0 〜 255)

## 浮動小数点
- `float` - 単精度 (32bit: 約7桁精度)
- `double` - 倍精度 (64bit: 約15桁精度)
- `long double` - 拡張精度 (環境依存)

## サイズ保証型 (stdint.h)
- `int8_t`, `int16_t`, `int32_t`, `int64_t` - 固定サイズ符号付き
- `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t` - 固定サイズ符号なし
- `size_t` - サイズ/インデックス用 (符号なし)
- `ptrdiff_t` - ポインタ差分用 (符号付き)

## 使い分けガイド

### int を使う場合
- 一般的な計算・カウンタ
- 配列インデックス (小規模)
- 関数の戻り値
- -2億〜2億で十分な範囲

### double を使う場合
- 小数点が必要な計算全般
- 科学計算・統計
- 座標・角度
- お金の計算 (精度重要)

### float を使う場合
- メモリ節約が必要
- 大量データ (3Dグラフィックス)
- 精度7桁で十分な場合
- GPUでの計算

### long long を使う場合
- ファイルサイズ (GB単位)
- タイムスタンプ (ミリ秒単位)
- 大きな ID 値
- int では溢れる計算

### unsigned を使う場合
- 負の値が論理的にない (年齢、サイズ)
- ビット演算
- フラグ管理
- より大きな正の範囲が必要

### char を使う場合
- 文字処理
- 小さい数値 (-128〜127)
- メモリ節約が重要
- バイトデータ処理

### size_t を使う場合
- malloc/sizeof の結果
- 配列サイズ・長さ
- ループカウンタ (大規模)
- 標準ライブラリとの互換性

## よく使う例
```c
// 一般的な計算
int count = 0;
int result = a + b;

// 小数点計算
double price = 19.99;
double average = sum / count;

// 大きな値
long long fileSize = 5000000000LL;  // 5GB
unsigned long long id = 18446744073709551615ULL;

// メモリ関連
size_t bufferSize = strlen(str);
void* ptr = malloc(bufferSize);

// ビット演算
unsigned int flags = 0x00FF;
flags |= FLAG_ENABLED;
```