<?php echo $Param['kokyaku_name']; ?>　様



<?php if (isset($KOKYAKU['kokyaku_cd'])){ ?>

いつもご愛顧いただき、誠にありがとうございます。

ご入力いただいた内容で、登録情報を更新しました。

<?php }else{ ?>

センチュリーClubに新規会員登録いただき、ありがとうございます。



今まで閲覧できなかったページもログインすることによりご覧いただけます。

是非住まい探しにお役立てください。?

https://www.j-selection.co.jp/

<?php } ?>



<?php include(__DIR__.'/common_joken.inc'); ?>



<?php include(__DIR__.'/common_member.inc'); ?>





<?php echo $ShopData['mail_footer']; ?>