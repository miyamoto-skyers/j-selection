<?php
$ranknum = 1; // ランキングの順位
$masknum = 1; // 会員専用マスク画像は1～3をループして表示

foreach ($ObjectList as &$value) {

    $obi_title = ($value['shubetu_cd'] == 5 || $value['shubetu_cd'] == 6) ? $value['object_name'] : $value['shozaichi'];

    if ($value['shubetu_cd'] == 3 || $value['shubetu_cd'] == 4) {
        if ($value['object_name'] != "") {
            $obi_title = $value['object_name'];
        } else {
            $obi_title = $value['shozaichi'];
        }
    }

    $shubetu_name = ($value["shubetu_cd"] == 3) ? "条件付き土地" : $value['shubetu_name'];

    $obi_price = "";
    if (($value['koukai_flag'] == "4" && !$is_login) || number_format($value['price_from']) == "0") {
        $obi_price = "<span>未定</span>";
    } else if ($value['koukai_flag'] == "3") {
        $obi_price = "<span>成約御礼</span>";
    } else {
        $obi_price = "<span>" . number_format($value['price_from']) . "</span> 万円" . (($value['price_to'] != "") ? " ～ <span>" . number_format($value['price_to']) . "</span> 万円" : "") . "<i>" . (($value['tax_kbn'] == "1") ? "（税込み）" : "") . "</i>";
    }

    $obi_comment = preg_replace('/(?:\n|\r|\r\n)/', '', $value['tanto_comment']);
    $obi_comment = mb_substr($obi_comment, 0, 80) . ((mb_strlen($value['tanto_comment']) > 80) ? "..." : "");

    $ranking_css = ($ranknum <= 3) ? "rank" . $ranknum : "rank_other";


    if (($value['koukai_flag'] == "2" || $value['koukai_flag'] == "4") && !$is_login) {  // (if 会員専用)
        ?>
        <li class="memberbox">
            <div class="checkbox">&nbsp;</div>
            <p class="title">【<?php echo $shubetu_name; ?>】<?php echo $obi_title; ?></p>
            <div class="photo sphd">
                <img src="/image/list_club_icon.jpg" alt="センチュリークラブ 会員限定">
                <!--/photo-->
            </div>
            <div class="outline">
                <ul class="icon">
                    <?php if ($value['newf'] == 1) { ?><li class="new">NEW</li><?php } ?>
                    <?php if ($value['osusume_flag'] == 1) { ?><li class="recommend">おすすめ</li><?php } ?>
                    <?php if ($value['pdownf'] == 1) { ?><li class="revision">価格改訂</li><?php } ?>
                    <?php if ($value['openf'] == 1 || $value['openf2'] == 1 || $value['openf3'] == 1) { ?><li class="open">販売会</li><?php } ?>
                </ul>
                <p class="name">【<?php echo $shubetu_name; ?>】<?php echo $obi_title; ?></p>
                <p class="add"><?php echo $value['shozaichi']; ?></p>
                <p class="access"><?php echo $value['rosen_name1']; ?><?php echo $value['eki_name1']; ?>駅　<?php echo $value['traffic1']; ?></p>
                <p class="kakaku"><?php echo $obi_price; ?></p>
                <!--/outline-->
            </div>
            <div class="mask"><a href="/merit/"><img src="/image/list_mask<?php echo $masknum; ?>.jpg"></a>
                <p>すでに会員登録がお済みの方は<a href="/login/">ログイン</a>をして閲覧してください</p>
            </div>
            <!--/memberbox-->
        </li>
        <?php
        // 会員専用マスク画像は1～3をループして表示
        if ($masknum == 3) {
            $masknum = 1;
        } else {
            $masknum++;
        }
    } else { // (else 会員専用)
        ?>
        <li class="listbox">
            <div class="checkbox">
                <?php if ($value['koukai_flag'] != 3) { ?><label class="checkbox"><input name="regist_cds" type="checkbox" value="<?php echo $value['regist_cd']; ?>" class="regist_cds" /></label><?php } ?>
            </div>
            <a href="/detail/<?php echo $value['shubetu_cd']; ?>/<?php echo $value['regist_cd']; ?>/">
                <?php if ($Param['stype'] == "ranking") { ?><div class="mark <?php echo $ranking_css; ?>">RANK<span><?php echo $ranknum; ?></span></div><?php } ?>
                <p class="title">【<?php echo $shubetu_name; ?>】<?php echo $obi_title; ?></p>
                <div class="photo">
                    <dl>
                        <dt><img src="<?php echo ($value['image_file1'] != "") ? $value['image_file1'] : "/image/NO_PHOTO.jpg"; ?>" alt="<?php echo $obi_title; ?>"></dt>
                        <?php if (!empty($value['image_file2'])) { ?><dd><img src="<?php echo $value['image_file2']; ?>" alt="<?php echo $obi_title; ?>"></dd><?php } ?>
                        <?php if (!empty($value['image_file3'])) { ?><dd><img src="<?php echo $value['image_file3']; ?>" alt="<?php echo $obi_title; ?>"></dd><?php } ?>
                        <?php if (!empty($value['image_file4'])) { ?><dd><img src="<?php echo $value['image_file4']; ?>" alt="<?php echo $obi_title; ?>"></dd><?php } ?>
                    </dl>
                    <!--/photo-->
                </div>
                <div class="outline heightLine">
                    <ul class="icon">
                        <?php if ($value['newf'] == 1) { ?><li class="new">NEW</li><?php } ?>
                        <?php if ($value['osusume_flag'] == 1) { ?><li class="recommend">おすすめ</li><?php } ?>
                        <?php if ($value['pdownf'] == 1) { ?><li class="revision">価格改訂</li><?php } ?>
                        <?php if ($value['openf'] == 1 || $value['openf2'] == 1 || $value['openf3'] == 1) { ?><li class="open">販売会</li><?php } ?>
                    </ul>
                    <p class="name">【<?php echo $shubetu_name; ?>】<?php echo $obi_title; ?></p>
                    <p class="add"><?php echo $value['shozaichi']; ?></p>
                    <p class="access"><?php echo $value['rosen_name1']; ?><?php echo $value['eki_name1']; ?>駅　<?php echo $value['traffic1']; ?></p>
                    <p class="kakaku"><?php echo $obi_price; ?></p>
                    <div class="comment">
                        <p><?php echo $obi_comment; ?></p>
                        <div class="staff"><img src="<?php echo ($value['staff_img'] != "") ? $value['staff_img'] : "/template/images/list_staff.jpg"; ?>"></div>
                        <!--/comment-->
                    </div>
                    <!--/outline-->
                </div>
                <div class="outline2 heightLine">
                    <table>
                        <?php
                        if ($value['shubetu_cd'] == "1" || $value['shubetu_cd'] == "2") {
                            ?>
                            <tr><th>土地面積</th><td><?php echo $value['land_area_from']; ?><?php echo ($value['land_area_to'] != "") ? "～" . $value['land_area_to'] . "m&sup2;" : ""; ?></td></tr>
                            <tr><th>建物面積</th><td><?php echo $value['bld_area_from']; ?><?php echo ($value['bld_area_to'] != "") ? "～" . $value['bld_area_to'] . "m&sup2;" : ""; ?></td></tr>
                            <tr><th>間取り</th><td><?php echo $value['layout']; ?></td></tr>
                            <tr><th>築年</th><td><?php echo $value['chikunen']; ?></td></tr>
                            <?php
                        } else if ($value['shubetu_cd'] == "3" || $value['shubetu_cd'] == "4") {
                            ?>
                            <tr>
                            <tr><th>土地面積</th><td><?php echo $value['land_area_from']; ?><?php echo ($value['land_area_to'] != "") ? "～" . $value['land_area_to'] . "m&sup2;" : ""; ?></td></tr>
                            <tr><th>建ぺい率/容積率</th><td><?php echo str_replace("％％", "％", $value['kenpei_ritu1']); ?>／<?php echo str_replace("％％", "％", $value['yoseki_ritu1']); ?></td></tr>
                            <tr><th>土地権利</th><td><?php echo $value['land_right']; ?></td></tr>
                            <?php
                        } else if ($value['shubetu_cd'] == "5") {
                            ?>
                            <tr><th>専有面積</th><td><?php echo substr($value['senyu_area'], 0, strlen($value['senyu_area']) - 7); ?></td></tr>
                            <tr><th>間取り</th><td><?php echo $value['layout']; ?></td></tr>
                            <tr><th>築年</th><td><?php echo $value['chikunen']; ?></td></tr>
                            <tr><th>所在階/階数</th><td><?php echo $value['floor_num']; ?>階/<?php echo $value['floor_all']; ?>階建</td></tr>
                            <?php
                        } else if ($value['shubetu_cd'] == "6") {
                            ?>
                            <tr><th>土地面積</th><td><?php echo $value['land_area_from']; ?><?php echo ($value['land_area_to'] != "") ? "～" . $value['land_area_to'] . "m&sup2;" : ""; ?></td></tr>
                            <tr><th>建物面積</th><td><?php echo $value['bld_area_from']; ?><?php echo ($value['bld_area_to'] != "") ? "～" . $value['bld_area_to'] . "m&sup2;" : ""; ?></td></tr>
                            <tr><th>間取り</th><td><?php echo $value['layout']; ?></td></tr>
                            <tr><th>利回り</th><td><?php echo $value['rimawari']; ?></td></tr>
                            <?php
                        }
                        ?>
                    </table>
                    <div class="button">物件詳細はこちら</div>
                    <!--/outline2-->
                </div>
            </a>
            <!--/listbox-->
        </li>
        <?php
    } // (end if 会員専用)

    $ranknum++;
} // (end foreach)
?>
