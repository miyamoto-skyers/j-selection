<dl class="kind">
    <dt>物件の種別を選択して下さい</dt>
    <?php
    if ($Param['shubetu_cd'] == "3,4") {
        $Param['shubetu_cd'] = "3";
    }
    $shubetu_list = explode(",", $Param['shubetu_cd']);

//    $checkbox_check = "";
//    if ($inc_file != "search.inc") {
//        if (!in_array("2", $shubetu_list)) {
//            $checkbox_check = "checked";
//        }
//    }

    foreach ($GLOBALS['search_cds']['shubetu_cd'] as $one) {

        //$shin_checkbox = ($one['cd'] == "1,2") ? '　<br class="pchd"><label><input type="checkbox" ' . $checkbox_check . ' name="kodate_shin" value="1" id="kodate_shin" onclick="if ($(this).prop(\'checked\')) { $(\'.shubetu_kodate\').val(\'1\'); } else { $(\'.shubetu_kodate\').val(\'1,2\'); }" />（新築のみ）</label>' : '';
        $kodate_class = ($one['cd'] == "1" || $one['cd'] == "2") ? ' class="shubetu_kodate"' : '';
        $checked = (preg_match("/" . $Param['shubetu_cd'] . "/", $one['cd']) || (empty($Param['shubetu_cd']) && $one['cd'] == "1")) ? ' checked' : '';
        
        if($one['cd'] == "1"){
            $checkbox_id = "area_kodate";
        }elseif($one['cd'] == "2"){
            $checkbox_id = "area_chuko";
        }elseif($one['cd'] == "3"){
            $checkbox_id = "area_tochi";
        }elseif($one['cd'] == "5"){
            $checkbox_id = "area_mansion";
        }elseif($one['cd'] == "6"){
            $checkbox_id = "area_other";
        }
        
        //種別CD再設定
//        if($one['cd'] == "1,2" && $checkbox_check != ""){
//            $one['cd'] = "1";
//        }
        
        if($one['cd'] != "6"){
            echo "<dd><label><input type=\"radio\" class=\"area-sbt\" id=\"" . $checkbox_id . "\" name=\"shubetu_cd\" value=\"" . $one['cd'] . "\"" . $kodate_class . $checked . " />" . $one['nm'] . "</label>" . $shin_checkbox . "</dd>\n";
        }
    }
    ?>
</dl>
<dl class="area">
    <dt>エリアを選択して下さい</dt>
    <?php
    $param_area_checked = implode(",", (array) $Param['shiku_cd']);

    $sbt = ($Param['shubetu_cd'] != "") ? $Param['shubetu_cd'] : ""; //追加 20190306
    
    foreach ($TownList as $tval) {

        $checked = (preg_match("/" . $tval['cd'] . "/", $param_area_checked)) ? ' checked' : '';

        if ($tval['cnt'] == 0) {
            echo "<dd><input type=\"checkbox\" name=\"shiku_cd[]\" id=\"chk_shiku_" . $tval['cd'] . "\" value=\"" . $tval['cd'] . "\" disabled /><span id=\"shiku_" . $tval['cd'] . "\">" . $tval['nm'] . "</span></dd>\n";
        } else {
            echo "<dd><input type=\"checkbox\" name=\"shiku_cd[]\" id=\"chk_shiku_" . $tval['cd'] . "\" value=\"" . $tval['cd'] . "\"" . $checked . "><span id=\"shiku_" . $tval['cd'] . "\"><a href=\"/list/area/" . $tval['cd'] . "/" . $sbt . "/\">" . $tval['nm'] . "</a>（<span class=\"kensu\">" . $tval['cnt'] . "</span>）</span></dd>\n";
        }
    }
    ?>
</dl>
