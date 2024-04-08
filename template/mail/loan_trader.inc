<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>

ホームページよりお問い合わせがありました。

既に登録済みのお客様です。

顧客コード：<?php echo $Param['kokyaku_cd']; ?>



<?php }else{ ?>

ホームページよりお問い合わせがありました。

<?php } ?>





＞ お問い合わせ内容

ご相談内容：<?php echo $Param['toiawase_naiyou']; ?>



相談ご希望日：

[第一希望] <?php echo $Param['toiawase_naiyou1']; ?>



[第二希望] <?php echo $Param['toiawase_naiyou2']; ?>



[第三希望] <?php echo $Param['toiawase_naiyou3']; ?>



相談ご希望店：<?php echo $Param['toiawase_naiyou4']; ?>



ご希望の物件のURL：<?php echo $Param['toiawase_naiyou5']; ?>





その他ご連絡事項など：

<?php echo $Param['free_text']; ?>





<?php include(__DIR__.'/common_kokyaku.inc'); ?>



