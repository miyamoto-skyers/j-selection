<tr>

<th>専有面積</th>

<td class="herf"><?php echo $ObjData['senyu_area']; ?></td>

<th>バルコニー面積</th>

<td class="herf"><?php echo $ObjData['balcony']; ?></td>

</tr>

<tr>

<th>総戸数</th>

<td class="herf"><?php echo $ObjData['sokosu']; ?></td>

<th></th>

<td class="herf"></td>

</tr>

<tr>

<th>建物構造</th>

<td class="herf"><?php echo $ObjData['kozo']; ?></td>

<th>所在階</th>

<td class="herf"><?php echo $ObjData['floor_num']; ?></td>

</tr>

<tr>

<th>築年月</th>

<td class="herf"><?php echo $ObjData['chikunen']; ?></td>

<th>新築・中古</th>

<td class="herf"><?php echo $ObjData['shubetu_shin_flag']; ?></td>

</tr>

<tr>

<th>間取り</th>

<td class="herf"><?php echo $ObjData['layout']; ?><?php echo $ObjData['layout_detail']; ?></td>

<th>間取り詳細</th>

<td class="herf">

<?php echo $ObjData['detail_layout']; ?>

</td>

</tr>

<tr>

<th>現況</th>

<td class="herf"><?php echo $ObjData['status']; ?></td>

<th>引渡時期</th>

<td class="herf"><?php echo $ObjData['delivery']; ?></td>

</tr>

<tr>

<th>土地権利</th>

<td class="herf"><?php echo $ObjData['land_right']; ?></td>

<th>借地料</th>

<td class="herf"><?php echo $ObjData['land_rent']; ?></td>

</tr>

<tr>

<th>駐車場</th>

<td class="herf">
<?php echo $ObjData['parking']; ?><br />
<?php echo $ObjData['parking_kbn'].((!empty($ObjData['parking_area'])) ? $ObjData['parking_area']."m&sup2;" : ""); ?>
<?php echo ((!empty($ObjData['parking_biko'])) ? "(".$ObjData['parking_biko'].")" : ""); ?>
</td>

<th>駐車場料金</th>

<td class="herf"><?php echo $ObjData['parking_price']; ?></td>

</tr>

<tr>

<th>管理形態</th>

<td class="herf"><?php echo $ObjData['kanri_keitai']; ?></td>

<th>管理人</th>

<td class="herf"><?php echo $ObjData['kanrinin']; ?></td>

</tr>

<tr>

<th>管理費</th>

<td class="herf"><?php echo $ObjData['kanrihi']; ?></td>

<th>修繕積立金</th>

<td class="herf"><?php echo $ObjData['tsumitatekin']; ?></td>

</tr>

<tr>

<th>その他費用</th>

<td class="herf">
<?php //echo $ObjData['other_price']; ?>
<?php if (!empty($ObjData['sonota_hiyou_info1'])) { echo $ObjData['sonota_hiyou_info1']."<br />"; } ?>
<?php if (!empty($ObjData['sonota_hiyou_info2'])) { echo $ObjData['sonota_hiyou_info2']."<br />"; } ?>
</td>

<th>取引態様</th>

<td class="herf"><?php echo $ObjData['trade_form']; ?></td>

</tr>

<th>内装リフォーム年月</th>

<td class="herf">
<?php echo $ObjData['in_reform']; ?>
<?php echo ($ObjData['in_reform_pt_other'] != "")?"<br>".$ObjData['in_reform_pt_other']:""; ?>
</td>

<th>外装リフォーム年月</th>

<td class="herf">
<?php echo $ObjData['out_reform']; ?><?php echo ($ObjData['out_reform_pt'] == "1")?"（大規模修繕）":""; ?>
<?php echo ($ObjData['out_reform_pt_other'] != "")?"<br>".$ObjData['out_reform_pt_other']:""; ?>
</td>

</tr>

