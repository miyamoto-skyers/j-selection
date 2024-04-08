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
<title>スタッフ紹介｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="センチュリー21住宅セレクションのスタッフ紹介" />
<meta name="Keywords" content="スタッフ紹介,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />
<link rel="stylesheet" href="/css/style.css" />
<link rel="stylesheet" href="/css/staff.css" />
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
　画像拡大
----------------------->
<link rel="stylesheet" type="text/css" href="/colorbox/colorbox.css">
<script type="text/javascript" src="/colorbox/jquery.colorbox-min.js"></script>
<script>
$(function() {
$(".imgbox").colorbox();
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
<div id="sptop" class="pchd"> <a href="/loan_consultation/"><img src="/image/sptop.png" alt="住宅ローン審査の通過実績多数!! "></a> </div>
<div id="staff_detail">
<div class="inner">
<ol class="topicPath sphd">
<li><a href="/">センチュリー21 住宅セレクション</a></li>
<li><a href="/staff/">スタッフ紹介</a></li>
<li><?php echo $StaffData['staff_intro_name']; ?></li>
</ol>
<h1><?php echo $StaffData['staff_intro_name']; ?></h1>
<div class="profile">
<div class="photo"> <img src="<?php echo $StaffData['staff_intro_img_main']; ?>" alt="<?php echo $StaffData['staff_intro_name']; ?>"><!--/photo--> 
</div>
<div class="comment">
<table>
<?php
	for ($i = 1; $i <= 15; $i++) {
		$idx = sprintf("%02d", $i);

		if (!empty($StaffData['block_title'.$idx]) || !empty($StaffData['block_text'.$idx])) {
?>
<tr>
<th><?php echo $StaffData['block_title'.$idx]; ?></th>
<td><?php echo nl2br($StaffData['block_text'.$idx]); ?></td>
</tr>
<?php
		}
	}
?>
</table>
<!--/comment--> 
</div>
<!--/profile--> 
</div>
<div class="thumb"> 
<ul>
<?php
	for ($i = 1; $i <= 15; $i++) {
		$idx = sprintf("%02d", $i);

		if (!empty($StaffData['block_img'.$idx])) {
?>
<li><a href="<?php echo $StaffData['block_img'.$idx]; ?>" class="imgbox"><img src="<?php echo $StaffData['block_img'.$idx]; ?>" alt="<?php echo $StaffData['staff_intro_name']; ?>"></a></li>
<?php
		}
	}
?>
</ul>
<!--/thumb--> 
</div>
<div class="backbt"> <a href="/staff/">スタッフ一覧へ</a> 
<!--/thumb--> 
</div>

<ul class="cvbt">
<li><a href="/loan/" target="_blank"><img src="/image/lp/bt_mail_off.png" alt="メールで住宅ローン相談する"/></a></li>
<li><a href="https://line.me/ti/p/R4cpIkL-l_#~" class="loan-line-btn" target="_blank"><img src="/image/lp/bt_line_off.png" alt="LINEで住宅ローン相談する"/></a></li>
<li><a href="/company/" target="_blank"><img src="/image/lp/bt_tel_off.png" alt="電話で住宅ローン相談する"/></a></li>
</ul>
<div class="sp_responsedevice">
<p><a class="inq" href="/loan/"><img src="/image/lp/bt_mail_off.png" alt="メールで住宅ローン相談する"></a></p>
</div>
<div class="sp_responsedevice">
<p><a class="inq loan-line-btn" href="https://line.me/ti/p/R4cpIkL-l_#~" target="_blank"><img src="/image/lp/bt_line_off.png" alt="LINEで住宅ローン相談する"></a></p>
</div>
<div class="sp_responsedevice">
<p><a class="inq" href="tel:0120035034" target="_blank"><img src="/image/lp/bt_tel_off.png" alt="電話で住宅ローン相談する"></a></p>
</div>
<!--/inner--> 
</div>
<!--/staff_detail--> 
</div>



<!--/contents--> 
</div>
<?php include(__DIR__.'/../web/inc/footer.inc'); ?>
<!--/container--> 
</div>
<p class="pagetop"><a href="#container">▲</a></p>
<?php include(__DIR__.'/../web/inc/sidebt.inc'); ?>
<?php include(__DIR__.'/../web/inc/footbt.inc'); ?>
</body>
</html>
