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
<title>お客様の声｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="センチュリー21住宅セレクションのお客様の声" />
<meta name="Keywords" content="お客様の声,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />
<link rel="canonical" href=" https://www.j-selection.co.jp/voice/">
<link rel="stylesheet" href="/css/style.css" />
<link rel="stylesheet" href="/css/user.css" />
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
　ページャー
----------------------->
<script type="text/javascript">
$(function(){
	$('.pgj').click(function(){
		location.href = "/voice/" + $(this).attr('vval') + "/";
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


<script type="text/javascript" src="/js_arcs/line_parameter.js"></script>

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
<div id="userpage">
<div class="inner">
<ol class="topicPath sphd">
<li><a href="/">センチュリー21 住宅セレクション</a></li>
<li>お客様の声</li>
</ol>
<h1><i class="far fa-comment-dots"></i>　お客様の声</h1>
<div class="top">
<h2 class="sphd">お客様の声</h2>
<p>「ありがとう」の言葉が私たちの宝です。</p>
<p class="count">現在<span><?php echo $cnt; ?></span>件掲載中です。</p>
<!--/top-->
</div>
<?php
	if ($cnt > 0) {
		foreach ($VoiceList as $value) {
?>
<div class="box">
<h3>「<?php echo $value['voice_title1']; ?>」</h3>
<p class="sub"><?php echo $value['voice_date_y']; ?>年<?php echo $value['voice_date_m']; ?>月　<?php echo $value['voice_name']; ?></p>
<?php if (!empty($value['voice_img_main'])) { ?><div class="image1"><img src="<?php echo $value['voice_img_main']; ?>" alt="<?php echo $value['voice_title1']; ?>"></div><?php } ?>
<div class="voice">
<?php
			for ($i = 1; $i <= 15; $i++) {
				$idx = sprintf("%02d", $i);

				if (!empty($value['block_title'.$idx])) {
?>
<dl>
<dt><?php echo $value['block_title'.$idx]; ?></dt>
<dd><?php echo nl2br($value['block_text'.$idx]); ?></dd>
</dl>
<?php
				}
			}
?>
</div>
<?php if (!empty($value['block_img01'])) { ?><div class="image2"><img src="<?php echo $value['block_img01']; ?>" height="225" alt="<?php echo $value['voice_name']; ?>"></div><?php } ?>
<!--/box-->
</div>
<?php
		}
?>
<!-----▼ページャー------>
<div class="paginate">
<ul>
<?php if ($page_prev != ""){ ?><li class="prev"><a href="javascript:;" class="pgj" vval="<?php echo $page_prev; ?>">前へ</a></li><?php } ?>
<?php
		for ($i = 1; $i <= $all_page_num; $i++) {
			if($i==$Param['page_num']){
				echo '<li><a class="on">'.$i.'</a></li>';
			}else{
				echo '<li><a href="javascript:;" class="pgj" vval="'.$i.'">'.$i.'</a></li>';
			}
		}
?>
<?php if ($page_next != ""){ ?><li class="next"><a href="javascript:;" class="pgj" vval="<?php echo $page_next; ?>">次へ</a></li><?php } ?>
</ul>
</div>
<!-----▲ページャー------>
<?php
	} else {
?>
<div class="box">
<div class="voice">
<dl>
<dt></dt>
<dd>準備中です。もう少々お待ちください。</dd>
</dl>
</div>
<!--/box-->
</div>
<?php
	}
?>

<!--/inner-->
</div>
<!--/user-->
</div>
<!--/contents-->
</div>

<?php include(__DIR__.'/../web/inc/footerbanner.inc'); ?>
<?php include(__DIR__.'/../web/inc/footer.inc'); ?>
<!--/container-->
</div>
<p class="pagetop"><a href="#container">▲</a></p>
<?php include(__DIR__.'/../web/inc/sidebt.inc'); ?>
<?php include(__DIR__.'/../web/inc/footbt.inc'); ?>
</body>
</html>
