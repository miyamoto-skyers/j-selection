<table class="tbl">
	<tr class="thead">
		<th>物件番号</th>
		<th>所在地</th>
		<th>価格</th>
	</tr>
	<?php
		foreach ($ObjectList as &$value) {
			echo '<tr>';
			echo '<td>'.$value['object_no'].'</td>';
			echo '<td>'.$value['shozaichi'].'</td>';
			echo '<td>'.(($value['price_from'] == 0) ? '未定</p>' : number_format($value['price_from'])).'万円'.((!empty($value['price_to'])) ? "～" : "").'</td>';
			echo '</tr>';
			$reg_cds_arr.= '<input type="hidden" name="reg_cds[]" value="'.$value[regist_cd].'">';
		}
	?>
</table>