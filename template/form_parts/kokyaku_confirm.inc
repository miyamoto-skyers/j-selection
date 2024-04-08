<table>
<tr>
<th>お名前</th>
<td><?php echo $Param['kokyaku_name']; ?><?php echo $err_kokyaku_name; ?></td>
</tr>
<tr>
<th>ふりがな</th>
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
<th>電話番号</th>
<td><?php echo $Param['kokyaku_tel1']; ?><?php echo $err_kokyaku_tel1; ?><?php echo $err_nophone; ?></td>
</tr>
<tr>
<th>メールアドレス</th>
<td><?php echo $Param['mail_addr1']; ?><?php echo $err_mail_addr1; ?></td>
</tr>
<tr>
<th>当社からの連絡方法</th>
<td><?php echo $Param['renraku_hoho']; ?></td>
</tr>
<tr>
<th>当社を知ったきっかけ</th>
<td>
<?php echo $Param['what_baibai']; ?>
</td>
</tr>
</table>
