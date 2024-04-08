<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>
ホームページよりお問い合わせがありました。
既に登録済みのお客様です。
顧客コード：<?php echo $Param['kokyaku_cd']; ?>

<?php }else{ ?>
ホームページよりお問い合わせがありました。
<?php } ?>

<?php include(__DIR__.'/common_object.inc'); ?>
来店・案内のご希望：<?php echo $Param['toiawase_naiyou']; ?>


見学に関してご要望・ご質問など：
<?php echo $Param['free_text']; ?>


<?php include(__DIR__.'/common_kokyaku.inc'); ?>

