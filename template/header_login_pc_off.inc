<form id="loginf" method="post" action="/bin/login.php">
<input type="hidden" name="logined" value="1" />
<input type="hidden" name="keep_login" value="1" />
<ul>
<li class="toplogo"><a href="/"><img src="/image/toplogo.png" alt="センチュリー21 住宅セレクション"></a></li>
<li>ID <input type="text" name="my_page_id" id="my_page_id" value="" /></li>
<li>PASSWORD <input type="password" name="my_page_passwd" id="my_page_passwd" /></li>
<li><input id="headlogin" type="button" class="login_btn" value="ログイン" onclick="if($('#my_page_id').val() == ''){ alert('IDを入力してください'); return; } if($('#my_page_passwd').val() == ''){ alert('パスワードを入力してください'); return; } $('#loginf').submit(); $('#headlogin').attr('disabled', true);"></li>
<li class="noline"><a href="#">会員限定<span><?php echo $member_cnt; ?></span>件</a></li>
<li class="end"><a href="/merit/">会員登録はこちら</a></li>
</ul>
</form>
