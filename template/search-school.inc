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
<title>エリアから探す｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="物件検索（エリアから探す）" />
<meta name="Keywords" content="物件検索,エリアから探す,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />

<?php // canonical タグの表示
    echo '<link rel="canonical" href="http://' . $_SERVER['HTTP_HOST'] . $_SERVER['REQUEST_URI'].'">';
?>

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
<!-------------------------------
toggle 表示・非表示
--------------------------------->
<script type="text/javascript">
$(function(){
 $(".addbt").click(function(){
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
<script type="text/javascript" src="/js_arcs/objsearch.js"></script>
<script type="text/javascript" src="/js_arcs/ajax_object_cnt.js"></script>

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
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NKFL2BN"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) -->
<div id="container">
<?php include(__DIR__.'/../web/inc/header.inc'); ?>
<?php include(__DIR__.'/../web/inc/nav.inc'); ?>
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
<!---------------------------------------
▼学区
---------------------------------------->
<form id="searchf_school" method="post" action="/bin/search-list.php" onsubmit="return checkSubmitSchool()">
<input type="hidden" id="stype" name="stype" value="school" />
<input type="hidden" id="type" name="type" value="school" />
<?php echo $hidden_html; ?>

<div id="school_search" class="searcnbox">
<h2>学校から探す</h2>
<?php
if (!empty($EsSchoolList)) {
?>
<dl class="area">
<dt>小学校を選択</dt>
<dd class="station">
<?php
	$param_school_checked = implode(",", (array)$Param['school_cd']);

	foreach ($TownList as $kval) {

		if (!in_array($kval['cd'], (array)$Param['es_shiku_cd'])) { continue; }

		echo "<p class=\"line\">".$kval['nm']."</p>\n";
		echo "<ul>\n";

		foreach ($EsSchoolList as $tval) {

			if($kval['cd'] != $tval['shiku_cd']){ continue; }

			$checked = (preg_match("/".$tval['cd']."/", $param_line_checked)) ? ' checked' : '';

			if($tval['cnt'] == 0){
				echo "<li><input type=\"checkbox\" name=\"school_cd[]\" id=\"".$tval['school_type']."_chk_school_".$tval['cd']."\" value=\"".$tval['cd']."\" disabled><span id=\"".$tval['school_type']."_school_".$tval['cd']."\">".$tval['nm']."</span></li>\n";
			}else{
				echo "<li><input type=\"checkbox\" name=\"school_cd[]\" id=\"".$tval['school_type']."_chk_school_".$tval['cd']."\" value=\"".$tval['cd']."\"".$checked."><span id=\"".$tval['school_type']."_school_".$tval['cd']."\"><a href=\"/list/school/es/".$kval['shiku_cd']."/".$tval['cd']."/".$link_shubetsu."/\">".$tval['nm']."</a>（<span class=\"kensu\">".$tval['cnt']."</span>）</span></li>\n";
			}
		}

		echo "</ul>\n";
	}
?>
</dd>
</dl>
<?php
}

if (!empty($JsSchoolList)) {
?>
<dl class="area">
<dt>中学校を選択</dt>
<dd class="station">
<?php
	foreach ($TownList as $kval) {

		if (!in_array($kval['cd'], (array)$Param['js_shiku_cd'])) { continue; }

		echo "<p class=\"line\">".$kval['nm']."</p>\n";
		echo "<ul>\n";

		foreach ($JsSchoolList as $tval) {

			if($kval['cd'] != $tval['shiku_cd']){ continue; }

			$checked = (preg_match("/".$tval['cd']."/", $param_line_checked)) ? ' checked' : '';

			if($tval['cnt'] == 0){
				echo "<li><input type=\"checkbox\" name=\"school_cd[]\" id=\"".$tval['school_type']."_chk_school_".$tval['cd']."\" value=\"".$tval['cd']."\" disabled><span id=\"".$tval['school_type']."_school_".$tval['cd']."\">".$tval['nm']."</span></li>\n";
			}else{
				echo "<li><input type=\"checkbox\" name=\"school_cd[]\" id=\"".$tval['school_type']."_chk_school_".$tval['cd']."\" value=\"".$tval['cd']."\"".$checked."><span id=\"".$tval['school_type']."_school_".$tval['cd']."\"><a href=\"/list/school/js/".$kval['shiku_cd']."/".$tval['cd']."/".$link_shubetsu."/\">".$tval['nm']."</a>（<span class=\"kensuu\">".$tval['cnt']."</span>）</span></li>\n";
			}
		}

		echo "</ul>\n";
	}
?>
</dd>
</dl>
<?php
}
?>
<div class="submit sphd">
<p>この条件の該当件数<span id="school_allcnt"><?php echo ($ObjectCnt[1] + $ObjectCnt[2]); ?></span>件</p>
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
<?php include(__DIR__.'/../web/inc/footer.inc'); ?>
<!--/container--> 
</div>
<p class="pagetop"><a href="#container">▲</a></p>
<?php include(__DIR__.'/../web/inc/sidebt.inc'); ?>

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
