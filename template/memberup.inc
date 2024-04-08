<!DOCTYPE HTML>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width" />
<title>会員登録フォーム｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="センチュリー21住宅セレクションの会員登録フォーム" />
<meta name="Keywords" content="おすすめ物件,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />
<link rel="stylesheet" href="/css/style.css" />
<link rel="stylesheet" href="/css/form.css" />
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
　フォーム関連
----------------------->
<link rel="stylesheet" href="/css/inputchk.css" type="text/css" />
<script type="text/javascript" src="/js/inputchk.js"></script>
<!--送信チェック-->
<script type="text/javascript">
function sendMail() {
	var ret = checkSubmit();
	if (ret) {
		if(confirm("送信してもよろしいですか？")){
			return true;
		} else {
			return false;
		}
	}
	return ret;
}
</script>
<!--離脱アラート-->
<script>
jQuery(
 function($)
 {
	var loc=false;
     //store onbeforeunload for later use
   $(window).bind("beforeunload", function(e) {
 // 確認メッセージに表示させたい文字列を返します。
 if (!loc) {
 return "お問合せは完了しておりません。このページから移動してもよろしいですか？";
 }
});
//$('a').click( function() {loc=true;});
$("form").submit(function(){loc=true;});
 }
);
</script>
<!-------------------------------
toggle 表示・非表示
--------------------------------->
<script type="text/javascript">
	$(function(){
		
		//最初から非表示
		$('.pvbox').hide();
		$(".open").click(function(){
			$(this).next().slideToggle();
		});
	});
</script>
<script type="text/javascript" src="//ajaxzip3.github.io/ajaxzip3.js" charset="utf-8"></script>

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
<div id="form">
<div class="inner">
<ol class="topicPath sphd">
<li><a href="/">センチュリー21 住宅セレクション</a></li>
<li>会員登録フォーム</li>
</ol>
<h1><i class="fas fa-edit"></i>　センチュリーCLUB会員</h1>

<form id="mailform" method="post" action="/bin/common-contact.php">
<input type="hidden" id="type" name="type" value="<?php echo $Param['type']; ?>" />
<input type="hidden" id="mode" name="mode" value="confirm" />
<?php echo $hidden_html; ?>

<div id="formWrap">
<p class="sub">センチュリーCLUB入会登録フォーム</p>


<h2>ご希望条件</h2>
<?php include(__DIR__.'/form_parts/joken_input.inc'); ?>

<h2>お客様情報</h2>
<?php include(__DIR__.'/form_parts/member_input.inc'); ?>

<div id="privacy">
<p class="open">弊社の<span>会員規約</span>をお読みいただき、すべての内容に同意のうえご登録ください。</p>
<div class="pvbox">
<div class="pv">
<dl>
<dt class="title">会員規約</dt>
<dd>当社のコンテンツサービスをご利用いただくには本規約に従っていただきます。<br>
また、サービスを利用することによって、本規約の内容を承諾いただいたものとみなします。<br>
本規約の内容は必要に応じ予告なく改変することがあります。
</dd>
</dl>

<dl>
<dt>■著作権について </dt>
<dd>
レイアウト、デザインおよび構造に関する著作権は当社に帰属します。<br>
当社が提供する情報、画像等を許可なく複製、転用、販売など二次利用することを禁じます。 <br>
内容の保証 内容の更新や変更、または天災・災害及びシステムの故障等で、やむを得ない事由により掲載を一時的に中断する場合があります。<br>
<br>
当ホームページはご利用の皆様に対して事前にお知らせをすることなく、サービス追加、変更、更新を行います。<br>
同様に、サービスの運営上そのシステムの変更が必要であると判断した場合 には、事前にお知らせをすることなく必要な変更を行うことがあります。 <br>
</dd>
</dl>

<dl>
<dt>■ 損害に対する責務 </dt>
<dd>
当社ホームページで提供している物件情報、会社情報をはじめとする各種情報につきましては、ご利用の皆様に不測の損害・障害・不利益等が発生しない よう適切に努力し、最新かつ正確な情報を掲載するよう注意を払っておりますが、その正確性等について保証をするものではありません。 <br>
したがいまして、ご利用中および当社担当者を介することなく当該情報にもとづいて起こされた行動によって生じた損害・障害・不利益等に対する責任は負いかねます。<br>
<br>
 「サービス追加、変更、更新」や、「天災、災害、システム故障等の理由」により、情報の相違の発生及び、掲載の一時中断が発生することがあります。<br>
 その際に不利益損害が生じた場合でも弊社はその責任を一切負いません。<br> 
 <br>
 当ホームページの利用者は自己の責任で当サイト上の情報やサービスを利用・検討するものとします。<br>
 当社はこれらの情報やサービス提供が原因で発生した損害すべてに対し、いかなる責任をも負わないものとし、一切の損害賠償義務は無いものとします。<br> 
 掲載情報と実物件の照合性について 物件は成約済み、売却済あるいは中止となる場合があります。<br>
 詳細情報、物件の有無は当社に直接ご確認ください。<br>
 この情報と担当者情報に差違がある場合、担当者の情報が優先します。<br>
 また物件の現況は全てに優先します。 
</dd>
</dl>

<dl>
<dt>■ 物件一覧の表記について</dt>
<dd>
バス・徒歩の表記で、バスの表示がある場合の徒歩表示はバス停からの時間となります。
</dd>

</dl>
<dl>
<dt>■ 物件詳細情報の表記について</dt>
<dd>
間取り図、写真がある物件については、詳細欄に縮小表示されています。 
</dd>
</dl>

<dl>
<dt>■ メールによるご案内について</dt>
<dd>
1.会員登録いたしますと、住宅セレクションから定期的にメルマガが届きます。 <br>
2.会員のメールアドレスが変更になった場合や購読不要になった場合は配信を中止できる。
</dd>
</dl>
<!--/pv-->
</div>
<!--/pvbox-->
</div>
<!--/privacy-->
</div>
<div id="submit">
<input type="submit" value="上記内容で確認する" class="css_btn_class" onclick="myFunction()">
</div>
<!--/formWrap-->
</div>
</form>
<!--/inner-->
</div>
<!--/form-->
</div>
<!--/contents-->
</div>
<?php include(__DIR__.'/../web/inc/footer.inc'); ?>
<!--/container-->
</div>
<p class="pagetop"><a href="#container">▲</a></p>
<?php include(__DIR__.'/../web/inc/sidebt.inc'); ?>
</body>
</html>
