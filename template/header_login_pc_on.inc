<ul>
<li class="toplogo"><a href="/"><img src="/image/toplogo.png" alt="センチュリー21 住宅セレクション"></a></li>
<li>ようこそ<span><?php echo $LoginInfo['kokyaku_name']; ?></span>様｜ログイン中</li>
<li><a href="/bin/logout.php">ログアウト</a></li>
<li><a href="#">会員限定<span><?php echo $member_cnt; ?></span>件</a></li>
<li class="regist"><a href="/memberup/">登録情報変更</a></li>
<li class="noline out"><a href="javascript:;" onclick='if(confirm("退会すると、会員物件の閲覧や新着物件のお知らせ配信がご利用できなくなります。\nよろしいですか？")){location.href="/memberdel/";}'>退会手続き</a></li>
</ul>
