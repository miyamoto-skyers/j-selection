<table>
<tr>
<th>お名前<span class="must">必須</span></th>
<td><?php echo $Param['kokyaku_name']; ?><?php echo $err_kokyaku_name; ?></td>
</tr>
<tr>
<th>ふりがな<span class="must">必須</span></th>
<td><?php echo $Param['kokyaku_name_kn']; ?><?php echo $err_kokyaku_name_kn; ?></td>
</tr>
<tr>
<th>ご住所</th>
<td>
〒 <?php echo $Param['zip_code']; ?><?php echo $err_zip_code?><br />
<?php echo $Param['kokyaku_addr1']; ?><?php echo $err_kokyaku_addr1; ?>
</td>
</tr>
<tr>
<th>電話番号<span class="must">必須</span></th>
<td><?php echo $Param['kokyaku_tel1']; ?><?php echo $err_kokyaku_tel1; ?><?php echo $err_nophone; ?></td>
</tr>
<tr>
<th>メールアドレス<span class="must">必須</span></th>
<td><?php echo $Param['mail_addr1']; ?><?php echo $err_mail_addr1; ?></td>
</tr>
<tr>
<th>パスワード</th>
<td><?php echo $Param['my_page_passwd']; ?><?php echo $err_my_page_passwd?>
</td>
</tr>
<!--tr>
<th>リニュアル仲介本部への登録</th>
<td><?php echo $Param['toiawase_naiyou']; ?></td>
</tr-->
<tr>
<th>当社を知ったきっかけ</th>
<td>
<?php echo $Param['what_baibai']; ?>
</td>
</tr>
</table>
