

<?php



	foreach ($TopicsList as &$value) {

		$obj_link = "<a href=\"/bin/topics-detail.php?topics_cd=".$value['topics_cd']."\" target=\"_blank\">";



		if ($value['topics_url'] != ""){

			$obj_link = "<a href=\"".$value['topics_url']."\" target=\"_blank\">";

		}

?>



<li>

<dl>

<dt><?php echo $value['topics_date_ymd']; ?></dt>

<dd><?php echo $obj_link; ?><?php echo nl2br($value['topics_title']); ?></a>

</dd>

</dl>

</li>

<?php



	}

?>

