<?php
$obj_title = ($ObjData['shubetu_cd'] != 5) ? $ObjData['shubetu_name'] : $ObjData['object_name'];
$shubetu_name = $ObjData['shubetu_name'];
if($ObjData['shubetu_cd'] == 3 || $ObjData['shubetu_cd'] == 4){
    if($ObjData['shubetu_cd'] == 3){
        $obj_title = "条件付き土地";
        $shubetu_name = "条件付き土地";
    }
}
?>
<!DOCTYPE HTML>
<html>
<head>
<!-- Google Tag Manager -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-NKFL2BN');</script>
<!-- End Google Tag Manager -->
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width" />
<title>【<?php echo $obj_title; ?>】<?php echo $ObjData['shozaichi'].$ObjData['chiban']; ?>｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="【<?php echo $shubetu_name; ?>】<?php echo $ObjData['shozaichi'].$ObjData['chiban']; ?>の物件詳細ページ" />
<meta name="Keywords" content="<?php echo $ObjData['shozaichi'].$ObjData['chiban']; ?>,<?php echo $shubetu_name; ?>,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />
<link rel="stylesheet" href="/css/style.css" />
<link rel="stylesheet" href="/css/detail.css" />
<link href="//use.fontawesome.com/releases/v5.0.6/css/all.css" rel="stylesheet">
<!--&#91;if lt IE 9&#93;>
<script src="//cdn.jsdelivr.net/html5shiv/3.7.2/html5shiv.min.js"></script>
<script src="//cdnjs.cloudflare.com/ajax/libs/respond.js/1.4.2/respond.min.js"></script>
<!&#91;endif&#93;-->
<script src="//code.jquery.com/jquery-latest.js"></script>
<script src="/js/common.js"></script>
<script type="text/javascript" src="//webfont.fontplus.jp/accessor/script/fontplus.js?KxqpanDaumc%3D&box=~8PqL6Bf2q8%3D&aa=1" charset="utf-8"></script>
<!---------------------
　スマホナビゲーション
----------------------->
<script type="text/javascript" src="/js/jquery.meanmenu.js"></script>
<link href="/css/meanmenu.css" rel="stylesheet" type="text/css">
<script>
(function($){
	$(function(){	
		$('#spheader').meanmenu({
			meanMenuClose: "x",
			meanMenuCloseSize: "18px",
			meanMenuOpen: "<span /><span /><span />",
			meanRevealPosition: "right",
			meanRevealColour: "",
			meanScreenWidth: "480"
		});
	});	
})(jQuery);
</script>
<!---------------------
　サムネイルスライダー・ポップアップ
----------------------->
<link rel="stylesheet" href="/css/slick-theme.css">
<link rel="stylesheet" href="/css/slick.css"> 
<link rel="stylesheet" href="/css/magnific-popup.css"> 
<script src="/js/jquery.magnific-popup.js"></script>
<script src="/js/jquery.magnific-popup_OP.js"></script>

<!-- Google Tag Manager -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-5GPT3H');</script>
<!-- End Google Tag Manager -->
<!-- Facebook Pixel Code -->
<script>
  !function(f,b,e,v,n,t,s)
  {if(f.fbq)return;n=f.fbq=function(){n.callMethod?
  n.callMethod.apply(n,arguments):n.queue.push(arguments)};
  if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
  n.queue=[];t=b.createElement(e);t.async=!0;
  t.src=v;s=b.getElementsByTagName(e)[0];
  s.parentNode.insertBefore(t,s)}(window, document,'script',
  'https://connect.facebook.net/en_US/fbevents.js');
  fbq('init', '2805189076247155');
  fbq('track', 'PageView');
</script>
<noscript><img height="1" width="1" style="display:none"
  src="https://www.facebook.com/tr?id=2805189076247155&ev=PageView&noscript=1"
/></noscript>
<!-- End Facebook Pixel Code -->



