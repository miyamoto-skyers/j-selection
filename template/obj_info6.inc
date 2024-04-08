<th>総区画数</th>

<td class="herf"><?php echo $ObjData['sokosu']; ?></td>

<th>建物構造</th>

<td class="herf"><?php echo $ObjData['kozo']; ?></td>

</tr>

<tr>

<th>利回り</th>

<td class="herf"><?php echo $ObjData['rimawari']; ?></td>

<th>満室時年収</th>

<td class="herf"><?php echo $ObjData['manshitsu_nenshu']; ?></td>

</tr>

<tr>

<th>土地面積</th>

<td class="herf">
<?php echo $ObjData['land_area_flag']."　"; ?><?php echo $ObjData['land_area_from']; ?><?php echo ($ObjData['land_area_to'] != "")?"～".$ObjData['land_area_to']."m&sup2;":""; ?><br />
<?php echo $ObjData['land_info']; ?>
</td>

<th>建物面積</th>

<td class="herf"><?php echo $ObjData['bld_area_from']; ?><?php echo ($ObjData['bld_area_to'] != "")?"～".$ObjData['bld_area_to']."m&sup2;":""; ?></td>

</tr>

<tr>

<tr>

<th>専有面積</th>

<td class="herf"><?php echo $ObjData['senyu_area']; ?></td>

<th>バルコニー面積</th>

<td class="herf"><?php echo $ObjData['balcony']; ?></td>

</tr>

<tr>

<th>部屋階数</th>

<td class="herf"><?php echo $ObjData['floor_num']; ?></td>

<th>間取り</th>

<td class="herf"><?php echo $ObjData['layout']; ?><?php echo $ObjData['layout_detail']; ?></td>

</tr>

<tr>

<th>築年月</th>

<td class="herf"><?php echo $ObjData['chikunen']; ?></td>

<th>開発許可番号</th>

<td class="herf"><?php echo $ObjData['kyoka_no']; ?></td>

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

<tr>

<th>駐車場</th>

<td class="herf">
<?php echo $ObjData['parking']; ?><br />
<?php echo $ObjData['parking_kbn'].((!empty($ObjData['parking_area'])) ? $ObjData['parking_area']."m&sup2;" : ""); ?>
<?php echo ((!empty($ObjData['parking_biko'])) ? "(".$ObjData['parking_biko'].")" : ""); ?>
</td>

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

