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
<title>MAPから探す｜センチュリー21住宅セレクション: 神奈川エリアの不動産売買専門</title>
<meta name="Description" content="物件検索（エリアから探す）" />
<meta name="Keywords" content="物件検索,MAPから探す,センチュリー21住宅セレクション,神奈川県藤沢市,茅ヶ崎市,平塚市,寒川町,不動産,売買専門" />
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
MAP検索
--------------------------------->
<script type="text/javascript" src="/js_arcs/ajax_req.js"></script>
<script type="text/javascript" src="/js_arcs/mapsearch.js"></script>
<!-- script type="text/javascript" src="//maps.google.com/maps/api/js?sensor=false"></script -->
<script src="//maps.googleapis.com/maps/api/js?key=AIzaSyAq33kvB9x5JbNSyWt7ICPCe6n5oAQcKb4"></script>
<script type="text/javascript">
<!--

	var mapObj;
	var openInfoWindow;
	var markerData;
	var markerArray = new Array();
	var icon = new Array();
	icon[1] = '/image/map-icon01.png';
	icon[2] = '/image/map-icon02.png';
	icon[3] = '/image/map-icon03.png';
	icon[4] = '/image/map-icon03.png';
	icon[5] = '/image/map-icon04.png';

	google.maps.event.addDomListener(window, 'load', function(){

		marker_list1=new google.maps.MVCArray();

		var lat = '35.327887';
		var lng = '139.350645';
		var latlng = new google.maps.LatLng(lat, lng);

		var mapOptions = {
			zoom: 12,
			center: latlng,
			mapTypeId: google.maps.MapTypeId.ROADMAP,
			zoomControl: false, 
			scrollwheel: false,
			disableDoubleClickZoom: true,
			streetViewControl: false
		};

		mapObj = new google.maps.Map(document.getElementById('mymap'), mapOptions);

		google.maps.event.addListenerOnce(mapObj, 'idle', function(){
			refleshMarker();
		})

//		google.maps.event.addListener(mapObj, 'tilesloaded', function(){
//			refleshMarker();
//		})
		google.maps.event.addListener(mapObj, 'dragend', function(){
			refleshMarker();
		})
		google.maps.event.addListener(mapObj, 'zoom_changed', function(){
			refleshMarker();
		})


	});

	window.onload = function(){
		refleshMarker();
	}

// ---------------------------------------------------------------- //
//  ajax_req_chou ---- 市区町村→町プルダウン作成
// ---------------------------------------------------------------- //
function ajax_req_chou(f_shiku_cd, f_chou_cd) {
	if (f_shiku_cd.value == '') {
		f_chou_cd.options[0] = new Option('町名を選択', '');
		f_chou_cd.length = 1;
		return true;
	}

	var param = "tb=5&kd=" + f_shiku_cd.value;
	url = "/bin/get_ajax_req.php";

	$.get(url, param, 
		function(httpObj){
			make_opt_list(httpObj, f_chou_cd, '町名を選択');
		}
	);

	return true;
}
//-->
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
<div id="container">
<?php include(__DIR__.'/../web/inc/header.inc'); ?>
<?php include(__DIR__.'/../web/inc/nav.inc'); ?>
<div id="contents">
<div id="search">
<div class="inner">
<ol class="topicPath sphd">
<li><a href="/">センチュリー21 住宅セレクション</a></li>
<li>物件検索（MAPから探す）</li>
</ol>
<h1><i class="fas fa-search"></i>　物件検索（MAPから探す）</h1>
<?php include(__DIR__.'/search_bt.inc'); ?>
<div id="mapsearch">

<form name="mform" onsubmit="return showAddress(this);">

<h2>MAPから探す</h2>
<div id="map">
<div id="searchBox">
<table width="100%" border="0" cellspacing="1" cellpadding="0">
<tr>
<th>エリアを指定する</th>
<td valign="middle">
<select name="SHIKU_CD" onchange="ajax_req_chou(this, document.mform.CHO_CD)">
<option value="">都市名を選択</option>
<?php
	foreach ($TownList as $tval) {
		echo "<option value=\"".$tval['cd']."\">".$tval['nm']."</option>\n";

	}
?>
</select>
<select name="CHO_CD">
<option value="">町名を選択</option>
</select>
<input type="image" src="/image/freeword-bt.png" alt="検索" border="0" width="100" height="22" align="middle" onmouseover="this.src='/image/freeword-bt_on.png'" onmouseout="this.src='/image/freeword-bt.png'" />
</td>
</tr>
<tr>
<th>種別を指定する</th>
<td><ul>
<li><label class="shinchiku"><input type="radio" name="sbt" value="1" onClick="refleshMarker();" checked="checked" />新築一戸建て</label></li>
<li><label class="cyuko"><input type="radio" name="sbt" value="2" onClick="refleshMarker();" />中古一戸建て</label></li>
<li><label class="tochi"><input type="radio" name="sbt" value="3" onClick="refleshMarker();" />土地</label></li>
<li><label class="mansion"><input type="radio" name="sbt" value="5" onClick="refleshMarker();" />マンション</label></li>
</ul></td>
</tr>
</table>
</div>
<div class="zoom">縮小
<input name="zoom_control" type="radio" value="12" onClick="mapObj.setZoom(12);" checked="checked">
<input name="zoom_control" type="radio" value="13" onClick="mapObj.setZoom(13);">
<input name="zoom_control" type="radio" value="14" onClick="mapObj.setZoom(14);">
<input name="zoom_control" type="radio" value="15" onClick="mapObj.setZoom(15);">
拡大</div>
</form>

<div id="mymap" class="mapArea"></div>
<div id="loading"><img src="/image/ajax-loader.gif" width="64" height="64"></div>


<!--/map-->
</div>

<!--/mapsearch-->
</div>
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
</body>
</html>
