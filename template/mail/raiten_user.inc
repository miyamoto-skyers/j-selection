<?php echo $Param['kokyaku_name']; ?>　様



お問い合わせありがとうございます。

ご質問に関しましては、内容を確認し、ご連絡を差し上げます。





＞ 来店・案内のご希望について

ご来店希望日時：

[第一希望] <?php echo $Param['toiawase_naiyou1']; ?>



[第二希望] <?php echo $Param['toiawase_naiyou2']; ?>



ご来店される店舗：<?php echo $Param['toiawase_naiyou3']; ?>





その他ご連絡事項など：

<?php echo $Param['free_text']; ?>





<?php include(__DIR__.'/common_kokyaku.inc'); ?>





<?php echo $ShopData['mail_footer']; ?>