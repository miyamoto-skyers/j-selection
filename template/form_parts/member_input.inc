<table>
<tr>
<th>お名前<span class="must">必須</span></th>
<td>
<input name="kokyaku_name" data-dispname="お名前" siqatrib="kokyaku_name" id="kokyaku_nameID" type="text" value="<?php echo $LoginInfo['kokyaku_name']; ?>" style="ime-mode:active;" class="text chk_input chk_required name_box" placeholder="日本　太郎" />
</td>
</tr>
<tr>
<th>ふりがな<span class="must">必須</span></th>
<td><input name="kokyaku_name_kn" data-dispname="ふりがな" siqatrib="kokyaku_name_kn" id="kokyaku_name_knID" type="text" value="<?php echo $LoginInfo['kokyaku_name_kn']; ?>" style="ime-mode:active;" class="text chk_input chk_required name_box" placeholder="にほん　たろう" /></td>
</tr>
<tr>
<th>ご住所</th>
<td>
〒 <input name="zip_code" id="zip_code" siqatrib="zip_code" type="tel" maxlength="7" value="<?php echo $LoginInfo['zip_code']?>" class="text chk_input chk_num text_postal" placeholder="2540014 " />
<input type="button" value="〒から住所を自動入力" onclick="AjaxZip3.zip2addr(mailform.zip_code, '', 'kokyaku_addr1', 'kokyaku_addr1');" class="postal_bt" /><br />
<input type="text" name="kokyaku_addr1" id="kokyaku_addr1" siqatrib="kokyaku_addr1" value="<?php echo $LoginInfo['kokyaku_addr1']?>" style="ime-mode:active;" placeholder="神奈川県平塚市四之宮2-9-25" class="text chk_input text60" /><br />
<span class="notes">(郵便番号自動入力の場合、番地までご入力下さい。)<br />
※資料を郵送する場合に必要となりますので、ご入力をお願いします。</span>
</td>
</tr>
<tr>
<th>電話番号<span class="must">必須</span></th>
<td>
<input type="tel" name="kokyaku_tel1" siqatrib="kokyaku_tel1" id="kokyaku_tel1ID" value="<?php echo $LoginInfo['kokyaku_tel1']?>" data-dispname="電話番号" style="ime-mode:disabled; " placeholder="0463206363 (半角数字)"  maxlength="11" class="text chk_input chk_required chk_tel tel_box" />
<br>
<span class="notes">半角数字で入力、ハイフン不要<br>
※自宅または携帯の電話番号をご入力下さい。</span>
</td>
</tr>
<tr>
<th>メールアドレス<span class="must">必須</span></th>
<td>
<input type="text" name="mail_addr1" siqatrib="mail_addr1" id="mail_addr1ID" value="<?php echo $LoginInfo['mail_addr1']?>" data-dispname="アドレス" style="ime-mode:disabled;" placeholder="example@j-selection.co.jp" class="text chk_input chk_required chk_emal mail_box" /><br>
<span class="notes">※メールアドレスは会員ログインIDとなります。</span>
</td>
</tr>
<tr>
<th>パスワード<span class="must">必須</span></th>
<td>
<input type="text" name="my_page_passwd" value="<?php echo $LoginInfo['my_page_passwd']?>" data-dispname="パスワード" style="ime-mode:disabled;" id="パスワード" class="text chk_input chk_required mail_box" placeholder="半角英数字8桁まで"  /><br>
<span class="notes">※パスワードは会員ログインパスワードとなります。</span>
</td>
</tr>
<!--tr>
<th>リニュアル仲介本部への登録</th>
<td>
<input type="radio" name="toiawase_naiyou" data-dispname="リニュアル仲介本部への登録" id="radio2_1" data-group="hisu1" class="chk_input" value="リニュアル仲介本部への登録を希望する" checked />
<label for="radio2_1" class="radio">希望する</label>
<input type="radio" name="toiawase_naiyou" data-dispname="リニュアル仲介本部への登録" id="radio2_2" data-group="hisu1" class="chk_input" value="リニュアル仲介本部への登録を希望しない" />
<label for="radio2_2" class="radio">希望しない</label>
</td>
</tr-->
<tr>
<th>当社を知ったきっかけ</th>
<td>
<?php
	$idx = 1;

	foreach ($form_cds['what_baibai'] as &$value) {
		$checked = "";

		echo '<input type="checkbox" name="what_baibai[]" data-dispname="当社を知ったきっかけ" id="checkbox_contact_'.$idx.'" data-group="hisu1" class="chk_input chk_required" value="'.$value[cd].'"'.$checked.' />';
		echo '<label for="checkbox_contact_'.$idx.'" class="checkbox">'.$value[nm].'</label>';

		$idx++;
	}
?>
</td>
</tr>

</table>
