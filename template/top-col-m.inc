<?php

	foreach ($ObjectList as $value) {



		$obj_link = "/detail/".$value['shubetu_cd']."/".$value['regist_cd']."/";



		if (($value['koukai_flag'] == "2" || $value['koukai_flag'] == "4") && !$is_login){

			$obj_link = "/merit/";

		}



		$kakaku_view = '<span class="kakaku">'.number_format($value['price_from']).'</span>万円'.(($value['price_to']!="") ? '～' : '');

		if (($value['koukai_flag'] == "4" && !$is_login) || number_format($value['price_from']) == "0"){

			$kakaku_view = '<span class="kakaku">未定</span>';



		}else if($value['koukai_flag'] == "3"){

			$kakaku_view = '<span class="kakaku">成約御礼</span>';



		}

?>

<li>

<a href="<?php echo $obj_link; ?>">

<p class="top"><span class="cyuko"><?php echo $value['shubetu_name']; ?></span><br><?php echo $kakaku_view; ?></p>

<p class="add"><?php echo $value['shozaichi']; ?></p>

<p class="access"><?php echo $value['rosen_name1'].$value['eki_name1']."駅 ".$value['traffic1']; ?></p>

<div class="photo"><img src="<?php echo ($value['image_file1']!="")?$value['image_file1']:"/image/NO_PHOTO.jpg"; ?>" alt="<?php echo $value['shozaichi']; ?>"></div>

</a>

</li>

<?php

	}

?>