<script type="text/javascript" src="//maps.google.com/maps/api/js?key=AIzaSyAq33kvB9x5JbNSyWt7ICPCe6n5oAQcKb4"></script>
<script type="text/javascript">

	google.maps.event.addDomListener(window, 'load', function () {
		var mapObj;
		var latlng;


		var lat = '<?php echo $ObjData["map_kiten_la"]; ?>';
		var lng = '<?php echo $ObjData["map_kiten_lo"]; ?>';
		latlng = new google.maps.LatLng(lat, lng);

		var mapOptions = {
			zoom: 16,
			center: latlng,
			mapTypeId: google.maps.MapTypeId.ROADMAP,
			scrollwheel: false,
		};
		mapObj = new google.maps.Map(document.getElementById('gmap'), mapOptions);
		
		<?php if($ObjData['map_icon'] == 1):?>
			var objMarler = new google.maps.Marker({
				position: latlng, map: mapObj
			});
		<?php endif;?>

	});
</script>


</head>
<body>
    <!-- Google Tag Manager (noscript) -->
    <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NKFL2BN" height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
    <!-- End Google Tag Manager (noscript) -->
    <div id="container">
        <?php include(__DIR__ . '/../web/inc/header.inc'); ?>
        <?php include(__DIR__ . '/../web/inc/nav.inc'); ?>
        <div id="contents">
            <div id="contents">
                <div id="sptop" class="pchd">
                    <a href="/loan_consultation/"><img src="/image/sptop.png" alt="住宅ローン審査の通過実績多数!! "></a>
                </div>
                <div id="detail">
                    <div class="inner">
                        <ol class="topicPath sphd">
                            <li><a href="/">センチュリー21 住宅セレクション</a></li>
                            <li><?php echo $ObjData['object_name']; ?></li>
                        </ol>
                        <div id="detailmain">
                            <p class="update">物件更新日 : <?php echo $ObjData['update_day_ymd_sl']; ?></p>
                            <h1><span><?php echo $shubetu_name; ?></span><?php echo $ObjData['object_name']; ?></h1>
                            <div class="top_ol">
                                <ul class="left">
                                    <li>
                                        <dl>
                                            <dt><i class="fas fa-caret-right"></i> 所在地</dt>
                                            <dd><?php echo $ObjData['shozaichi'] . $ObjData['chiban']; ?></dd>
                                        </dl>
                                        <dl>
                                            <dt><i class="fas fa-caret-right"></i> 交通</dt>
                                            <dd>
                                                <?php
                                                if (!empty($ObjData['rosen_name1'])) {
                                                    echo $ObjData['rosen_name1'] . $ObjData['eki_name1'] . "駅 " . $ObjData['traffic1'] . "<br>";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['rosen_name2'])) {
                                                    echo $ObjData['rosen_name2'] . $ObjData['eki_name2'] . "駅 " . $ObjData['traffic2'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['rosen_name3'])) {
                                                    echo $ObjData['rosen_name3'] . $ObjData['eki_name3'] . "駅 " . $ObjData['traffic3'];
                                                }
                                                ?>
                                                <?php
                                                if ($ObjData['traffic'] != "") {
                                                    echo $ObjData['traffic'];
                                                }
                                                ?>
                                            </dd>
                                        </dl>
                                        <dl>
                                            <dt><i class="fas fa-caret-right"></i> 価格</dt>
                                            <dd>
                                                <?php
                                                if (($ObjData['koukai_flag'] == "4" && !$is_login) || number_format($ObjData['price_from']) == "0") {

                                                    echo "<span>未定</span>";
                                                } else if ($ObjData['koukai_flag'] == "3") {

                                                    echo "<span>成約御礼</span>";
                                                } else {

                                                    echo "<span>" . number_format($ObjData['price_from']) . "</span> 万円" . (($ObjData['price_to'] != "") ? " ～ <span>" . number_format($ObjData['price_to']) . "</span> 万円" : "") . "<i>" . (($ObjData['tax_kbn'] == "1") ? "（税込）" : "") . "</i>";
                                                }
                                                ?>
                                                <?php if ($ObjData['koukai_flag'] != "3" && $ObjData['koukai_flag'] != "4" && $ObjData['noloanf'] == "0") { ?><span class="loanbt"><a href="#loanbox">ローンシミュレーション</a></span><?php } ?>
                                            </dd>
                                        </dl>
                                    </li>
                                </ul>
                                <ul class="right">
                                    <li>
                                        <?php
                                        if ($ObjData['shubetu_cd'] == "1" || $ObjData['shubetu_cd'] == "2") {
                                            ?>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 土地面積</dt>
                                                <dd><?php echo $ObjData['land_area_from']; ?><?php echo ($ObjData['land_area_to'] != "") ? "～" . $ObjData['land_area_to'] . "m&sup2;" : ""; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 建物面積</dt>
                                                <dd><?php echo $ObjData['bld_area_from']; ?><?php echo ($ObjData['bld_area_to'] != "") ? "～" . $ObjData['bld_area_to'] . "m&sup2;" : ""; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 間取り</dt>
                                                <dd><?php echo $ObjData['layout']; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 築年</dt>
                                                <dd><?php echo $ObjData['chikunen']; ?></dd>
                                            </dl>
                                            <?php
                                        } else if ($ObjData['shubetu_cd'] == "3" || $ObjData['shubetu_cd'] == "4") {
                                            ?>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 土地面積</dt>
                                                <dd><?php echo $ObjData['land_area_from']; ?><?php echo ($ObjData['land_area_to'] != "") ? "～" . $ObjData['land_area_to'] . "m&sup2;" : ""; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 建ぺい率</dt>
                                                <dd><?php echo $ObjData['kenpei_ritu1']; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 容積率</dt>
                                                <dd><?php echo $ObjData['yoseki_ritu1']; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 建築条件</dt>
                                                <dd><?php echo ($ObjData['shubetu_cd'] == "3") ? "あり" : "なし"; ?></dd>
                                            </dl>
                                            <?php
                                        } else if ($ObjData['shubetu_cd'] == "5") {
                                            ?>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 専有面積</dt>
                                                <dd><?php echo $ObjData['senyu_area']; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 間取り</dt>
                                                <dd><?php echo $ObjData['layout']; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 所在階</dt>
                                                <dd><?php echo $ObjData['floor_num']; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 築年</dt>
                                                <dd><?php echo $ObjData['chikunen']; ?></dd>
                                            </dl>
                                            <?php
                                        } else if ($ObjData['shubetu_cd'] == "6") {
                                            ?>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 土地面積</dt>
                                                <dd><?php echo $ObjData['land_area_from']; ?><?php echo ($ObjData['land_area_to'] != "") ? "～" . $ObjData['land_area_to'] . "m&sup2;" : ""; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 建物面積</dt>
                                                <dd><?php echo $ObjData['bld_area_from']; ?><?php echo ($ObjData['bld_area_to'] != "") ? "～" . $ObjData['bld_area_to'] . "m&sup2;" : ""; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 間取り</dt>
                                                <dd><?php echo $ObjData['layout']; ?></dd>
                                            </dl>
                                            <dl>
                                                <dt><i class="fas fa-caret-right"></i> 利回り</dt>
                                                <dd><?php echo $ObjData['rimawari']; ?></dd>
                                            </dl>
                                            <?php
                                        }
                                        ?>
                                    </li>
                                </ul>

                                <?php
                                if (!empty($ObjData['movie_url']) || !empty($ObjData['movie_url2']) || !empty($ObjData['movie_url3']) || !empty($ObjData['movie_url4']) || !empty($ObjData['movie_url5'])) {

                                    $a_tag_sta = array();
                                    $a_tag_end = array();
                                    $i_tag_class = array();

                                    for ($x = 1; $x <= 5; $x++) {
                                        $movienum = ($x == 1) ? "" : $x;

                                        if (!empty($ObjData['movie_url' . $movienum])) {
                                            $a_tag_sta[$x] = '<a href="' . $ObjData['movie_url' . $movienum] . '" target="_blank">';
                                            $a_tag_end[$x] = '</a>';
                                            $i_tag_class[$x] = ' class="fas fa-play-circle"';
                                        }
                                    }
                                    ?>
                                    <div class="movie">
                                        <p>この物件の動画・パノラマを見る</p>
                                        <ul>
                                            <li><?php echo $a_tag_sta[1]; ?>1 <i<?php echo $i_tag_class[1]; ?>></i><?php echo $a_tag_end[1]; ?></li>
                                            <li><?php echo $a_tag_sta[2]; ?>2 <i<?php echo $i_tag_class[2]; ?>></i><?php echo $a_tag_end[2]; ?></li>
                                            <li><?php echo $a_tag_sta[3]; ?>3 <i<?php echo $i_tag_class[3]; ?>></i><?php echo $a_tag_end[3]; ?></li>
                                            <li><?php echo $a_tag_sta[4]; ?>4 <i<?php echo $i_tag_class[4]; ?>></i><?php echo $a_tag_end[4]; ?></li>
                                            <li><?php echo $a_tag_sta[5]; ?>5 <i<?php echo $i_tag_class[5]; ?>></i><?php echo $a_tag_end[5]; ?></li>
                                        </ul>
                                    </div>
                                    <?php
                                }
                                ?>
                                <?php
                                if ($ObjData['koukai_flag'] != "3" && $ObjData['koukai_flag'] != "4") {
                                    ?>
                                    <ul class="bt pchd">
                                        <li><a class="stock" href="/stock/<?php echo $ObjData['regist_cd']; ?>/" target="_blank">この物件をストックする</a></li>
                                        <li><a class="brows" href="/list/stock/">ストックした物件を見る</a></li>
                                    </ul>
                                    <?php
                                }
                                ?>
                                <!--/top_ol-->
                            </div>
                            <?php
                            if ($ObjData['openf'] == "1" || $ObjData['openf2'] == "1" || $ObjData['openf3'] == "1") {

                                $day = array('1' => '月', '2' => '火', '3' => '水', '4' => '木', '5' => '金', '6' => '土', '7' => '日');
                                ?>
                                <div class="openhouse">
                                    <dl>
                                        <dt><?php echo $ObjData['open_house_kbn']; ?></dt>
                                        <dd class="date">
                                            <?php
                                            if ($ObjData['openf'] == "1") {
                                                echo $ObjData['open_house_d_from'] . "（" . $day[$ObjData['open_house_start_mday']] . "）～" . $ObjData['open_house_d_to'] . "（" . $day[$ObjData['open_house_end_mday']] . "） " . $ObjData['open_house_t_from'] . "～" . $ObjData['open_house_t_to'];
                                            } else if ($ObjData['openf2'] == "1") {
                                                echo $ObjData['open_house_d_from2'] . "（" . $day[$ObjData['open_house_start_mday2']] . "）～" . $ObjData['open_house_d_to2'] . "（" . $day[$ObjData['open_house_end_mday2']] . "） " . $ObjData['open_house_t_from2'] . "～" . $ObjData['open_house_t_to2'];
                                            } else if ($ObjData['openf3'] == "1") {
                                                echo $ObjData['open_house_d_from3'] . "（" . $day[$ObjData['open_house_start_mday3']] . "）～" . $ObjData['open_house_d_to3'] . "（" . $day[$ObjData['open_house_end_mday3']] . "） " . $ObjData['open_house_t_from3'] . "～" . $ObjData['open_house_t_to3'];
                                            }
                                            ?>
                                        </dd>
                                        <dd class="comment"><span>備考</span><?php echo $ObjData['open_house_place']; ?></dd>
                                    </dl>
                                    <!--/openhouse-->
                                </div>
                                <?php
                            }
                            ?>
                            
                            <?php include(__DIR__ . '/../web/inc/detail-btn.inc'); ?>

                            <?php
                            $main_image_file = ($ObjData['image_file1'] != "") ? $ObjData['image_file1'] : "/image/NO_PHOTO.jpg";
                            ?>
                            <div class="mainImage">
                                <img class="mgb10" src="<?php echo $main_image_file; ?>" alt="<?php echo $ObjData['object_name']; ?>"><br><?php echo $ObjData['img_comm1']; ?>
                            </div>
                            <div class="item">
                                <div class="slider responsive2 parent-container">
                                    <?php
                                    for ($rr = 1; $rr <= 40; $rr++) {

                                        if ($ObjData['image_file' . $rr] == "" || $ObjData['img_kind' . $rr] == "6") {
                                            continue;
                                        }
                                        ?>
                                        <div><span class="css_list"><a href="<?php echo $ObjData['image_file' . $rr]; ?>" title="<?php echo $ObjData['img_comm' . $rr]; ?>">
                                                    <div class="image"><img src="<?php echo $ObjData['image_file' . $rr]; ?>" /></div></a>
                                                <p><?php echo $ObjData['img_comm' . $rr]; ?></p></span></div>
                                        <?php
                                    }
                                    ?>
                                    <!--/item-->
                                </div>
                                <!--slider  responsive2 スライダー-->
                                <!--parent-container ポップアップ-->
                            </div>

                            <div class="point">
                                <div class="staff"><img src="<?php echo ($ObjData['staff_img'] != "") ? $ObjData['staff_img'] : "/template/images/list_staff.jpg"; ?>" alt="スタッフ写真"></div>
                                <dl>
                                    <dt><i class="fas fa-hand-point-up"></i>　担当者のおすすめポイント</dt>
                                    <dd><?php echo nl2br($ObjData['tanto_comment']); ?></dd>
                                </dl>
                                <!--/point-->
                            </div>
                            
                            <?php include(__DIR__ . '/../web/inc/detail-btn.inc'); ?>

                            <div class="map">
                                <h2><i class="fas fa-tree"></i> 周辺環境</h2>
                                <div class="gmap" id="gmap"></div>
                                <!--/map-->
                            </div>

                            <div class="location">
                                <ul>
                                    <?php
                                    for ($rr = 2; $rr <= 40; $rr++) {

                                        if ($ObjData['image_file' . $rr] == "" || $ObjData['img_kind' . $rr] != "6") {
                                            continue;
                                        }
                                        ?>
                                        <li><a class="popup-image" href="<?php echo $ObjData['image_file' . $rr]; ?>" title="<?php echo $ObjData['syuhen_name' . $rr]; ?>　<?php echo $ObjData['syuhen_toho' . $rr]; ?>"><img src="<?php echo $ObjData['image_file' . $rr]; ?>" alt="<?php echo $ObjData['syuhen_name' . $rr]; ?>"><br><?php echo $ObjData['syuhen_name' . $rr]; ?><br><?php echo $ObjData['syuhen_kyori' . $rr]; ?><?php echo $ObjData['syuhen_toho' . $rr]; ?></a></li>
                                        <?php
                                    }
                                    ?>
                                </ul>
                                <p>※ 出来る限り詳細な調査を行っておりますが、実際の距離・徒歩所要時間と異なる場合がございます。予めご了承下さい。</p>
                                <!--/location-->
                            </div>

                            <?php
                            if ($ObjData['koukai_flag'] != "3" && $ObjData['koukai_flag'] != "4" && $ObjData['noloanf'] == "0") {
                                ?>
                                <div id="loanbox">
                                    <div class="example">
                                        <p class="title"><span><i class="fas fa-calculator"></i> お支払い例</span><br class="pchd">この物件を購入した場合の月々の支払い価格の一例です。</p>

                                        <dl>
                                            <dt>借入金額</dt>
                                            <dd><span><?php echo number_format($ObjData['price_from']); ?></span>万円</dd>
                                        </dl>
                                        <dl>
                                            <dt>頭金</dt>
                                            <dd>0円</dd>
                                        </dl>
                                        <dl>
                                            <dt>ボーナス払い</dt>
                                            <dd>0円</dd>
                                        </dl>
                                        <p class="eq">=</p>
                                        <dl class="end">
                                            <dt>毎月の返済額</dt>
                                            <dd class="result"><span class="red"><?php echo number_format($ObjData['tuki_siharai_d']); ?></span>円</dd>
                                        </dl>
                                        <p class="sub">※元利均等方式 金利0.775%の場合　※返済年数35年として算出しています。</p>
                                        <!--/example-->
                                    </div>

                                    <div class="loanbanner">
                                        <a href="/loan/"><img class="sphd" src="/image/detail_loan_banner_off.png" alt="住宅ローン審査の通過実績多数!! "><img class="pchd" src="/image/detail_loan_banner_sp.png" alt="住宅ローン審査の通過実績多数!! "></a>
                                    </div>
                                    <!--/loanbox-->
                                </div>
                                <?php
                            }
                            ?>
                            
                            <?php include(__DIR__ . '/../web/inc/detail-btn.inc'); ?>

                            <div class="outline">
                                <h2><i class="far fa-file-alt"></i> 物件概要</h2>
                                <table>
                                    <tr>
                                        <th>物件名</th>
                                        <td colspan="3" class="herf"><?php echo $ObjData['object_name']; ?></td>
                                    </tr>
                                    <tr>
                                        <th>所在地</th>
                                        <td colspan="3"><?php echo $ObjData['shozaichi'] . $ObjData['chiban']; ?></td>
                                    </tr>
                                    <tr>
                                        <th>交通</th>
                                        <td colspan="3">
                                            <?php if ($ObjData['rosen_name1'] != "") { ?>
                                                <?php echo $ObjData['rosen_name1']; ?>「<?php echo $ObjData['eki_name1']; ?>」駅<?php echo $ObjData['traffic1_detail']; ?>
                                            <?php } ?>
                                        </td>
                                    </tr>
                                    <?php if ($ObjData['rosen_name2'] != "") { ?>
                                        <tr>
                                            <th>交通2</th>
                                            <td colspan="3"><?php echo $ObjData['rosen_name2']; ?>「<?php echo $ObjData['eki_name2']; ?>」駅<?php echo $ObjData['traffic2_detail']; ?></td>
                                        </tr>
                                    <?php } ?>
                                    <?php if ($ObjData['rosen_name3'] != "") { ?>
                                        <tr>
                                            <th>交通3</th>
                                            <td colspan="3"><?php echo $ObjData['rosen_name3']; ?>「<?php echo $ObjData['eki_name3']; ?>」駅<?php echo $ObjData['traffic3_detail']; ?></td>
                                        </tr>
                                    <?php } ?>
                                    <?php if ($ObjData['traffic'] != "") { ?>
                                        <tr>
                                            <th>その他交通</th>
                                            <td colspan="3"><?php echo $ObjData['traffic']; ?></td>
                                        </tr>
                                    <?php } ?>
                                    <?php
                                    if ($ObjData['shubetu_cd'] == "1" || $ObjData['shubetu_cd'] == "2") {
                                        include(__DIR__ . '/obj_info1.inc');
                                    } else if ($ObjData['shubetu_cd'] == "3" || $ObjData['shubetu_cd'] == "4") {
                                        include(__DIR__ . '/obj_info3.inc');
                                    } else {
                                        include(__DIR__ . '/obj_info' . $ObjData['shubetu_cd'] . '.inc');
                                    }
                                    ?>
                                    <tr>
                                        <th>特記事項</th>
                                        <td colspan="3"><?php echo nl2br($ObjData['notes']); ?></td>
                                    </tr>
                                    <tr>
                                        <th>設備</th>
                                        <td colspan="3" class="herf">
                                            <?php echo $ObjData['equipment_gus']; ?>　
                                            <?php echo $ObjData['equipment_elec']; ?>　
                                            <?php echo $ObjData['equipment_water']; ?>　
                                            <?php echo $ObjData['equipment_drain']; ?>
                                        </td>
                                    </tr>
                                    <tr>
                                        <th>備考</th>
                                        <td colspan="3" class="herf">
                                            <?php
                                            if (!empty($ObjData['kyori_shogako'])) {
                                                echo "小学校区：" . $ObjData['kyori_shogako'] . "<br />";
                                            }
                                            ?>
                                            <?php
                                            if (!empty($ObjData['kyori_chugako'])) {
                                                echo "中学校区：" . $ObjData['kyori_chugako'] . "<br />";
                                            }
                                            ?>
                                            <p>
                                                <?php echo nl2br($ObjData['biko']); ?>
                                            </p>
                                            <p>
                                                <?php
                                                if (!empty($ObjData['kyori_conbini'])) {
                                                    echo $ObjData['kyori_conbini'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['kyori_super'])) {
                                                    echo $ObjData['kyori_super'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['kyori_byouin'])) {
                                                    echo $ObjData['kyori_byouin'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['choukaihi_info'])) {
                                                    echo $ObjData['choukaihi_info'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['net_hiyou_info'])) {
                                                    echo $ObjData['net_hiyou_info'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['catv_hiyou_info'])) {
                                                    echo $ObjData['catv_hiyou_info'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['yusen_hiyou_info'])) {
                                                    echo $ObjData['yusen_hiyou_info'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['sonota_hiyou_info1'])) {
                                                    echo $ObjData['sonota_hiyou_info1'] . "<br />";
                                                }
                                                ?>
                                                <?php
                                                if (!empty($ObjData['sonota_hiyou_info2'])) {
                                                    echo $ObjData['sonota_hiyou_info2'] . "<br />";
                                                }
                                                ?>
                                            </p>
                                            <?php
                                            if (!empty($ObjData['equipment_info'])) {
                                                echo "<p>" . $ObjData['equipment_info'] . "</p>";
                                            }
                                            ?>
                                            <p>
                                                <?php if ($ObjData['koukai_flag'] == "4") { ?>※こちらの物件は予告の為、契約又は予約のお申し込みは出来ません。予めご了承下さい。<br/><?php } ?>
                                                ※現状と異なる場合は現況を優先とします。
                                            </p>
                                        </td>
                                    </tr>
                                </table>
                                <!--/outline-->
                            </div>

                            <?php
                            if ($ObjData['koukai_flag'] != "3" && $ObjData['koukai_flag'] != "4") {
                                ?>
                                <div class="contactbanner sphd">
                                    <a href="" class="tel"><img src="/image/detail_contact_banner_tel.png" alt="0120035034"></a>
                                    <a href="/demand/<?php echo $ObjData['regist_cd']; ?>/" class="mail"><img src="/image/detail_contact_banner_mail_off.png" alt="メールでのお問い合わせ"></a>
                                    <!--/contact-->
                                </div>

                                <div class="contact_sp pchd">
                                    <dl class="demand">
                                        <dt>もっと詳細が知りたい方はコチラ!</dt>
                                        <dd><a href="/demand/<?php echo $ObjData['regist_cd']; ?>/">ご相談・お問合せ&nbsp;<i class="fas fa-angle-right"></i></a></dd>
                                    </dl>
                                    <dl class="linebt">
                                    	<dt>すぐに詳細が知りたい方はコチラ!</dt>
                                    	<dd><a href="https://lin.ee/dpsGGMj" target="_blank" class="contact-line-btn">LINEでお問合せ&nbsp;<i class="fas fa-angle-right"></i></a></dd>
                                    </dl>
                                    <dl class="yoyaku">
                                        <dt>この物件を見たい方はコチラ!</dt>
                                        <dd><a href="/yoyaku/<?php echo $ObjData['regist_cd']; ?>/">見学予約&nbsp;<i class="fas fa-angle-right"></i></a></dd>
                                    </dl>
                                    <dl class="tel">
                                        <dt>お電話でのお問い合わせはコチラ!</dt>
                                        <dd>
                                            <a href="tel:0120035-034">0120-035-034</a></dd>
                                        </dd>
                                    </dl>
                                    <!--/contact_sp-->
                                </div>

                                <div class="line">
                                    <a href="https://lin.ee/dpsGGMj" class="contact-line-btn" onclick="gtag('event', 'tap', {'event_category' : 'bline', 'event_label' : 'a'});" target="_blank"><img src="/image/detail_line_soudan_off.png" alt="LINEで物件探しの相談をする"></a>
                                    <!--/contact-->
                                </div>
                                <?php
                            }
                            ?>


                            <!--/detailmain-->
                        </div>
                        <div id="detailside">
                            <div class="contact sphd">
                                <p class="title">物件番号</p>
                                <p class="number"><?php echo $ObjData['object_no']; ?></p>
                                <div class="box">
                                    <?php
                                    if ($ObjData['koukai_flag'] != "3" && $ObjData['koukai_flag'] != "4") {
                                        ?>
                                        <a href="/yoyaku/<?php echo $ObjData['regist_cd']; ?>/" class="yoyaku"><i class="far fa-calendar-alt"></i> 見学予約</a>
                                        <a href="/demand/<?php echo $ObjData['regist_cd']; ?>/" class="inquiry"><i class="far fa-envelope-open"></i> ご相談<br>お問い合わせ</a>
                                        <a href="https://lin.ee/dpsGGMj" target="_blank" onclick="gtag('event', 'tap', {'event_category' : 'bline', 'event_label' : 'a'});" class="line contact-line-btn"><img src="/image/detail_ib03.png" width="23" height="22" alt="LINE" /> LINEで<br>お問い合わせ</a>
                                        <?php
                                    }
                                    ?>
                                    <dl>
                                        <dt>お電話でのお問い合わせ</dt>
                                        <dd class="com">センチュリー21<br>
                                            <span>住宅セレクション</span>
                                        </dd>
                                        <dd class="tel">
                                            フリーダイヤル<br>
                                            <span>0120-035-034</span><br>
                                            営業時間 : 10:00〜19:00<br>
                                            定休日 : 第1.3火曜日　水曜日
                                        </dd>
                                    </dl>
                                    <!--/box-->
                                </div>
                                <?php
                                if ($ObjData['koukai_flag'] != "3" && $ObjData['koukai_flag'] != "4") {
                                    ?>
                                    <div class="box2">
                                        <ul>
                                            <li><a href="/stock/<?php echo $ObjData['regist_cd']; ?>/" target="_blank">この物件をストックする</a></li>
                                            <li><a href="/list/stock/">ストックした物件を見る</a></li>
                                        </ul>
                                        <!--/box-->
                                    </div>
                                    <?php
                                }
                                ?>
                                <!--/contact-->
                            </div>
                            <?php
                            if (count($ObjectList) > 0) {
                                ?>
                                <div class="near">
                                    <h3><i class="far fa-check-square"></i>この物件に<br>
                                        <span>条件が近い物件</span>
                                    </h3>
                                    <ul>
                                        <?php include(__DIR__ . '/top-col-m.inc'); ?>
                                    </ul>
                                    <!--/near-->
                                </div>
                                <?php
                            }
                            ?>
                            <!--/detailside-->
                        </div>

                        <?php
                        if ($ObjData['koukai_flag'] != "3" && $ObjData['koukai_flag'] != "4") {
                            ?>
                            <div class="contact_sp pchd">
                                <dl class="demand">
                                    <dt>もっと詳細が知りたい方はコチラ!</dt>
                                    <dd><a href="/demand/<?php echo $ObjData['regist_cd']; ?>/">ご相談・お問合せ&nbsp;<i class="fas fa-angle-right"></i></a></dd>
                                </dl>
                                <dl class="yoyaku">
                                    <dt>この物件を見たい方はコチラ!</dt>
                                    <dd><a href="/yoyaku/<?php echo $ObjData['regist_cd']; ?>/">見学予約&nbsp;<i class="fas fa-angle-right"></i></a></dd>
                                </dl>
                                <dl class="tel">
                                    <dt>お電話でのお問い合わせはコチラ!</dt>
                                    <dd>
                                        <a href="#">0120-035-034</a></dd>
                                    </dd>
                                </dl>
                                <!--/contact_sp-->
                            </div>
                            <?php
                        }
                        ?>
                        <!--/inner-->
                    </div>
                    <!--/detail-->
                </div>
                <!--/contents-->
            </div>
            <?php include(__DIR__ . '/../web/inc/footer.inc'); ?>
            <!--/container-->
        </div>
        <p class="pagetop"><a href="#container">▲</a></p>
        <?php include(__DIR__ . '/../web/inc/sidebt.inc'); ?>
        <?php include(__DIR__ . '/../web/inc/footbt.inc'); ?>
        <script type="text/javascript" src="/js/slick.js"></script> 
        <script type="text/javascript" src="/js/scripts.js"></script>
</body>
</html>
