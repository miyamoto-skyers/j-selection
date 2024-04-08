<tr>

<th>最多価格帯</th>

<td class="herf"><?php echo $ObjData['most_price_class']; ?></td>

<th>建築条件</th>

<td class="herf"><?php echo ($ObjData['shubetu_cd'] == "3")?"あり":"なし"; ?></td>

</tr>

<tr>

<th>総区画数</th>

<td class="herf"><?php echo $ObjData['sokosu']; ?></td>

<th>販売区画数</th>

<td class="herf"><?php echo $ObjData['sales_cnt']; ?></td>

</tr>

<tr>

<th>土地面積</th>

<td class="herf">
<?php echo $ObjData['land_area_flag']."　"; ?><?php echo $ObjData['land_area_from']; ?><?php echo ($ObjData['land_area_to'] != "")?"～".$ObjData['land_area_to']."m&sup2;":""; ?><br />
<?php echo $ObjData['land_info']; ?>
</td>

<th>造成完了予定年月</th>

<td class="herf"><?php echo $ObjData['chikunen']; ?></td>

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

<th>私道面積</th>

<td class="herf"><?php echo $ObjData['prv_area_flag']."　"; ?><?php echo $ObjData['prv_area']; ?>　<?php echo ($ObjData['prv_mochibun_c'] != "")?"持分：".$ObjData['prv_mochibun_c']."/".$ObjData['prv_mochibun_p']:""; ?></td>

<th>セットバック面積</th>

<td class="herf"><?php echo $ObjData['setback']; ?></td>

</tr>

<tr>

<th>都市計画</th>

<td class="herf"><?php echo $ObjData['city_plan']; ?></td>

<th>地目</th>

<td class="herf"><?php echo $ObjData['land_cd']; ?></td>

</tr>

<tr>

<th>用途地域1</th>

<td class="herf"><?php echo $ObjData['used_cd1']; ?></td>

<th>用途地域2</th>

<td class="herf"><?php echo $ObjData['used_cd2']; ?></td>

</tr>

<tr>

<th>建ぺい率/容積率</th>

<td class="herf"><?php echo $ObjData['kenpei_ritu1']; ?>/<?php echo $ObjData['yoseki_ritu1']; ?></td>

<th>建ぺい率2/容積率2</th>

<td class="herf"><?php echo $ObjData['kenpei_ritu2']; ?>/<?php echo $ObjData['yoseki_ritu2']; ?></td>

</tr>

<tr>

<th>開発許可番号</th>

<td class="herf"><?php echo $ObjData['kyoka_no']; ?></td>

<th>取引態様</th>

<td class="herf"><?php echo $ObjData['trade_form']; ?></td>

</tr>

<tr>

<th>不適合接道</th>

<td class="herf"><?php echo $ObjData['road_unfit']; ?></td>

<th>接道状況</th>

<td class="herf"><?php echo $ObjData['road_status']; ?></td>

</tr>

<tr>

<th>接道詳細</th>

<td colspan="3">

<?php echo $ObjData['road1']; ?>

<?php echo $ObjData['road2']; ?>

<?php echo $ObjData['road3']; ?>

<?php echo $ObjData['road4']; ?>

</td>

</tr>

