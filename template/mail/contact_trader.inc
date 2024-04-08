<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>
ホームページよりお問い合わせがありました。
既に登録済みのお客様です。
顧客コード：<?php echo $Param['kokyaku_cd']; ?>
<?php }else{ ?>
ホームページよりお問い合わせがありました。
<?php } ?>

＞ お問い合わせ内容
お問合せ内容：
<?php echo $Param['free_text']; ?>



<?php include(__DIR__.'/common_kokyaku.inc'); ?>

