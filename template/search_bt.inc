<p class="count"> 全<span class="cnt1"><?php echo ($ObjectCnt[1] + $ObjectCnt[2]); ?></span>件登録されています。 センチュリークラブ入会で更に<span class="cnt3"><?php echo $ObjectCnt[2]; ?></span>件の物件がご覧頂けます。 

<!--/count--> 

</p>

<ul class="search_tab">

<li><a <?php if ($_SERVER['REQUEST_URI'] != "/search/map/") { ?>class="active" <?php } ?>href="/search/#area_search"><span>エリア</span><br class="pchd">から探す</a></li>

<li><a href="/search/#rosen_search"><span>路線</span><br class="pchd">から探す</a></li>

<li><a href="/search/#school_search"><span>学校</span><br class="pchd">から探す</a></li>

<li class="sphd"><a <?php if ($_SERVER['REQUEST_URI'] == "/search/map/") { ?>class="active" <?php } ?>href="/search/map/"><span>マップ</span><br class="pchd">から探す</a></li>

<li><a href="/search/#pay_search"><span>月々の支払い</span><br class="pchd">から探す</a></li>

<li><a href="/search/#freew_search"><span>フリーワード</span><br class="pchd">で探す</a></li>

</ul>

