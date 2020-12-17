# cool836A
ブラックバージョンのbuilde guideはこちらです。<br>
https://github.com/telzo2000/cool836A/issues/2
<br>
レッドバージョンのbuilde guideはこちらです。<br>
https://github.com/telzo2000/cool836A/blob/master/buildguide_red.md

# 設計に至るまで（Up to the design）<br>
平成31年度および令和元年度に、「自作キーボード」という語を知りました。<br>
その後、nomu30、Choco60、Caravelle等を購入して実際に作ってみました。<br>
これらはどれもとても素晴らしいキーボードでした。<br>
次にSU120を知り、文系の自分でもなんとか自作キーボードが作れるのではないかと考えるようになりました。<br>
実際、SU120をTALP KEYBOARDさんで購入して、それを使って30%キーボード「My First Mini」を作りました。<br>
なかなかうまくいなかい部分があり、その際にはSU120の作者さんから助言をもらい、
完成に至りました。<br>
この経験を積んで、さらにSU120を使い、Caravelleのあまったスイッチプレートを活用した「Caravellion」を作りました。<br>
「Caravellion」と同時期に、格子配列の30％キーボード「cool635」を作りました。<br>
さらに30％キーボードに、矢印キーや数字キーが欲しいと思い始めて、50％キーボード「cool753」を作りました。<br>
これらはすべてSU120を使って作りました。<br>
ここまで経験すると、ある程度、わかってきたもので、次は何を作ろうかなと思い、
何となく知ったAlice配列という言葉が気になり、多分Alice配列っぽいだろうと考えて作ったのは、
30％キーボードの「cool836A」です。<br>
これは令和２年度の７月に、４連休を利用して一気に作りました。<br>
ただ、レイアウトについては事前に、角度を５〜10の間で試行錯誤しています。<br>
これまでの経験から、ケースはMDF材ですばやく加工することができるようになりました。<br>
ただ、私の技術では、木材で作成すると、やや大きくなってしまいます。<br>
cool635の作成で、kicadの使い方も少しわかってきたので、cool836Aも最初はSU120で作り、
次にkicadでPCBの設計をしました。<br>２度のPCBを発注しました。<br>
１度目は基板部分のみ、２度目は基板、トッププレート、ボトムプレートをまとめたもの。<br>
試作用cool836Aは１度目の基板部分のみに、発注先のミスにより余分に頂いたボトムプレートから成るものです。<br>
頒布用cool836Aは２度目のまとめたものに成るものです。発注したPCBが黒色だったため、通称「ブラックバージョン」としています。<br>
「レッドバージョン」は、MXソケットを採用しました。pro microとの部品干渉から、一部のキースイッチは前後向きを変えました。<br>
PCDの下面にLEDを追加できるよう端子を加えましたが、まだQMKの理解が進んでいないため、私自身は使えません。<br>
発注先の問題より、イエローバージョンの到着に１ヶ月かかりました。仮組みした段階で、複数の課題が見つかりました。<br>
1つはpro microの位置が2mmぐらいの差でコンスルーの足とキースイッチの端が干渉しています。<br>
2つ目は、ケーブルをつなぐ間口が狭かったことです。細いケーブルであれば問題ありませんが、私が普段使っているケーブルだと干渉してしまい刺さりません。<br>
将来の予定としては、イエローバージョンの修正版を発注するつもりです。その際、合わせてレッドバージョンを黒色で発注するつもりです。<br>

# 今後の変更予定（Update Plan)
順不同<br>
☑︎MXソケット採用 Ver.B Date:20201024<br>
□chocoスイッチ版　※pro microの設置場所をPCBの下面から上面に変更か<br>
☑︎LED装着　Ver.B+ Date:20201025<br>
□pro micro→MCU直付<br>
□アクリルのトッププレート、ボトムプレート　※試作PCBの余剰分（３枚）に使用するか。（2020/11/14）<br>
□アクリル密閉型ケース<br>
□ラージ版（仮称cool840A）<br>
□薄型への挑戦（pro microの位置変更）※イエローバージョンとして計画中(2020/11/10)<br>
□iPhone固定できるケースをオプションとして作る（アクリルか？）<br>
□Bluetooth採用※よくわかっていませんが、イエローバージョンまでならば、多分電池を収納するスペースがあるだろうと考えました。思いつきです。青色にして「ブルーバージョン」となるかな。<br><br>
☑︎BLE micro使用時の電池ケース収納部分を追加（2020/11/11）※イエローバージョンで実装済み。<br>


# 発注ガーバーファイル名
試作　gbr　（20200812）<br>
Ver.A gbr20200901　通称「ブラックバージョン」<br>
Ver.B+ gbr20201025　通称「レッドバージョン」<br>
Ver.C+ gbr20201114　通称「イエローバージョン」<br>
