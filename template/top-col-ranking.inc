<?php
	$ranknum = 1;	// ランキングの順位

	foreach ($ObjectList as $value) {

		$obi_title = ($value['shubetu_cd'] == 5 || $value['shubetu_cd'] == 6) ? $value['object_name'] : $value['shozaichi'];

		$obi_price = "";
		if (($value['koukai_flag'] == "4" && !$is_login) || number_format($value['price_from']) == "0"){
			$obi_price = "未定";
		}else if($value['koukai_flag'] == "3"){
			$obi_price = "成約御礼";
		}else{
			$obi_price = "".number_format($value['price_from'])." 万円".(($value['price_to']!="")?" ～ ".number_format($value['price_to'])." 万円":"").(($value['tax_kbn'] == "1")?"（税込み）":"");
		}

		$shubetu_class = "cyuko";
		     if ($Param['sbt'] == 3) { $shubetu_class = "tochi"; }
		else if ($Param['sbt'] == 5) { $shubetu_class = "mansion"; }
?>
<li>
<a href="/detail/<?php echo $value['shubetu_cd']; ?>/<?php echo $value['regist_cd']; ?>/">
<div class="photo">
<img src="<?php echo ($value['image_file1']!="")?$value['image_file1']:"/image/NO_PHOTO.jpg"; ?>" alt="<?php echo $obi_title; ?>">
<p class="<?php echo $shubetu_class; ?>"><?php echo $value['shubetu_name']; ?></p>
<p class="rank"><img src="/image/rank_icon_<?php echo $ranknum; ?>.png" alt="<?php echo $ranknum; ?>位"></p>
<div class="outline">
<p class="price"><?php echo $obi_price; ?></p>
<p class="add"><?php echo $value['shozaichi']; ?><br>
<?php echo $value['object_name']; ?>
</p>
<!--/outline-->
</div>
<!--/photo-->
</div>
</a>
</li>
<?php

		$ranknum++;
	}
?>
