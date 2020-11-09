//演習4-4 文字リテラルと整数リテラルに対してsizeof演算子を適用した値を表示する
//        プログラムを作成せよ。実行結果に対する考察を行うこと。
//実行結果
// char:1
// int :4
//考察    1文字を表すのに必要な記憶域がchar型とint型では異なり、それぞれ前者は1バイト、
//        後者は4バイト※1必要な為、char型は「1」、int型は「4」が出力されたと思われる。
//        ※1処理系や環境により異なる。実行環境では4。

//最小、最大文字の定義を使用する為。
#include <climits>

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：整数型
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/12/04
//備考　　　　　　：
//============================================================================
int main() {

	//画面に文字リテラルのサイズを表示させる為。
	cout << "char:" << sizeof(char) << "\n";

	//画面に整数リテラルのサイズを表示させる為。
	cout << "int :" << sizeof(int) << "\n";
}