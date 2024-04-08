<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>
センチュリーClubホームページより会員情報の変更がありました。
既に登録済みのお客様です。
顧客コード：<?php echo $Param['kokyaku_cd']; ?>

<?php }else{ ?>
センチュリーClubホームページより新規会員登録がありました。
<?php } ?>

<?php include(__DIR__.'/common_joken.inc'); ?>

<?php include(__DIR__.'/common_member.inc'); ?>

