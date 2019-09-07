# IBBoard
アイロンビーズ用ユニバーサル基板

## 特長
5mm間隔の領域と2.54mm間隔の領域がある、アイロンビーズ用のユニバーサル基板です。

近年アイロンビーズと電子工作を組み合わせて楽しむ方が増えています。
5mm間隔のアイロンビーズにLEDを付けて光らせたり、センサーをつけてギミックに使う際、2.54mm間隔等のユニバーサル基板ではずれてしまい困ったので作りました。

左右の隅の列のスルーホールは繋がっており、電源やGND用の列として使うことができます。

## サイズ及び画像

IBBoard_70_50.fzz : 70×50×1mm

<img src="img/IBBoard_70_50mm.jpg" width="320">

IBBoard_40_30.fzz : 40×30×1mm

<img src="img/IBBoard_40_30mm.jpg" width="320">

## 作例

<details>
<summary>目が光る犬</summary>

### 材料
アイロンビーズの犬<br>
IBBoard × 1(写真は40×30mm。アイロンビーズの犬のサイズに合わせよう。)<br>
赤色LED × 1<br>
200Ω抵抗 × 1<br>
CR2032用コイン電池ボックス × 1(電池も準備してね！)<br>
<img src="img/led_1.jpg" width="320">
### はんだ付け
IBBoardに赤色LEDと200Ω抵抗、CR2032用コイン電池ボックスをはんだ付けします。<br>
<img src="img/led_2.jpg" width="320">
<img src="img/led_3.jpg" width="320">
<br><br>IBBoardをアイロンビーズの犬に付け、コイン電池ホルダーに電池を入れたらできあがり！
</details>

<img src="img/led_0.jpg" width="320">

<details>
<summary>クリスマスツリー </summary>

by [@hirowo556](https://twitter.com/hirowo556)

### 材料
アイロンビーズのクリスマスツリー<br>
IBBoard × 1(写真は70×50mm。アイロンビーズのクリスマスツリーのサイズに合わせよう。)<br>
LED × 4(緑・黃・赤・青)<br>
200Ω抵抗 × 2(緑・青用)<br>
1kΩ抵抗 × 2(黃・赤用)<br>
単3×3電池ボックス × 1(電池も準備してね！)<br>
ATTiny85 × 1([このプログラム](demo/tree.ino)を書いてね！)<br>
<img src="img/tree_1.jpg" width="320">

### はんだ付け
[回路図](demo/tree_circuit.pdf)を参考にIBBoardにLEDと抵抗、単3×3電池ボックス、ATTiny85をはんだ付けします。<br>
<img src="img/tree_2.jpg" width="320">
<br><br>LEDとIBBoardでアイロンビーズのクリスマスツリーを挟みながらLEDをはんだ付けして、電池を入れたらできあがり！
<img src="img/tree_3.jpg" width="320">
</details>

<img src="img/tree_0.gif" width="320">
