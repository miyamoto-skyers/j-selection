<!DOCTYPE HTML>
<html>
    <head>
        <!-- Google Tag Manager -->
        <script>(function (w, d, s, l, i) {
                w[l] = w[l] || [];
                w[l].push({'gtm.start':new Date().getTime(), event: 'gtm.js'});
                var f = d.getElementsByTagName(s)[0],j = d.createElement(s), dl = l != 'dataLayer' ? '&l=' + l : '';
                j.async = true;
                j.src = 'https://www.googletagmanager.com/gtm.js?id=' + i + dl;
                f.parentNode.insertBefore(j, f);
            })(window, document, 'script', 'dataLayer', 'GTM-NKFL2BN');</script>
        <!-- End Google Tag Manager -->
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width" />
        <title>エリアから探す｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
        <meta name="Description" content="物件検索（エリアから探す）" />
        <meta name="Keywords" content="物件検索,エリアから探す,センチュリー21住宅セレクション,神奈川県平塚市,秦野市,茅ヶ崎市,寒川町,不動産,売買専門" />
        <link rel="stylesheet" href="/css/style.css" />
        <link rel="stylesheet" href="/css/search.css" />
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
            (function ($) {
                $(function () {
                    $('#spheader').meanmenu({
                        onePage: true,
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

        <!-------------------------------
        toggle 表示・非表示
        --------------------------------->
        <script type="text/javascript">
            $(function () {
                $(".addbt").click(function () {
                    $($(this).next(".kodawari")).animate(
                            {height: "toggle", opacity: "toggle"},
                            "nomal"
                            );
                });

                $('.search_btn').click(function () {
                    var myid = $(this).attr('id');
                    $('#searchf_' + myid).submit();
                    });
            });
        </script>
        <script type="text/javascript" src="/js_arcs/objsearch.js"></script>
        <script type="text/javascript" src="/js_arcs/ajax_object_cnt.js"></script>
        <script type="text/javascript" src="/js_arcs/ajax_kodawari_search.js"></script>
        <script type="text/javascript" src="/js_arcs/line_parameter.js"></script>
        
        <!-- Google Tag Manager -->
        <script>(function (w, d, s, l, i) {
                w[l] = w[l] || [];
                w[l].push({'gtm.start':
                            new Date().getTime(), event: 'gtm.js'});
                var f = d.getElementsByTagName(s)[0],
                        j = d.createElement(s), dl = l != 'dataLayer' ? '&l=' + l : '';j.async = true;j.src =
                        'https://www.googletagmanager.com/gtm.js?id=' + i + dl;f.parentNode.insertBefore(j, f);
            })(window, document, 'script', 'dataLayer', 'GTM-5GPT3H');</script>
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


<script>
$(function(){
    var shubetu_anchor = window.location.hash;
    var shubetu_anchor_id = shubetu_anchor.replace("#", "");
    
    if (shubetu_anchor_id == 'kodate_shin'){
        $('#kodate_shin').prop('checked', true);
        $("#area_kodate").val('1'); 
        $("#area_kodate").trigger('click');
    } else {
        $("input[name='shubetu_cd'][id='"+shubetu_anchor_id+"']").prop('checked',true).trigger('click');
    }
  
});
</script>
<script>
$(window).load(function(){
    
    $(".area-sbt").each(function(i, opt){
        if($("#"+opt.id).prop("checked") == true){
            
            if(opt.value=="1,2"){
                if($("#kodate_shin").prop("checked") == true){
                    $("#kodate_shin").prop("checked", false);
                    $("#kodate_shin").trigger("click");
                }
            }
            $("#"+opt.id).trigger("click");
        }
    });
});
</script>
<script>
$(window).load(function(){
    
    $(".area-sbt").each(function(i, opt){
        if($("#"+opt.id).prop("checked") == true){ 
            $("#"+opt.id).trigger("click");
        }
    });
    
    $(".rosen-sbt").each(function(i, opt){
        if($("#"+opt.id).prop("checked") == true){ 
            $("#"+opt.id).trigger("click");
        }
    });
    
    $(".school-sbt").each(function(i, opt){
        if($("#"+opt.id).prop("checked") == true){ 
            $("#"+opt.id).trigger("click");
        }
    });
    
    $(".siharai-sbt").each(function(i, opt){
        if($("#"+opt.id).prop("checked") == true){ 
            $("#"+opt.id).trigger("click");
        }
    });
    
    $(".fword-sbt").each(function(i, opt){
        if($("#"+opt.id).prop("checked") == true){ 
            $("#"+opt.id).trigger("click");
        }
    });
});
</script>
    </head>
    <body>
        <!-- Google Tag Manager (noscript) -->
        <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NKFL2BN"
                          height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
        <!-- End Google Tag Manager (noscript) -->
        <div id="container">
            <?php include(__DIR__ . '/../web/inc/header.inc'); ?>
            <?php include(__DIR__ . '/../web/inc/nav.inc'); ?>
            <div id="contents">
                <div id="sptop" class="pchd">
                    <a href="/loan_consultation/"><img src="/image/sptop.png" alt="住宅ローン審査の通過実績多数!! "></a>
                </div>
                <div id="search">
                    <div class="inner">
                        <ol class="topicPath sphd">
                            <li><a href="/">センチュリー21 住宅セレクション</a></li>
                            <li>物件検索（エリアから探す）</li>
                        </ol>
                        <h1><i class="fas fa-search"></i>　物件検索</h1>
                        <?php include(__DIR__ . '/search_bt.inc'); ?>
                        <!---------------------------------------
                        ▼エリア
                        ---------------------------------------->
                        <form id="searchf_area" method="post" action="/bin/search-list.php" onsubmit="return checkSubmitShiku()">
                            <input type="hidden" id="type" name="type" value="shiku" />  <!-- for ajax_object_cnt.js -->
                            <input type="hidden" id="stype" name="stype" value="area" />

                            <div id="area_search" class="searcnbox">
                                <h2>エリアから探す</h2>
                                <?php include(__DIR__ . '/search-parts-area.inc'); ?>
                                <?php include(__DIR__ . '/search-parts.inc'); ?>

                                <div class="addbt"> こだわり条件を追加する <i class="far fa-plus-square"></i></div>
                                <div class="kodawari">
                                    <?php include(__DIR__ . '/search-parts-kodawari-area.inc'); ?>
                                    <!--/kodawari--> 
                                </div>
                                <!--/searcnbox--> 
                            </div>
                            <div class="submit">
                                <p>この条件の該当件数<span id="shiku_allcnt"><?php echo ($ObjectCnt[1] + $ObjectCnt[2]); ?></span>件</p>
                                <div class="btn">
                                    <input id="search_btn1" type="submit" name="search_btn" class="search_btn" value="上記条件で検索する">
                                </div>
                                <!--/submit--> 
                            </div>
                        </form>

                        <!---------------------------------------
                        ▼路線・駅
                        ---------------------------------------->
                        <form id="searchf_line" method="post" action="/bin/search-list.php" onsubmit="return checkSubmitEki()">
                            <input type="hidden" id="type" name="type" value="eki" />  <!-- for ajax_object_cnt.js -->
                            <input type="hidden" id="stype" name="stype" value="line" />

                            <div id="rosen_search" class="searcnbox">
                                <h2>路線から探す</h2>
                                <?php include(__DIR__ . '/search-parts-line.inc'); ?>
                                <?php include(__DIR__ . '/search-parts.inc'); ?>

                                <div class="addbt">こだわり条件を追加する <i class="far fa-plus-square"></i></div>
                                <div class="kodawari">
                                    <?php include(__DIR__ . '/search-parts-kodawari-line.inc'); ?>
                                    <!--/kodawari--> 
                                </div>
                                <div class="submit">
                                    <p>この条件の該当件数<span id="eki_allcnt"><?php echo ($ObjectCnt[1] + $ObjectCnt[2]); ?></span>件</p>
                                    <div class="btn">
                                        <input id="search_btn1" type="submit" name="search_btn" class="search_btn" value="上記条件で検索する">
                                    </div>
                                    <!--/submit--> 
                                </div>
                                <!--/searcnbox--> 
                            </div>
                        </form>

                        <!---------------------------------------
                        ▼学区
                        ---------------------------------------->
                        <form id="searchf_school" method="post" action="/bin/search.php" onsubmit="return checkSubmitSchoolArea()">
                            <input type="hidden" id="type" name="type" value="school_area" />  <!-- for ajax_object_cnt.js -->
                            <input type="hidden" id="stype" name="stype" value="school" />

                            <div id="school_search" class="searcnbox">
                                <h2>学校から探す</h2>
                                <?php include(__DIR__ . '/search-parts-school.inc'); ?>
                                <div class="submit">
                                <!-- p>この条件の該当件数<span id="school_area_allcnt"><?php echo ($ObjectCnt[1] + $ObjectCnt[2]); ?></span>件</p -->
                                    <p></p>
                                    <div class="btn">
                                        <input id="search_btn1" type="submit" name="search_btn" class="search_btn" value="上記条件で検索する">
                                    </div>
                                    <!--/submit--> 
                                </div>
                                <!--/searcnbox-->
                            </div>
                        </form>

                        <!---------------------------------------
                        ▼月々のお支払い
                        ---------------------------------------->
                        <form id="searchf_siharai" method="post" action="/bin/search-list.php">
                            <input type="hidden" id="type" name="type" value="siharai" />  <!-- for ajax_object_cnt.js -->
                            <input type="hidden" id="stype" name="stype" value="siharai" />

                            <div id="pay_search" class="searcnbox">
                                <h2>月々の支払いから探す</h2>
                                <?php include(__DIR__ . '/search-parts-siharai.inc'); ?>
                                <div class="submit">
                                    <p>この条件の該当件数<span id="siharai_allcnt"><?php echo ($ObjectCnt[1] + $ObjectCnt[2]); ?></span>件</p>
                                    <div class="btn">
                                        <input id="search_btn1" type="submit" name="search_btn" class="search_btn" value="上記条件で検索する">
                                    </div>
                                    <!--/submit--> 
                                </div>
                                <!--/searcnbox-->
                            </div>
                        </form>

                        <!---------------------------------------
                        ▼フリーワード
                        ---------------------------------------->
                        <form id="searchf_fword" method="post" action="/bin/search-list.php">
                            <input type="hidden" id="type" name="type" value="fword" />  <!-- for ajax_object_cnt.js -->
                            <input type="hidden" id="stype" name="stype" value="fword" />

                            <div id="freew_search" class="searcnbox">
                                <h2>フリーワードで探す</h2>
                                <?php include(__DIR__ . '/search-parts-fword.inc'); ?>
                                <div class="submit">
                                    <p>この条件の該当件数<span id="fword_allcnt"><?php echo ($ObjectCnt[1] + $ObjectCnt[2]); ?></span>件</p>
                                    <div class="btn">
                                        <input id="search_btn1" type="submit" name="search_btn" class="search_btn" value="上記条件で検索する">
                                    </div>
                                    <!--/submit--> 
                                </div>
                                <!--/searcnbox-->
                            </div>
                        </form>

                        <!--/inner--> 
                    </div>
                    <!--/bottom--> 
                </div>
                <!--/contents--> 
            </div>
            <?php include(__DIR__ . '/../web/inc/footer.inc'); ?>
            <!--/container--> 
        </div>
        <p class="pagetop"><a href="#container">▲</a></p>
        <?php include(__DIR__ . '/../web/inc/sidebt.inc'); ?>

        <!-- 
        <div id="searchbt" class="pchd">
        <ul>
        <li class="left">該当物件&nbsp;<br>
        <span>12345</span>件</li>
        <li class="right"><a class="send" href="javascript:void(0)" onclick="document.oform.submit();">この条件で検索</a></li>
        </ul>
        </div>
        <script type="text/javascript">
        $(function(){
                $("#searchbt").css({bottom:'-100px'});
                setTimeout(function(){
                        $("#searchbt").stop().animate({bottom:'0'},400);
                },1000);
        });
        </script>
        -->
    </body>
</html>
