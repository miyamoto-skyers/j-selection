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
<meta name="robots" content="noindex, nofollow">
<meta name="viewport" content="width=device-width" />
<title>センチュリーClubログイン｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="センチュリー21住宅セレクションのセンチュリーClubログイン" />
<meta name="Keywords" content="おすすめ物件,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />
<link rel="stylesheet" href="/css/style.css" />
<link rel="stylesheet" href="/css/login.css" />
<link href="https://use.fontawesome.com/releases/v5.0.6/css/all.css" rel="stylesheet">
<!--&#91;if lt IE 9&#93;>
<script src="//cdn.jsdelivr.net/html5shiv/3.7.2/html5shiv.min.js"></script>
<script src="//cdnjs.cloudflare.com/ajax/libs/respond.js/1.4.2/respond.min.js"></script>
<!&#91;endif&#93;-->
<script src="https://code.jquery.com/jquery-latest.js"></script>
<script type="text/javascript">
$(function(){
	$('.forget_btn').click(function(){

		if($('#mail_addr1').val() == ''){
			alert('メールアドレスを入力してください');
			return;
		}
		$('#forgetf').submit();
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
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NKFL2BN"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) -->
<div class="box_stock">
<div class="tit">パスワードをお忘れの方</div>
<div class="stock_bt">
<?php
	if($is_ok) {
?>
<p>入力されたメールアドレス宛にパスワードを送信しました。</p>
<ul>
<li><div class="bt"><a href="/login/" class="css_btn_class_g maru" target="_parent">閉じる</a></div></li>
</ul>
<?php
	}else{
?>
<p>メールアドレスを入力して、送信するを押して下さい。<br />
メールアドレス宛にパスワードが記載されたメールを送信します。</p>
<form id="forgetf" method="post" action="/bin/forget.php">
<?php echo ($error_msg!="")?"<p style=\"color:red;\">".$error_msg."</p>":""; ?>
<ul>
<li>
<p>メールアドレス :
<input class="ipt" name="mail_addr1" id="mail_addr1" type="text" value="<?php echo (isset($Param['mail_addr1']))?$Param['mail_addr1']:""; ?>" />
</p>
<div class="bt">
<input class="css_btn_class_r maru forget_btn" type="button" value="≫ 送信する">
</div>
</li>
<li>
<div class="bt"><a href="/" class="css_btn_class_g maru" target="_blank">TOPページへ</a></div>
</li>
</ul>
</form>
<?php
	}
?>

<!--stock_bt--> 
</div>

<!--box--> 
</div>
</body>
</html>
