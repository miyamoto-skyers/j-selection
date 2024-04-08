<table>
<tr>
<th>エリア<span class="must">必須</span></th>
<td>
<select name="kibo_area1" data-dispname="ご希望エリア" id="kibo_area1ID" siqatrib="kibo_area1" class="chk_input chk_required">
<option value="" class="sp_f_s">▼選択してください</option>
<?php
	foreach ($TownList as $tval) {
		$selected = ($tval['cd'] == $LoginInfo['kibo_area1']) ? " selected" : "";
		echo "<option value=\"".$tval['cd']."\"".$selected.">".$tval['nm']."</option>\n";

	}
?>
</select>
</td>
</tr>
<tr>
<th>物件種別<span class="must">必須</span></th>
<td>
<!--
-->
<input name="kibo_sinchiku" data-dispname="物件種別" data-group="hisu2" siqatrib="kibo_sinchiku" class="chk_input chk_required" type="checkbox" value="1" id="shubetu1" <?php echo ($LoginInfo['kibo_sinchiku'] == 1) ? "checked" : ""; ?> /><label for="shubetu1" class="checkbox">新築一戸建て　</label>
<input name="kibo_kodate_flag" data-dispname="物件種別" data-group="hisu2" siqatrib="kibo_kodate_flag" class="chk_input chk_required" type="checkbox" value="1" id="shubetu2" <?php echo ($LoginInfo['kibo_sinchiku'] != 1 && $LoginInfo['kibo_kodate_flag'] == 1) ? "checked" : ""; ?> /><label for="shubetu2" class="checkbox">一戸建て　</label>
<input name="kibo_tochi_flag" data-dispname="物件種別" data-group="hisu2" siqatrib="kibo_tochi_flag" class="chk_input chk_required" type="checkbox" value="1" id="shubetu3" <?php echo ($LoginInfo['kibo_tochi_flag'] == 1) ? "checked" : ""; ?> /><label for="shubetu3" class="checkbox">土地　　</label>
<input name="kibo_manshon_flag" data-dispname="物件種別" data-group="hisu2" siqatrib="kibo_manshon_flag" class="chk_input chk_required" type="checkbox" value="1" id="shubetu5" <?php echo ($LoginInfo['kibo_manshon_flag'] == 1) ? "checked" : ""; ?> /><label for="shubetu5" class="checkbox">マンション　</label>
<input name="kibo_other_flag" data-dispname="物件種別" data-group="hisu2" siqatrib="kibo_other_flag" class="chk_input chk_required" type="checkbox" value="1" id="shubetu6" <?php echo ($LoginInfo['kibo_other_flag'] == 1) ? "checked" : ""; ?> /><label for="shubetu6" class="checkbox">事業・投資用</label>
</td>
</tr>
<tr>
<th>ご希望条件・詳細</th>
<td><textarea name="kibo_biko" data-dispname="ご希望条件・詳細" rows="6" id="kibo_bikoID" siqatrib="kibo_biko" style="ime-mode:active;width: 99%" class="chk_input" placeholder="内容をご入力してください。"><?php echo $LoginInfo['kibo_biko']; ?></textarea></td>
</tr>
<tr>
<th>弊社担当者<span class="must">必須</span></th>
<td>
<?php
	$shimei_tantou = array("いません", "います", "忘れました");
	$LoginInfo['shimei_tantou_name'] = (!empty($LoginInfo['shimei_tantou_name'])) ? $LoginInfo['shimei_tantou_name'] : "いません";

	$checked = array();
	$checked[0] = ($LoginInfo['shimei_tantou_name'] == $shimei_tantou[0]) ? " checked" : "";
	$checked[1] = (!in_array($LoginInfo['shimei_tantou_name'], $shimei_tantou)) ? " checked" : "";
	$checked[2] = ($LoginInfo['shimei_tantou_name'] == $shimei_tantou[2]) ? " checked" : "";

?>
<ul class="tate">
<li>
<input type="radio" name="shimei_tantou" data-dispname="弊社担当者" id="radio1_1" siqatrib="shimei_tantou" data-group="hisu1" class="chk_input chk_required" value="いません"<?php echo $checked[0]; ?> />
<label for="radio1_1" class="radio">いません。 (初めてお問合せ)</label>
</li>
<li>
<input type="radio" name="shimei_tantou" data-dispname="弊社担当者" id="radio1_2" siqatrib="shimei_tantou" data-group="hisu1" class="chk_input chk_required" value="います"<?php echo $checked[1]; ?> />
<label for="radio1_2" class="radio">います。 担当者名：
<input name="shimei_tantou_name" data-dispname="います。（担当者名： " type="text" id="shimei_tantou_nameID" siqatrib="shimei_tantou_name" value="<?php echo (!in_array($LoginInfo['shimei_tantou_name'], $shimei_tantou)) ? $LoginInfo['shimei_tantou_name'] : ""; ?>" style="ime-mode:active;" class="text chk_input text50" placeholder="" />
</label>
</li>
<li>
<input type="radio" name="shimei_tantou" data-dispname="弊社担当者" id="radio1_3" siqatrib="shimei_tantou" data-group="hisu1" class="chk_input chk_required" value="忘れました"<?php echo $checked[2]; ?> />
<label for="radio1_3" class="radio">忘れました。（以前に問合せをしたことがある）</label>
</li>
</ul>

</td>
</tr>
</table>
