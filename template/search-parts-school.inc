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

        //$shin_checkbox = ($one['cd'] == "1,2") ? '　<br class="pchd"><label><input type="checkbox" ' . $checkbox_check . '  name="kodate_shin" value="1" onclick="if ($(this).prop(\'checked\')) { $(\'.shubetu_kodate\').val(\'1\'); } else { $(\'.shubetu_kodate\').val(\'1,2\'); }" />（新築のみ）</label>' : '';
        $kodate_class = ($one['cd'] == "1" || $one['cd'] == "2") ? ' class="shubetu_kodate"' : '';
        $checked = (preg_match("/" . $Param['shubetu_cd'] . "/", $one['cd']) || (empty($Param['shubetu_cd']) && $one['cd'] == "1")) ? ' checked' : '';
        
        if ($one['cd'] == "1") {
            $checkbox_id = "school_kodate";
        }elseif($one['cd'] == "2"){
            $checkbox_id = "school_chuko";
        } elseif ($one['cd'] == "3") {
            $checkbox_id = "school_tochi";
        } elseif ($one['cd'] == "5") {
            $checkbox_id = "school_mansion";
        } elseif ($one['cd'] == "6") {
            $checkbox_id = "school_other";
        }
        
        //種別CD再設定
//        if($one['cd'] == "1,2" && $checkbox_check != ""){
//            $one['cd'] = "1";
//        }

        if($one['cd'] != "6"){
            echo "<dd><label><input type=\"radio\" class=\"school-sbt\" id=\"" . $checkbox_id . "\"  name=\"shubetu_cd\" value=\"" . $one['cd'] . "\"" . $kodate_class . $checked . " />" . $one['nm'] . "</label>" . $shin_checkbox . "</dd>\n";
        }
    }
    ?>
</dl>
<dl class="area">
    <dt>学校を選択</dt>
    <dd class="school">
        <?php
        $param_es_checked = implode(",", (array) $Param['es_shiku_cd']);
        $param_js_checked = implode(",", (array) $Param['js_shiku_cd']);

        $stb = ($Param['sbt'] != "") ? $Param['sbt'] : ""; //追加 20190306

        foreach ($TownList as $tval) {

            $es_checked = (preg_match("/" . $tval['cd'] . "/", $param_es_checked)) ? ' checked' : '';
            $js_checked = (preg_match("/" . $tval['cd'] . "/", $param_js_checked)) ? ' checked' : '';

            echo "<div class=\"box\">\n";
            echo "<p class=\"block\">" . $tval['nm'] . "</p>\n";
            echo "<ul>\n";
            if ($tval['cnt'] == 0) {
                echo "<li><input type=\"checkbox\" value=\"" . $tval['cd'] . "\" name=\"es_shiku_cd[]\" id=\"es_chk_school_area_" . $tval['cd'] . "\" disabled /><span id=\"es_school_area_" . $tval['cd'] . "\">小学校</span></li>\n";
                echo "<li><input type=\"checkbox\" value=\"" . $tval['cd'] . "\" name=\"js_shiku_cd[]\" id=\"js_chk_school_area_" . $tval['cd'] . "\" disabled /><span id=\"js_school_area_" . $tval['cd'] . "\">中学校</span></li>\n";
            } else {
                echo "<li><input type=\"checkbox\" value=\"" . $tval['cd'] . "\" name=\"es_shiku_cd[]\" id=\"es_chk_school_area_" . $tval['cd'] . "\"" . $es_checked . " /><span id=\"es_school_area_" . $tval['cd'] . "\"><a href=\"/search/school/es/" . $tval['cd'] . "/" . $stb . "/\">小学校</a>（<span class=\"kensu\">" . $tval['cnt'] . "</span>）</span></li>\n";
                echo "<li><input type=\"checkbox\" value=\"" . $tval['cd'] . "\" name=\"js_shiku_cd[]\" id=\"js_chk_school_area_" . $tval['cd'] . "\"" . $js_checked . " /><span id=\"js_school_area_" . $tval['cd'] . "\"><a href=\"/search/school/js/" . $tval['cd'] . "/" . $stb . "/\">中学校</a>（<span class=\"kensu\">" . $tval['cnt'] . "</span>）</span></li>\n";
            }
            echo "</ul>\n";
            echo "<!--/box-->\n";
            echo "</div>\n";
        }
        ?>
    </dd>
</dl>
