＞ お問い合わせいただいた物件
<?php
	foreach ($ObjectList as &$value) {

		$obi_price = "";
		if ($value['koukai_flag'] == "4" || number_format($value['price_from']) == "0"){
			$obi_price = "未定";
		}else if($value['koukai_flag'] == "3"){
			$obi_price = "成約御礼";
		}else{
			$obi_price = number_format($value['price_from'])." 万円".(($value['price_to']!="")?" ～ ".number_format($value['price_to'])." 万円":"").(($value['tax_kbn'] == "1")?"（税込み）":"");
		}
?>
--------------------
物件番号 : <?php echo $value['object_no']; ?>

種別　　 : <?php echo $value['shubetu']; ?>

所在地　 : <?php echo $value['shozaichi']; ?>

路線・駅 : <?php echo $value['rosen_name1']; ?><?php echo $value['eki_name1']; ?>駅　<?php echo $value['traffic1']; ?>

価格　　 : <?php echo $obi_price; ?>

https://<?php echo $_SERVER['SERVER_NAME']; ?>/detail/<?php echo $value['shubetu_cd']; ?>/<?php echo $value['regist_cd']; ?>/
<?php } ?>--------------------

