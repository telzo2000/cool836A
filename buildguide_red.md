# レッドバージョン　ビルドガイド



**写真**
![IMG_3272](img/IMG_0030.jpg)
![IMG_3268](img/IMG_0029.jpg)
![IMG_3271](img/IMG_0028.jpg)
<br>
<br>
**特徴**
<br>
・30％Alice  layout<br>
・サンドイッチマウント、チルト0〜10度<br>
・PCB、トッププレート、ボトムプレートそれぞれFR4を使用。<br>
・36キー（MXソケットによるキースイッチ交換可能）<br>
<br>

**同封されている部品**
<br>
１　PCB　１枚<br>
２　トッププレート　１枚<br>
３　ボトムプレート１式（４枚）<br>
４　ダイオード　40個（予備４個を含む）<br>
５　タクトスイッチ　１個<br>
６　ネジ（M2 4mm）　　７本<br>
７　ネジ（M2 8mm）　　７本<br>
８　スペーサー（M2 10mm）　７本<br>
９　クッションゴム　４個<br>
１０　MXソケット　40個（予備４個を含む）<br>
<br>

**別途、購入が必要な部品**
<br>
１　キースイッチ　36個<br>
２　キーキャップ　36個 ※１<br>
３　pro micro １個<br>
４　コンスルー（スプリングピンヘッダ）　１組（２個）<br>
※１　キーキャップの構成は、1U×32、1.25U×2、1.5U×1、1.75U×1ですが、全て1Uキーでも構いません。<br>
　　　キーキャップのレジェンド（キーキャップ上面の印字）とキーレイアウトのキーのサイズが一致しません。<br>
　　　レジェンドよりも使い勝手のよいキーレイアウトを優先しています。<br>
　　　<br>
**ファームウェア**
<br>
　「ハンダ付け不要版」では、すでに同封のpro microにファームウェアが書き込まれています。<br>
　このキーボードはQMKというキーボード用のソフトウェアで動作するようにプログラミングしています。<br>
　従来、頒布を目的としていなかったことと、作者が非IT系であることから、自力でファームウェアを作成していません。[Keyboard Firmware builder](https://kbfirmware.com/)を利用して、hexファイルを作成しました。[QMK Configurator](https://config.qmk.fm/#/)にプルリクする等すれば、QMKConfiguratorを使用してキーレイアウトを変更できますが、作者には、その力がありません。有識者の方で出来る方がいらっしゃれば、よろしくお願いします。<br>
　（もし、出来ましたら、ご連絡いただけると、ビルドガイドに、そのことを記載したいと思います）<br>
<br>
追記（令和３年１月16日）<br>
フライングオニオオハシ氏（＠oha_oha_Ohashi）によりqmk_firmwareへの公式マージがされました。そして、[QMK Configurator](https://config.qmk.fm/#/)にてキーレイアウトの変更、Jsonファイルをビルドができるようになりました。フライングオニオオハシ氏、本当にありがとうございました。<br>
<br>
　ここでは、Keyboard Firmware Builderで作成した、デフォルトJsonファイル（cool836default.json）とデフォルトHexファイル（cool836default.hex）を下記のリンク先に置きます。ダウンロードして、QMK Toolboxにて使用してください。QMK Toolboxは下記のリンク先にあります。<br>
　[QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)
<br>
　[デフォルトhexファイル](https://github.com/telzo2000/cool836A/)
<br>
　[デフォルトJsonファイル](https://github.com/telzo2000/cool836A/)
　<br>
　QMK Toolboxの使い方は詳しく書きませんが、デフォルトhexファイルをダウンロードして、「Local File」で選択してください。pro microをPCに接続し、リセットボタンを押して書き込みます。（リセットボタンをダブルクリックしないと書き込めないパターンのものもあります）<br>
　書き込み方法などは[サリチル酸さんの（初心者編）自作キーボードにファームウェアを書き込むの記事](https://salicylic-acid3.hatenablog.com/entry/qmk-configurator)がとても参考になります。他にも有用な記事が多いので、一読することをお勧めします。<br>
　デフォルトキーマップは作者が実際に使用しているもので、ほぼ何不自由なく使えるように工夫しています。チートシートは次のとおりです。<br>
Layer=0<br>
<img width="881" alt="cool836Alayer0" src="https://user-images.githubusercontent.com/67196597/93729150-3f456980-fbfe-11ea-9c2e-4ac80c4ab55f.png">
<br>
Layer=1<br>
<img width="865" alt="cool836Alayer1" src="https://user-images.githubusercontent.com/67196597/93729159-479da480-fbfe-11ea-9d41-8ba2cf8d3dab.png">
<br>
Layer=2<br>
<img width="866" alt="cool836Alayer2" src="https://user-images.githubusercontent.com/67196597/93729165-4c625880-fbfe-11ea-801b-8a2af8366228.png">
<br>
Layer=3<br>
<img width="866" alt="cool836Alayer3" src="https://user-images.githubusercontent.com/67196597/93729175-54ba9380-fbfe-11ea-8ac7-c353c10f7748.png">
<br>
　キーレイアウトの変更をされる場合は、事前に、[デフォルトJsonファイル](https://github.com/telzo2000/cool836A/)をダウンロードしてから、[Keyboard Firmware builder](https://kbfirmware.com/)へアクセスしてください。「Upload」をクリックして、先ほどのデフォルトJsonファイルを選択してください。下の画面になりましたら、「KEYMAP」をクリックしてください。その画面でキーレイアウトの変更ができます。<br>
<img width="1022" alt="kfbscreenshot1" src="https://user-images.githubusercontent.com/67196597/93729617-48373a80-fc00-11ea-9a1d-6b704c776602.png">
<br>
　（「WIRING」「PINS」は絶対に変更しないでください。ここを変更して作成したHexファイルでは正しくキーが入力されなくなります。）変更ができましたら、「SETTING」をクリックしてください。下の画面になりましたら、「Save Configuration」をクリックしてください。変更されたキーレイアウトのJsonファイルがダウンロードされます。次回以降、それを使うことで、変更履歴を意識しながら、最高のキーレイアウトへ到着できると思います。<br>
<img width="847" alt="kfbscreenshot2" src="https://user-images.githubusercontent.com/67196597/93729802-fe028900-fc00-11ea-8f1b-f777f66b585f.png">
<br>
　続いて、「COMPILE」をクリックしてください。下の画面になりましたら、「Download .hex」をクリックしてください。変更されたキーレアウトのHexフィルがダウンロードされます。このHexファイルを前述のQMK Toolboxで使用してください。<br>
<img width="796" alt="kfbscreenshot3" src="https://user-images.githubusercontent.com/67196597/93778286-b01d6d80-fc60-11ea-9c7b-53224d08bf6d.png">
<br>
<br>
**LEDについて**
<br>
　実装できるように、PCB下面に配線はしました。自己責任でお願いします。<br>
 20201226追記：私自身のレッドバージョンに実装してみました。<br>
 
 ![](img/IMG_0272.JPG)
 <br>
 [Keyboard Firmware Builder](https://kbfirmware.com/)で、LEDの処理ができるようになりましたので、それに合わせて、LED対応したファームウェアを作りました。Layer３にLEDのオンオフに関するキーを追加しました。LED対応のJsonファイル（cool836LED.json）とHexファイル（cool836LED.hex）を下記のリンク先に置きます。ダウンロードして、QMK Toolboxにて使用してください。QMK Toolboxは下記のリンク先にあります。<br>
　[QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)
<br>
　[LED対応hexファイル](https://github.com/telzo2000/cool836A/)
<br>
　[LED対応Jsonファイル](https://github.com/telzo2000/cool836A/)
　<br>
 私が実装したものは遊舎工房さんの「 [フルカラーシリアルLEDテープ 6個タイプ](https://yushakobo.jp/shop/a01sl-00/)」を２つ使いました。<br>
 
 Layer=3<br>
 ![](https://github.com/telzo2000/cool836A/blob/master/img/LEDlayer3.png)
<br>
<br>
**組み立て手順**
<br>
　ハンダ付け不要版では、２・３・４・５（ハンダ付け部分）の組み立て作業が済み、動作確認が完了しています。<br>
<br>
１　基板の確認<br>
　組み立ての前に、PCB、トッププレート、ボトムプレート１式の上・下面を確認します。全ての基板表面の右上に「cool836A」と印刷されています。印刷されている面が、上面となります。同じ位置になるように基板を重ねてください。上・下面が違うと、ネジが正しく入りません。<br>
　![基板](img/IMG_0019.JPG)
　<br>
<br>
２　ダイオードのハンダ付け<br>
　ダイオードの足を曲げて取り付けて、ハンダ付けをします。ダイオードの足は、下面から「diode」と印刷された部分の穴に差し込みます。上面に伸びたダイオードの足は切り離してください。ダイオードには極性があります。ダイオードの黒い帯がある側が「diode」の文字の後ろになるようにハンダ付けしてください。ハンダ付けに自信がない場合、フラックスを利用すると、上手にハンダ付けができます。その後、フラックスクリーナーで綺麗に拭き取ることをお勧めします。<br>
![ダイオード](img/IMG_0006.JPG)
![ダイオードハンダ付け](img/IMG_0008.JPG)
![ダイオードハンダ付け２](img/IMG_0010.JPG)
<br>
<br>
３　MXソケットのハンダ付け<br>
　MXソケットをハンダ付けします。ソケットの向きに注意してください。ソケット両側の端子がPCBと接する方に、予備ハンダをしておくと、ハンダ付けが上手くいきます。上手くハンダ付けができない場合、フラックスを多めに塗布して行うと、ハンダがソケットの端子とPCBの端子の間に流れていきます。その後、フラックスクリーナーで綺麗に拭き取ることをお勧めします。<br>
![ソケットハンダ付け](img/IMG_0011.JPG)
![ソケットハンダ付け２](img/IMG_0013.JPG)
　<br>
　<br>
４　タクトスイッチの取り付け<br>
　タクトスイッチをPCB下面の「RESET」の印刷が隠れるように差し込んで、上面からハンダ付けをしてください。ここは上・下面を間違えると、後でトッププレートをつける時に、タクトスイッチが干渉します。<br>
![上面](img/IMG_0014.JPG)
![下面](img/IMG_0015.JPG)
　<br>
　<br>
５　pro microの取り付け<br>
　本製品ではコンスルー（スプリングピンヘッダ）を使用してのpro microの装着を推奨しています。コンスルー（スプリングピンヘッダ）の向きに気をつけて使用してください。画像を参考にして、pro microの向きに注意してください。<br>
![image](img/IMG_0016.JPG)
![image](img/IMG_0017.JPG)
![image](img/IMG_0018.JPG)

　コンスルーを使用しない時（pro micro付属のピンヘッダを使用する時）は、キースイッチの取り付け前に、PCBにピンヘッダのハンダ付けをしてください。キースイッチを取り付けた後では、できません。<br>
　<br>
　<br>
６　キースイッチの取り付け<br>
　最初にキースイッチ５個をトッププレートの５箇所（四隅と一番手前）に差し込みます。一度に全部のキースイッチを取り付けて、その後にPCBにハンダ付けしたMXソケットに差し込むとうまくいかないことが予想されます。５箇所で一度PCBにハンダ付けしたMXソケットに差し込み、残りのキースイッチをトッププレート、PCBの順に差し込んでください。それぞれのキースイッチの足がきちんとMXソケットの基板の穴に差し込まれていることを確認してください。差し込むときに、足が曲がってしまうことがあります。その場合は、ボタンを押しても入力されません。一度キースイッチを外して、足の修正または新しいキースイッチに交換等対処してください。<br>
![image](img/IMG_0022.jpg)
![image](img/IMG_0023.jpg)
![image](img/IMG_0024.jpg)
<br>
<br>
７　トッププレート、スペーサーの取り付け<br>
　トッププレート上面7箇所のネジ穴からM2ネジ4mm（短い方のネジ）を差し込み、スペーサーで固定します。<br>
![image](img/IMG_0025.jpg)
<br>
<br>
８　ボトムプレートの取り付け<br>
　ボトムプレート1式は次の４つパーツで構成されています。<br>
- ボトムプレート大　１枚
- ボトムプレート小　３枚
<br>
　ボトムプレートのネジ穴からM2ネジ8mm（長い方のネジ）を差し込み、トッププレートに装着されているスペーサーで固定します。<br>
　このキーボードは、ボトムプレート小を１〜３枚使用することで、最大10度ぐらいの傾斜を付けることができます。また、ボトムプレート小を使わないと、傾斜のないフラットなキーボードになります。試してみて、最適な角度で使用してください。

![](img/IMG_0026.jpg)
![](img/IMG_0027.jpg)
<br>
その後、お好みでクッションゴムを取り付けてください。<br>
<br>
組み立ての手順は、以上です。<br>
<br>
気に入っていただけたら、幸いです。　<br>

