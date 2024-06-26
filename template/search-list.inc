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
<meta name="robots" content="noindex">
<meta name="viewport" content="width=device-width" />
<title><?php echo $pg_title; ?>｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="センチュリー21住宅セレクションの<?php echo $pg_title; ?>" />
<meta name="Keywords" content="<?php echo $pg_title; ?>,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />

<?php // canonical タグの表示
    echo '<link rel="canonical" href="http://' . $_SERVER['HTTP_HOST'] . $_SERVER['REQUEST_URI'].'">';
?>

<link rel="stylesheet" href="/css/style.css" />
<link rel="stylesheet" href="/css/list.css" />
<link href="https://use.fontawesome.com/releases/v5.0.6/css/all.css" rel="stylesheet">
<!--&#91;if lt IE 9&#93;>
<script src="//cdn.jsdelivr.net/html5shiv/3.7.2/html5shiv.min.js"></script>
<script src="//cdnjs.cloudflare.com/ajax/libs/respond.js/1.4.2/respond.min.js"></script>
<!&#91;endif&#93;-->
<script src="https://code.jquery.com/jquery-latest.js"></script>
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
　縦幅揃え
----------------------->
<script src="/js/jquery.heightLine.js"></script>
<script>
if (window.matchMedia('(min-width: 641px)').matches){
$(function(){
$(".heightLine").heightLine();
});
$(window).load(function() {
	$('.heightLine').heightLine({
	    minWidth:641
	});
});
};
</script>
<!-------------------------------
toggle 表示・非表示
--------------------------------->
<script type="text/javascript">
$(function(){
 $(".open_bt1").click(function(){
 $($(this).next(".searchbox")).animate( 
  {height: "toggle", opacity: "toggle"},
   "nomal"
			);
	});
	
	 $(".open_bt2").click(function(){
 $($(this).next(".kodawari")).animate( 
  {height: "toggle", opacity: "toggle"},
   "nomal"
			);
	});

	$('.search_btn').click(function(){
　var myid = $(this).attr('id');
　　$('#searchf_'+myid).submit();
　});
});
</script>
<!-------------------------------
アークス
--------------------------------->
<script type="text/javascript" src="/js_arcs/objlist.js"></script>
<script type="text/javascript" src="/js_arcs/ajax_object_cnt.js"></script>
<script type="text/javascript">
$(function(){
        $('.add_btn').click(function(e){
                rcds = new Array();
                $('.regist_cds').each(function(){
                        if($(this).prop('checked')){
                                rcds.push($(this).val());
                        }
                });

                if(rcds.length==0){
                        alert('物件を選択してください');
                        return;
                }
                if ($(this).attr('id')=='detail_btn'){
                        window.open('/bin/detail.php?reg_cds='+rcds.join(','));
                        return;

                }else if ($(this).attr('id')=='stock_btn'){
                        location.href='/bin/stock-reg.php?reg_cds='+rcds.join(',');
                        return;

                }else if ($(this).attr('id')=='stock_delete_btn'){
                        location.href='/bin/stock-delete.php?reg_cds='+rcds.join(',');
                        return;

                }else if ($(this).attr('id')=='yoyaku_btn'){
                        window.open('/bin/common-contact.php?reg_cds='+rcds.join(',') + '&type=yoyaku');
                        return;

                }else{
                        window.open('/bin/common-contact.php?reg_cds='+rcds.join(',') + '&type=demand');
                        return;
                }
        });
        $('.sort_link').click(function () {
            $('#page_num').val('1');
            $('#sort_kbn').val($(this).attr('vval'));
            $('#sort_desc').val($(this).attr('aval'));
            $('#searchf').submit();
        });
        $('.sort_pulldown').change(function () {
            $('#page_num').val('1');
            $('#sort_kbn').val($('[name=sort_pulldown] option:selected').attr('vval'));
            $('#sort_desc').val($('[name=sort_pulldown] option:selected').attr('aval'));
            $('#searchf').submit();
        });
        $('.pgj').click(function () {
            $('#page_num').val($(this).attr('vval'));
            $('#searchf').submit();
        });
        $('.change_btn').click(function () {
            $('#searchf').attr('action', '/bin/search.php');
            $('#searchf').submit();
        });
        $('.search_btn').click(function () {
            $('#searchf').submit();
        });
    });
