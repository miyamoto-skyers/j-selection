<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>
ホームページより無料査定がありました。
既に登録済みのお客様です。
顧客コード：<?php echo $Param['kokyaku_cd']; ?>

<?php }else{ ?>
ホームページより無料査定がありました。
<?php } ?>


＞ お問い合わせ内容
<?php include(__DIR__.'/common_assessment.inc'); ?>


<?php include(__DIR__.'/common_kokyaku.inc'); ?>

