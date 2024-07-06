# atom-echo-with-glassunit-sample

M5Stack Atom Echo with M5Stack GLASSUNIT sample.
(not GLASSUNIT2)

Atom Echo に 旧版の `M5UnitGLASS` を接続してオブジェクトを描画したサンプルです。
`M5Unified.h` と `M5UnitGLASS.h` だけを使用した最低限のサンプルとなっています。

`M5UnitGLASS2` の場合は、たぶん読み込むライブラリを `M5UnitGLASS2.h` にすればいけるのでは（持ってないので未検証）。

`M5UnitGLASS` の display関数を使用して、簡易な顔（スタックチャン）を描画しています。

フリーズしているかどうかの確認もかねて、loop関数の中で、数秒ごとに、目と口が閉じたり空いたりするようにしています。

本当は [M5Stack Avatar](https://github.com/meganetaaan/m5stack-avatar/tree/master) を表示させたかったけど、描画の仕組みが違うっぽい？
自身の技術力不足もありできてない。残念。
