<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>
ホームページよりお問い合わせがありました。
既に登録済みのお客様です。
顧客コード：<?php echo $Param['kokyaku_cd']; ?>

<?php }else{ ?>
ホームページよりお問い合わせがありました。
<?php } ?>

<?php include(__DIR__.'/common_object.inc'); ?>

<?php include(__DIR__.'/common_toiawase.inc'); ?>

<?php include(__DIR__.'/common_kokyaku.inc'); ?>

