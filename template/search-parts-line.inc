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

        //$shin_checkbox = ($one['cd'] == "1,2") ? '　<br class="pchd"><label><input type="checkbox" ' . $checkbox_check . ' name="kodate_shin" value="1" onclick="if ($(this).prop(\'checked\')) { $(\'.shubetu_kodate\').val(\'1\'); } else { $(\'.shubetu_kodate\').val(\'1,2\'); }" />（新築のみ）</label>' : '';
        $kodate_class = ($one['cd'] == "1" || $one['cd'] == "2") ? ' class="shubetu_kodate"' : '';
        $checked = (preg_match("/" . $Param['shubetu_cd'] . "/", $one['cd']) || (empty($Param['shubetu_cd']) && $one['cd'] == "1")) ? ' checked' : '';
        
        if($one['cd'] == "1"){
            $checkbox_id = "line_kodate";
        }elseif($one['cd'] == "2"){
            $checkbox_id = "line_chuko";
        }elseif($one['cd'] == "3"){
            $checkbox_id = "line_tochi";
        }elseif($one['cd'] == "5"){
            $checkbox_id = "line_mansion";
        }elseif($one['cd'] == "6"){
            $checkbox_id = "line_other";
        }
        
        //種別CD再設定
//        if($one['cd'] == "1,2" && $checkbox_check != ""){
//            $one['cd'] = "1";
//        }

        if($one['cd'] != "6"){
            echo "<dd><label><input type=\"radio\" class=\"rosen-sbt\" id=\"" . $checkbox_id . "\" name=\"shubetu_cd\" value=\"" . $one['cd'] . "\"" . $kodate_class . $checked . " />" . $one['nm'] . "</label>" . $shin_checkbox . "</dd>\n";
        }
    }
    ?>
</dl>
<dl class="area">
    <dt>沿線・駅を選択</dt>
    <dd class="rosen" style="width: auto;">
        <ul>
            <?php
            foreach ($RosenList as $kval) {
//		echo "<li><a href=\"#line".$kval['cd']."\">".$kval['nm']."（".$kval['cnt']."）</a></li>\n";
                echo "<li><a href=\"#line" . $kval['cd'] . "\">" . $kval['nm'] . "</a></li>\n";
            }
            ?>
        </ul>
    </dd>
    <dd class="station">
        <?php
        $param_line_checked = implode(",", (array) $Param['eki_cd']);

        foreach ($RosenList as $kval) {

            echo "<a name=\"line" . $kval['cd'] . "\"></a>\n";
            echo "<p class=\"line\">" . $kval['nm'] . "</p>\n";
            echo "<ul>\n";

            $stb = ($Param['shubetu_cd'] != "") ? $Param['shubetu_cd'] : ""; //追加 20190304

            foreach ($EkiList as $tval) {

                if ($kval['rosen_cd'] != $tval['rosen_cd']) {
                    continue;
                }

                $checked = (preg_match("/" . $tval['cd'] . "/", $param_line_checked)) ? ' checked' : '';

                if ($tval['cnt'] == 0) {
                    echo "<li><input type=\"checkbox\" name=\"eki_cd[]\" id=\"chk_eki_" . $tval['rosen_cd'] . $tval['cd'] . "\" value=\"" . $tval['cd'] . "\" disabled><span id=\"eki_" . $tval['rosen_cd'] . $tval['cd'] . "\">" . $tval['nm'] . "</span></li>\n";
                } else {
                    echo "<li><input type=\"checkbox\" name=\"eki_cd[]\" id=\"chk_eki_" . $tval['rosen_cd'] . $tval['cd'] . "\" value=\"" . $tval['cd'] . "\"" . $checked . "><span id=\"eki_" . $tval['rosen_cd'] . $tval['cd'] . "\"><a href=\"/list/line/" . $kval['rosen_cd'] . "/" . $tval['cd'] . "/" . $stb . "/\">" . $tval['nm'] . "</a>（<span class=\"kensu\">" . $tval['cnt'] . "</span>）</span></li>\n";
                }
            }

            echo "</ul>\n";
        }
        ?>
    </dd>
</dl>
