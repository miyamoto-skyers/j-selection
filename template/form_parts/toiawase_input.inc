<table>
<tr>
<th>ご相談内容<span class="must">必須</span></th>
<td>
<?php
	$idx = 1;

	// 問い合わせする対象の物件が1件だけだったら、表示する項目を種別に合わせたものにする
	$toiawase_naiyou_list = $form_cds['toiawase_naiyou'];
	if (count($ObjectList) == 1) { $toiawase_naiyou_list = $form_cds['toiawase_naiyou'.$ObjectList[0]['shubetu_cd']]; }

	foreach ($toiawase_naiyou_list as &$value) {

		echo '<input name="toiawase_naiyou1[]" data-dispname="お問い合わせ内容" data-group="hisu2" siqatrib="toiawase_naiyou1[]" id="checkbox'.$idx.'" class="chk_input chk_required" type="checkbox" value="'.$value[cd].'"/>';
		echo '<label for="checkbox'.$idx.'" class="checkbox">'.$value[nm].'</label><br />';

		$idx++;
	}
?>
</td>
</tr>
<tr>
<th>その他のご相談</th>
<td><textarea name="free_text" data-dispname="お問い合わせ詳細" id="free_textID" siqatrib="free_text" rows="6" style="ime-mode:active;width:99%" class="chk_input" placeholder="内容をご入力してください。"></textarea></td>
</tr>
</table>
