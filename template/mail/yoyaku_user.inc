<?php echo $Param['kokyaku_name']; ?>　様



お問い合わせありがとうございます。

ご質問に関しましては、内容を確認し、ご連絡を差し上げます。



<?php include(__DIR__.'/common_object.inc'); ?>

来店・案内のご希望：<?php echo $Param['toiawase_naiyou']; ?>





見学に関してご要望・ご質問など：

<?php echo $Param['free_text']; ?>





<?php include(__DIR__.'/common_kokyaku.inc'); ?>





<?php echo $ShopData['mail_footer']; ?>