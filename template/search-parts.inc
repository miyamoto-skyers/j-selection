<dl class="terms">
<dt>条件を指定して下さい</dt>
<dd>
<table>
<tr>
<th>価格 :</th>
<td><select name="price_from" id="price_from" size="1">
<option value="">下限なし</option>
<?php echo implode("\n",$Sparts['price_from']['opt_list']); ?>
</select>
～
<select name="price_to" id="price_to" size="1">
<option value="">上限なし</option>
<?php echo implode("\n",$Sparts['price_to']['opt_list']); ?>
</select></td>
<th>建物(専有)面積 :</th>
<td><select name="bld_area_from" id="bld_area_from" size="1">
<option value="">下限なし</option>
<?php echo implode("\n",$Sparts['bld_area_from']['opt_list']); ?>
</select>
～
<select name="bld_area_to" id="bld_area_to" size="1">
<option value="">上限なし</option>
<?php echo implode("\n",$Sparts['bld_area_to']['opt_list']); ?>
</select></td>
</tr>
<tr>
<th>土地面積 :</th>
<td><select name="land_area_from" id="land_area_from" size="1">
<option value="">下限なし</option>
<?php echo implode("\n",$Sparts['land_area_from']['opt_list']); ?>
</select>
～
<select name="land_area_to" id="land_area_to" size="1">
<option value="">上限なし</option>
<?php echo implode("\n",$Sparts['land_area_to']['opt_list']); ?>
</select></td>
<th>間取 :</th>
<td><select name="layout_from" id="layout_from">
<option value="">下限なし</option>
<?php echo implode("\n",$Sparts['layout_from']['opt_list']); ?>
</select>
～
<select name="layout_to" id="layout_to">
<option value="">上限なし</option>
<?php echo implode("\n",$Sparts['layout_to']['opt_list']); ?>
</select></td>
</tr>
<tr>
<th>築年数</th>
<td colspan="3"><select name="chikunen" id="chikunen" size="1">
<option value="" checked>指定なし</option>
<?php echo implode("\n",$Sparts['chikunen']['opt_list']); ?>
</select></td>
</tr>
<tr>
<th>徒歩分数：</th>
<td colspan="3">
<?php echo implode("\n",$Sparts['walk_time']['radio_list']); ?>
</td>
</tr>
<tr>
<th>月々のお支払い：</th>
<td colspan="3">
<?php echo implode("\n",$Sparts['tuki_siharai']['radio_list']); ?>
</td>
</tr>
</table>
</dd>
</dl>
