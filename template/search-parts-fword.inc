<dl class="kind">
<dt>物件の種別を選択して下さい</dt>
<?php
if ($Param['shubetu_cd'] == "3,4") {
    $Param['shubetu_cd'] = "3";
}
    
foreach ($GLOBALS['search_cds']['shubetu_cd'] as $one) {

	//$shin_checkbox = ($one['cd'] == "1,2") ? '　<br class="pchd"><label><input type="checkbox" name="kodate_shin" value="1" onclick="if ($(this).prop(\'checked\')) { $(\'.shubetu_kodate\').val(\'1\'); } else { $(\'.shubetu_kodate\').val(\'1,2\'); }" />（新築のみ）</label>' : '';
	$kodate_class  = ($one['cd'] == "1" || $one['cd'] == "2") ? ' class="shubetu_kodate"' : '';
	$checked       = (preg_match("/".$Param['shubetu_cd']."/", $one['cd']) || (empty($Param['shubetu_cd']) && $one['cd'] == "1")) ? ' checked' : '';

        if($one['cd'] != "6"){
            echo "<dd><label><input type=\"radio\" class=\"fword-sbt\" name=\"shubetu_cd\" value=\"".$one['cd']."\" onclick=\"selectShiku(".$one['cd'].")\"".$kodate_class.$checked." />".$one['nm']."</label>".$shin_checkbox."</dd>\n";
        }
}
?>
</dl>
<dl class="word">
<dt>ご希望の条件を入力して検索ボタンを押して下さい。（例：角地、南道路、町名など）</dt>
<dd><input size="50" class="ipt" name="free_word" id="free_word" type="text" value="<?php $Param['free_word']; ?>" /></dd>
</dl>
