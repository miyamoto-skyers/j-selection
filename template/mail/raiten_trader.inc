<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>
ホームページよりお問い合わせがありました。
既に登録済みのお客様です。
顧客コード：<?php echo $Param['kokyaku_cd']; ?>

<?php }else{ ?>
ホームページよりお問い合わせがありました。
<?php } ?>


＞ 来店・案内のご希望について
ご来店希望日時：
[第一希望] <?php echo $Param['toiawase_naiyou1']; ?>

[第二希望] <?php echo $Param['toiawase_naiyou2']; ?>

ご来店される店舗：<?php echo $Param['toiawase_naiyou3']; ?>


その他ご連絡事項など：
<?php echo $Param['free_text']; ?>


<?php include(__DIR__.'/common_kokyaku.inc'); ?>

