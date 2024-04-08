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
<link href="/css/staff.css" rel="stylesheet" type="text/css">

<!-- Google Tag Manager -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-5GPT3H');</script>
<!-- End Google Tag Manager -->


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
<div id="staff">
<div class="inner">
<ol class="topicPath sphd">
<li><a href="/">センチュリー21 住宅セレクション</a></li>
<li>スタッフ紹介</li>
</ol>
<h1><i class="far fa-address-card"></i>　スタッフ紹介</h1>
<?php
	if (count((array)$ShopStaffList['11201']) > 0) {
?>
<h2>平塚店スタッフ</h2>
<ul>
<?php
		foreach ((array)$ShopStaffList['11201'] as $value) {
?>
<li>
<div class="photo"><a href="/staff/<?php echo $value['staff_intro_cd']; ?>/"><img src="<?php echo $value['staff_intro_img_main']; ?>" alt="<?php echo $value['staff_intro_name']; ?>"></a></div>
<p class="name"><?php echo $value['staff_intro_name']; ?></p>
</li>
<?php
		}
?>
</ul>
<?php
	}
?>
<?php
	if (count((array)$ShopStaffList['11202']) > 0) {
?>
<h2>秦野店スタッフ</h2>
<ul>
<?php
		foreach ((array)$ShopStaffList['11202'] as $value) {
?>
<li>
<div class="photo"><a href="/staff/<?php echo $value['staff_intro_cd']; ?>/"><img src="<?php echo $value['staff_intro_img_main']; ?>" alt="<?php echo $value['staff_intro_name']; ?>"></a></div>
<p class="name"><?php echo $value['staff_intro_name']; ?></p>
</li>
<?php
		}
?>
</ul>
<?php
	}
?>
<?php
	if (count((array)$ShopStaffList['11203']) > 0) {
?>
<h2>横浜オフィススタッフ</h2>
<ul>
<?php
		foreach ((array)$ShopStaffList['11203'] as $value) {
?>
<li>
<div class="photo"><a href="/staff/<?php echo $value['staff_intro_cd']; ?>/"><img src="<?php echo $value['staff_intro_img_main']; ?>" alt="<?php echo $value['staff_intro_name']; ?>"></a></div>
<p class="name"><?php echo $value['staff_intro_name']; ?></p>
</li>
<?php
		}
?>
</ul>
<?php
	}
?>
<!--/inner-->
</div>
<!--/staff-->
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
