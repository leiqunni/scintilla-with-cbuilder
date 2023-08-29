//   DLL でランタイム ライブラリの静的バージョンを使用する場合の
//   DLL メモリ管理に関する重要なメモ:
//
//   パラメータまたは関数結果として String オブジェクト (またはネストした
//   String が含まれている構造体やクラス) を渡す関数を DLL でエクスポートする
//   場合は、DLL プロジェクトにもその DLL を使用する他のあらゆるプロジェクトにも
//   ライブラリ MEMMGR.LIB を追加する必要があります。また、その DLL を使用する
//   他のプロジェクトで、DLL からエクスポートされる TObject 派生でない任意の
//   クラスに対する new 演算または delete 演算を実行する場合も、MEMMGR.LIB を
//   使用する必要があります。プロジェクトに MEMMGR.LIB を追加すると、DLL とその
//   呼び出し元の EXE がメモリ マネージャとして BORLNDMM.DLL を使用するように
//   なります。これらの場合、BORLNDMM.DLL ファイルを作成対象の DLL と一緒に配置
//   しなければなりません。
//
//   BORLNDMM.DLL を使用しないようにするには、"char *" 型または 
//   ShortString 型のパラメータを使って文字列情報を渡します。
//
//   DLL で RTL の動的バージョンを使用する場合、MEMMGR.LIB は暗黙に
//   追加されるため、明示的に追加する必要はありません。

#pragma hdrstop
#pragma argsused

extern "C" int _libmain(unsigned long reason)
{
	return 1;
}

