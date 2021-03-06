**写真**
![IMG_3272](https://user-images.githubusercontent.com/67196597/96326151-3c0c9480-1069-11eb-855f-c5d9bd7b7dbc.jpg)
![IMG_3268](https://user-images.githubusercontent.com/67196597/96326156-4464cf80-1069-11eb-9656-12c6ad1fe490.jpg)
![IMG_3271](https://user-images.githubusercontent.com/67196597/96326157-462e9300-1069-11eb-8f2a-3851a0b3ca6e.jpg)

**特徴**
<br>
・Alice配列<br>
・MXスイッチの36キー<br>
・サンドイッチマウント<br>

**同封されている部品**
<br>
１　PCB　１枚<br>
２　トッププレート　１枚<br>
３　ボトムプレート１式（４枚）<br>
４　ダイオード　４０個（予備４個を含む）<br>
５　タクトスイッチ　１個<br>
６　ネジ（M2 4mm）　　７本<br>
７　ネジ（M2 8mm）　　７本<br>
８　スペーサー（M2 10mm）　７本<br>
９　クッションゴム　４個<br>

**別途、購入が必要な部品**
<br>
１　キースイッチ　36個<br>
２　キーキャップ　36個 ※１<br>
３　pro micro １個<br>
４　コンスルー（スプリングピンヘッダ）　１組（２個）<br>
<br>
※１　キーキャップの構成は、1U×32、1.25U×2、1.5U×1、1.75U×1ですが、全て1Uキーでも構いません。<br>
　　　キーキャップのレジェンド（キーキャップ上面の印字）とキーレイアウトのキーのサイズが一致しません。<br>
　　　レジェンドよりも使い勝手のよいキーレイアウトを優先しています。<br>

**ファームウェア**
<br>
　このキーボードはQMKというキーボード用のソフトウェアで動作するようにプログラミングしています。
　従来、頒布を目的としていなかったことと、作者が非IT系であることから、自力でファームウェアを作成していません。
　 [Keyboard Firmware builder](https://kbfirmware.com/)を利用して、hexファイルを作成しました。
　[QMK Configurator](https://config.qmk.fm/#/) にプルリクする等すれば、QMKConfiguratorを使用してキーレイアウトを変更できますが、
　作者には、その力がありません。有識者の方で出来る方がいらっしゃれば、よろしくお願いします。
　（もし、出来ましたら、ご連絡いただけると、ビルドガイドに、そのことを記載したいと思います）
 <br>
　ここでは、Keyboard Firmware Builderで作成した、デフォルトJsonファイル（cool836default.json）とデフォルトHexファイル（cool836default.hex）を下記のリンク先に置きます。ダウンロードして、QMK Toolboxにて使用してください。QMK Toolboxは下記のリンク先にあります。<br>
　[QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)
　[デフォルトhexファイル](https://github.com/telzo2000/cool836A/)
　[デフォルトJsonファイル](https://github.com/telzo2000/cool836A/)
<br>
　QMK Toolboxの使い方は詳しく書きませんが、デフォルトhexファイルをダウンロードして、「Local File」で選択してください。pro microをPCに接続し、リセットボタンを押して書き込みます。（リセットボタンをダブルクリックしないと書き込めないパターンのものもあります）<br>
　書き込み方法などは[サリチル酸さんの（初心者編）自作キーボードにファームウェアを書き込むの記事](https://salicylic-acid3.hatenablog.com/entry/qmk-configurator)がとても参考になります。他にも有用な記事が多いので、一読することをお勧めします。<br>
<br>
　デフォルトキーマップは作者が実際に使用しているもので、ほぼ何不自由なく使えるように工夫しています。<br>
チートシートは次のとおりです。<br>
<br><br>
Layer=0<br>
<img width="881" alt="cool836Alayer0" src="https://user-images.githubusercontent.com/67196597/93729150-3f456980-fbfe-11ea-9c2e-4ac80c4ab55f.png">

Layer=1<br>
<img width="865" alt="cool836Alayer1" src="https://user-images.githubusercontent.com/67196597/93729159-479da480-fbfe-11ea-9d41-8ba2cf8d3dab.png">

Layer=2<br>
<img width="866" alt="cool836Alayer2" src="https://user-images.githubusercontent.com/67196597/93729165-4c625880-fbfe-11ea-801b-8a2af8366228.png">

Layer=3<br>
<img width="866" alt="cool836Alayer3" src="https://user-images.githubusercontent.com/67196597/93729175-54ba9380-fbfe-11ea-8ac7-c353c10f7748.png">

　キーレイアウトの変更をされる場合は、事前に、[デフォルトJsonファイル](https://github.com/telzo2000/cool836A/)をダウンロードしてから、[Keyboard Firmware builder](https://kbfirmware.com/)へアクセスしてください。「Upload」をクリックして、先ほどのデフォルトJsonファイルを選択してください。<br>
下の画面になりましたら、「KEYMAP」をクリックしてください。その画面でキーレイアウトの変更ができます。<br>

<img width="1022" alt="kfbscreenshot1" src="https://user-images.githubusercontent.com/67196597/93729617-48373a80-fc00-11ea-9a1d-6b704c776602.png">
（「WIRING」「PINS」は絶対に変更しないでください。ここを変更して作成したHexファイルでは正しくキーが入力されなくなります。）
変更ができましたら、「SETTING」をクリックしてください。下の画面になりましたら、「Save Configuration」をクリックしてください。変更されたキーレイアウトのJsonファイルがダウンロードされます。次回以降、それを使うことで、変更履歴を意識しながら、最高のキーレイアウトへ到着できると思います。<br>

<img width="847" alt="kfbscreenshot2" src="https://user-images.githubusercontent.com/67196597/93729802-fe028900-fc00-11ea-8f1b-f777f66b585f.png">
続いて、「COMPILE」をクリックしてください。下の画面になりましたら、「Download .hex」をクリックしてください。変更されたキーレアウトのHexフィルがダウンロードされます。このHexファイルを前述のQMK Toolboxで使用してください。<br>
<img width="796" alt="kfbscreenshot3" src="https://user-images.githubusercontent.com/67196597/93778286-b01d6d80-fc60-11ea-9c7b-53224d08bf6d.png">


**組み立て手順**
<br>
１　基板の確認<br>
　組み立ての前に、PCB、トッププレート、ボトムプレート１式の上・下面を確認します。全ての基板表面の右上に「cool836A」と印刷されています。印刷されている面が、上面となります。同じ位置になるように基板を重ねてください。上・下面が違うと、ネジが正しく入りません。<br>
<br>
２　ダイオードのハンダ付け<br>
　ダイオードの足を曲げて取り付けて、ハンダ付けをします。ダイオードの足は、下面から「diode」と印刷された部分の穴に差し込みます。上面に伸びたダイオードの足は切り離してください。ダイオードには極性があります。ダイオードの黒い帯がある側が「diode」の文字の後ろになるようにハンダ付けしてください。<br>
![image](https://user-images.githubusercontent.com/67196597/93668726-7403d480-fac9-11ea-89ca-b2d3153a0221.jpeg)

３　タクトスイッチの取り付け<br>
　タクトスイッチをPCB下面の「RESET」の印刷が隠れるように差し込んで、上面からハンダ付けをしてください。ここは上・下面を間違えると、後でトッププレートをつける時に、タクトスイッチが干渉します。
<br><br>
４　pro microの取り付け<br>
　本製品ではコンスルー（スプリングピンヘッダ）を使用してのpro microの装着を推奨しています。コンスルー（スプリングピンヘッダ）の向きに気をつけて使用してください。画像を参考にして、pro microの向きに注意してください。<br>
![image](https://user-images.githubusercontent.com/67196597/93668744-a4e40980-fac9-11ea-9d90-2277e219f930.jpeg)
　コンスルーを使用しない時（pro micro付属のピンヘッダを使用する時）は、キースイッチの取り付け前に、PCBにピンヘッダのハンダ付けをしてください。キースイッチを取り付けた後では、できません。<br>

５　キースイッチの取り付け<br>
　最初にキースイッチ５個をトッププレートの５箇所（四隅と一番手前）に差し込みます。一度に全部のキースイッチを取り付けて、その後にPCBに差し込むとうまくいかないことが予想されます。５箇所で一度PCBに差し込み、ハンダ付けをしてから、残りのキースイッチをトッププレート、PCBの順に差し込み、ハンダ付けをしてください。半田付けをする前に、それぞれのキースイッチの足がきちんとPCBの基板の穴から出ていることを確認してください。差し込むときに、足が曲がってしまうことがあります。その場合は、一度キースイッチを外して、足の修正または新しいキースイッチに交換等対処してください。<br>
![image](https://user-images.githubusercontent.com/67196597/93668764-bd542400-fac9-11ea-9671-54feb16eb12b.jpeg)
![image](https://user-images.githubusercontent.com/67196597/93668755-b0cfcb80-fac9-11ea-80c0-fa86c909276b.jpeg)
![image](https://user-images.githubusercontent.com/67196597/93668794-f68c9400-fac9-11ea-9251-a72e5a9051d5.jpeg)
![image](https://user-images.githubusercontent.com/67196597/93668789-ed9bc280-fac9-11ea-8674-30f3e14b92c6.jpeg)

６　トッププレート、スペーサーの取り付け<br>
　トッププレート上面7箇所のネジ穴からM2ネジ4mm（短い方のネジ）を差し込み、スペーサーで固定します。<br>
![image](https://user-images.githubusercontent.com/67196597/93777386-aa735800-fc5f-11ea-9b99-b0c5ab849d7c.jpeg)

７　ボトムプレートの取り付け<br>
　ボトムプレート1式は次の４つパーツで構成されています。<br>
　・ボトムプレート大　１枚<br>
　・ボトムプレート小　３枚<br>
　ボトムプレートのネジ穴からM2ネジ8mm（長い方のネジ）を差し込み、トッププレートに装着されているスペーサーで固定します。<br>
　このキーボードは、ボトムプレート小を１〜３枚使用することで、最大10度ぐらいの傾斜を付けることができます。また、ボトムプレート小を使わないと、傾斜のないフラットなキーボードになります。試してみて、最適な角度で使用してください。<br>
![image](https://user-images.githubusercontent.com/67196597/93669049-02795580-facc-11ea-9333-ee7a0ec6aacf.jpeg)
その後、お好みでクッションゴムを取り付けてください。<br>
<br>
組み立ての手順は、以上です。<br>