</script>

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




</head>
<body>
    <!-- Google Tag Manager (noscript) -->
    <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NKFL2BN" height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
    <!-- End Google Tag Manager (noscript) -->
    <div id="container">
        <?php include(__DIR__ . '/../web/inc/header.inc'); ?>
        <?php include(__DIR__ . '/../web/inc/nav.inc'); ?>
        <div id="contents">
            <div id="sptop" class="pchd">
                <a href="/loan_consultation/"><img src="/image/sptop.png" alt="住宅ローン審査の通過実績多数!! "></a>
            </div>
            <div id="list">
                <div class="inner">
                    <ol class="topicPath sphd">
                        <li><a href="/">センチュリー21 住宅セレクション</a></li>
                        <li><?php echo $pg_title; ?></li>
                    </ol>
                    <h1><i class="fas fa-home"></i>　<?php echo $pg_title; ?></h1>
                    <?php
                    if (in_array($Param['stype'], $view_searchbox_stype)) {
                        include(__DIR__ . '/club_bar.inc');
                    }
                    ?>


                    <?php
                    if ($Param['stype'] == "ranking") { // (住宅セレクション様のランキングは種別ごと)
                        ?>
                        <ul id="cvbt">
                            <li><a class="button" href="/list/ranking/1/"><span><i class="fas fa-search"></i> 新築一戸建て</span></a></li>
                            <li><a class="button" href="/list/ranking/3/"><span><i class="fas fa-edit"></i> 土地</span></a></li>
                            <li><a class="button" href="/list/ranking/5/"><span><i class="fas fa-building"></i> マンション</span></a></li>
                        </ul>
                        <?php
                    }
                    ?>

                    <?php
                    if ($Param['stype'] == "recommend") { // (住宅セレクション様のおすすめは店舗ごと)
                        ?>
                        <ul class="shop_select">
                            <li><a class="<?php
                                if ($Param['shop'] == "11201") {
                                    echo "active";
                                }
                                ?>" href="/list/recommend/11201/">平塚店</a></li>
                            <li><a class="<?php
                                if ($Param['shop'] == "11203") {
                                    echo "active";
                                }
                                ?>" href="/list/recommend/11203/">小田原店</a></li>
                        </ul>
                        <div class="shop_wrap">
                            <p class="shop_title"><?php echo $Param['shop_name']; ?>のおすすめ物件</p>
                            <div class="shop_inner">
                                <?php
                            }
                            ?>





                            <form id="searchf" method="post" action="/bin/search-list.php">

                                <?php
                                if (in_array($Param['stype'], $view_searchbox_stype)) {  // (if 絞り込み検索可)
                                    ?>
                                    <div class="condition">

                                        <div class="open_bt1" style="display:none;"><i class="fas fa-search"></i> 検索条件を変更</div>
                                        <div class="searchbox" style="display:none;">
                                            <?php include(__DIR__ . '/search-parts-' . $Param['stype'] . '.inc'); ?>
                                            <?php
                                            if ($Param['stype'] == "area" || $Param['stype'] == "line") {
                                                include(__DIR__ . '/search-parts.inc');
                                            }
                                            ?>
                                            <div class="submit">
                                                <p>この条件の該当件数<span id="<?php echo $Param['type']; ?>_allcnt"><?php echo $cnt; ?></span>件</p>
                                                <div class="btn">
                                                    <input id="search_btn1" type="submit" name="search_btn" class="search_btn" value="上記条件で再検索する">
                                                </div>
                                                <!--/submit--> 
                                            </div>
                                            <!--/searchbox-->
                                        </div>

                                        <div class="open_bt2"><i class="fas fa-search"></i> こだわり条件を変更</div>
                                        <div class="kodawari">
                                            <?php include(__DIR__ . '/search-parts-kodawari.inc'); ?>
                                            <div class="submit">
                                                <p>この条件の該当件数<span id="<?php echo $Param['type']; ?>_allcnt"><?php echo $cnt; ?></span>件</p>
                                                <div class="btn">
                                                    <input id="search_btn1" type="submit" name="search_btn" class="search_btn" value="上記条件で再検索する">
                                                </div>
                                                <!--/submit--> 
                                            </div>
                                            <!--/kodawari--> 
                                        </div>
                                        <!--/condition--> 
                                    </div>
                                    <?php
                                }  // (end if 絞り込み検索可)
                                ?>

                                <?php
                                if (count($ObjectList) > 0) {
                                    //追加 20190306
                                    $sort_desc = "";
                                    $sort_kbn = "";

                                    if ($Param['sort_kbn'] == 4) {
                                        $sort_desc = ($Param['sort_desc'] == 1) ? "安い" : "高い";
                                        $sort_kbn = "価格";
                                    } else if ($Param['sort_kbn'] == 6) {
                                        $sort_desc = ($Param['sort_desc'] == 1) ? "小さい" : "大きい";
                                        $sort_kbn = "土地";
                                    } else if ($Param['sort_kbn'] == 7) {
                                        $sort_desc = ($Param['sort_desc'] == 1) ? "小さい" : "大きい";
                                        $sort_kbn = "建物面積";
                                    } else if ($Param['sort_kbn'] == 8) {
                                        $sort_desc = ($Param['sort_desc'] == 1) ? "小さい" : "大きい";
                                        $sort_kbn = "専有面積";
                                    }
                                    //追加 20190306 END

                                    if (in_array($Param['stype'], $view_searchbox_stype)) {  // (if 並び替え可)
                                        ?>
                                        <p class="state">全<span><?php echo $cnt; ?></span>件中　<span><?php echo $page_sta; ?>～<?php echo $page_end; ?></span>件を表示（<?php echo $sort_kbn; ?>が<?php echo $sort_desc; ?>順に表示）</p>
                                        <dl class="sort sphd">
                                            <dt>並び変え :</dt>
                                            <dd><a href="javascript:;" class="sort_link" vval="4" aval="1">価格の安い順</a></dd>
                                            <dd><a href="javascript:;" class="sort_link" vval="4" aval="0">価格の高い順</a></dd>
                                            <?php if ($Param['shubetu_cd'] == "1" || $Param['shubetu_cd'] == "2" || $Param['shubetu_cd'] == "1,2" || $Param['shubetu_cd'] == "3,4") { ?>
                                                <dd><a href="javascript:;" class="sort_link" vval="6" aval="0">土地大きい順</a></dd>
                                                <dd><a href="javascript:;" class="sort_link" vval="6" aval="1">土地小さい順</a></dd>
                                            <?php } ?>
                                            <?php if ($Param['shubetu_cd'] == "1" || $Param['shubetu_cd'] == "2") { ?>
                                                <dd><a href="javascript:;" class="sort_link" vval="7" aval="0">建物面積大きい順</a></dd>
                                                <dd><a href="javascript:;" class="sort_link" vval="7" aval="1">建物面積小さい順</a></dd>
                                            <?php } ?>
                                            <?php if ($Param['shubetu_cd'] == "5" || $Param['shubetu_cd'] == "6") { ?>
                                                <dd><a href="javascript:;" class="sort_link" vval="8" aval="0">専有面積大きい順</a></dd>
                                                <dd><a href="javascript:;" class="sort_link" vval="8" aval="1">専有面積小さい順</a></dd>
                                            <?php } ?>
                                        </dl>
                                        <dl class="sort pchd">
                                            <dt>並び変え :</dt>
                                            <dd>
                                                <select name="sort_pulldown" class="sort_pulldown">
                                                    <option vval="4" aval="1">価格の安い順</option>
                                                    <option vval="4" aval="0">価格の高い順</option>
                                                    <?php if ($Param['shubetu_cd'] == "1" || $Param['shubetu_cd'] == "2" || $Param['shubetu_cd'] == "3,4") { ?>
                                                        <option vval="6" aval="0">土地大きい順</option>
                                                        <option vval="6" aval="1">土地小さい順</option>
                                                    <?php } ?>
                                                    <?php if ($Param['shubetu_cd'] == "1" || $Param['shubetu_cd'] == "2") { ?>
                                                        <option vval="7" aval="0">建物面積大きい順</option>
                                                        <option vval="7" aval="1">建物面積小さい順</option>
                                                    <?php } ?>
                                                    <?php if ($Param['shubetu_cd'] == "5" || $Param['shubetu_cd'] == "6") { ?>
                                                        <option vval="8" aval="0">専有面積大きい順</option>
                                                        <option vval="8" aval="1">専有面積小さい順</option>
                                                    <?php } ?>
                                                </select>
                                            </dd>
                                        </dl>
                                        <?php
                                    }  // (end if 並び替え可)
                                    ?>

                                    <?php include(__DIR__ . '/bukken_check.inc'); ?>

                                    <ul id="listblock">
                                        <?php include(__DIR__ . '/search-col.inc'); ?>
                                        <!--/listblock-->
                                    </ul>

                                    <?php include(__DIR__ . '/bukken_check.inc'); ?>

                                    <?php
                                    if (in_array($Param['stype'], $view_searchbox_stype)) {
                                        include(__DIR__ . '/club_bar.inc');
                                    }
                                    ?>
                                    <!-----▼ページャー------>
                                    <?php
                                    if ($Param['stype'] != "ranking") {
                                        ?>
                                        <div class="paginate">
                                            <ul>
                                                <?php if ($page_prev != "") { ?>
                                                    <li class="prev"><a href="javascript:void(0)" class="pgj" vval="<?php echo $page_prev; ?>">前へ</a></li>
                                                <?php } ?>
                                                <?php
                                                for ($i = 1; $i <= $all_page_num; $i++) {
                                                    if ($i == $Param['page_num']) {
                                                        echo '<li><a class="on">' . $i . '</a></li>';
                                                    } else {
                                                        if ($Param['page_num'] == '1') {
                                                            if ($i <= ($Param['page_num'] + 4)) {
                                                                echo '<li><a href="javascript:void(0)" class="pgj" vval="' . $i . '">' . $i . '</a></li>';
                                                            }
                                                        } else if ($Param['page_num'] == $all_page_num) {
                                                            if ($i >= ($all_page_num - 4)) {
                                                                echo '<li><a href="javascript:void(0)" class="pgj" vval="' . $i . '">' . $i . '</a></li>';
                                                            }
                                                        } else {
                                                            if ($Param['page_num'] == '2') {
                                                                if ($i >= ($Param['page_num'] - 1) && $i <= ($Param['page_num'] + 3)) {
                                                                    echo '<li><a href="javascript:void(0)" class="pgj" vval="' . $i . '">' . $i . '</a></li>';
                                                                }
                                                            } elseif ($Param['page_num'] == ($all_page_num - 1 )) {
                                                                if ($i >= ($Param['page_num'] - 3) && $i <= ($Param['page_num'] + 1)) {
                                                                    echo '<li><a href="javascript:void(0)" class="pgj" vval="' . $i . '">' . $i . '</a></li>';
                                                                }
                                                            } else {
                                                                if ($i >= ($Param['page_num'] - 2) && $i <= ($Param['page_num'] + 2)) {
                                                                    echo '<li><a href="javascript:void(0)" class="pgj" vval="' . $i . '">' . $i . '</a></li>';
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                ?>
                                                <?php if ($page_next != "") { ?>
                                                    <li class="next"><a href="javascript:void(0)" class="pgj" vval="<?php echo $page_next; ?>">次へ</a></li>
                                                <?php } ?>
                                            </ul>
                                        </div>
                                        <?php
                                    }
                                    ?>
                                    <!-----▲ページャー------>

                                    <?php
                                } else {
                                    ?>
                                    <p class="state"><span>入力された検索条件に該当する物件はありません。</span></p>
                                    <?php
                                }
                                ?>

                                <input type="hidden" id="stype" name="stype" value="<?php echo $Param['stype']; ?>" />
                                <input type="hidden" id="type" name="type" value="<?php echo $Param['type']; ?>" />
                                <input type="hidden" id="page_num" name="page_num" value="<?php echo $Param['page_num']; ?>" />
                                <input type="hidden" id="page_count" name="page_count" value="<?php echo $Param['page_count']; ?>" />
                                <input type="hidden" id="sort_kbn" name="sort_kbn" value="<?php echo $Param['sort_kbn']; ?>" />
                                <input type="hidden" id="sort_desc" name="sort_desc" value="<?php echo $Param['sort_desc']; ?>" />
                                <input type="hidden" id="spcd" name="spcd" value="<?php echo $Param['spcd']; ?>" />
                                <input type="hidden" id="shop" name="shop" value="<?php echo $Param['shop']; ?>" />

                                <!--/追加 20190306-->
                                <?php if ($Param['stype'] == 'fword'): ?>
                                    <input type="hidden" id="free_word" name="free_word" value="<?php echo $Param['free_word']; ?>" />
                                <?php endif; ?>

                                <?php if ($Param['stype'] == 'school' && !empty($Param['school_cd'])): ?>
                                    <?php foreach ($Param['school_cd'] as $key => $value): ?>
                                        <input type="hidden" name="school_cd[<?php echo $key; ?>]" value="<?php echo $value; ?>" />
                                    <?php endforeach; ?>
                                <?php endif; ?>
                                <!--/追加 20190306 END-->
                                <?php
                                if (!in_array($Param['stype'], $view_searchbox_stype)) {
                                    echo implode("\n", $Sparts['price_from']['hidden_list']);
                                    echo implode("\n", $Sparts['price_to']['hidden_list']);
                                    echo implode("\n", $Sparts['bld_area_from']['hidden_list']);
                                    echo implode("\n", $Sparts['bld_area_to']['hidden_list']);
                                    echo implode("\n", $Sparts['land_area_from']['hidden_list']);
                                    echo implode("\n", $Sparts['land_area_to']['hidden_list']);
                                    echo implode("\n", $Sparts['layout_from']['hidden_list']);
                                    echo implode("\n", $Sparts['layout_to']['hidden_list']);
                                }
                                ?>
                            </form>
                            <?php
                            if (!in_array($Param['stype'], $view_searchbox_stype)) { // (ストック, 特集のときだけ表示)
                                ?>
                                <?php
                                if ($Param['stype'] != "recommend") { // (おすすめは非表示)
                                    ?>
                                    <ul id="cvbt">
                                        <li><a class="button" href="/search/"><span><i class="fas fa-search"></i> 物件検索</span></a></li>
                                        <li><a class="button" href="/merit/"><span><i class="fas fa-edit"></i> センチュリーClub無料登録</span></a></li>
                                        <li><a class="button" href="/raiten/"><span><i class="fas fa-building"></i> ご来店予約</span></a></li>
                                    </ul>
                                    <?php
                                }
                                ?>
                                <?php
                            }
                            ?>
                            <?php
                            if ($Param['stype'] == "recommend") { // (住宅セレクション様のおすすめは店舗ごと)
                                ?>
                                <!--/shop_inner-->
                            </div>

                            <ul class="shop_select">
                                <li><a class="<?php
                                    if ($Param['shop'] == "11201") {
                                        echo "active";
                                    }
                                    ?>" href="/list/recommend/11201/">平塚店</a></li>
                                <li><a class="<?php
                                    if ($Param['shop'] == "11203") {
                                        echo "active";
                                    }
                                    ?>" href="/list/recommend/11203/">小田原店</a></li>
                            </ul>
                            <!--/shop_wrap-->
                        </div>
                        <?php
                    }
                    ?>
                    <!--/inner-->
                </div>
                <!--/list-->
            </div>
            
            <div class="induction_banner">
                <ul>
                    <li><a class="ib01 add_btn" href="javascript:void(0);" id="yoyaku_btn">見学予約</a></li>
                    <li><a class="ib02 add_btn" href="javascript:void(0);" id="demand_btn2">メールでご相談・お問い合せ</a></li>
                    <li><a class="ib03 contact-line-btn" href="https://lin.ee/dpsGGMj"  onclick="gtag('event', 'tap', {'event_category' : 'bline', 'event_label' : 'a'});" target="_blank">LINEでご相談・お問い合せ</a></li>
                </ul>
                <!--/induction_banner-->
            </div>


            <!--/contents-->
        </div>
        <?php include(__DIR__ . '/../web/inc/footer.inc'); ?>
        <!--/container-->
    </div>
    <p class="pagetop"><a href="#container">▲</a></p>
    <?php include(__DIR__ . '/../web/inc/sidebt.inc'); ?>
    <?php include(__DIR__ . '/../web/inc/footbt.inc'); ?>
</body>
</html>
