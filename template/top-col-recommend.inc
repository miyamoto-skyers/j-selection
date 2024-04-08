<?php
foreach ($ObjectList as $value) {

    $obi_title = $value['shozaichi'];

    $obi_price = "" . number_format($value['price_from']) . " 万円" . (($value['price_to'] != "") ? " ～ " . number_format($value['price_to']) . " 万円" : "") . (($value['tax_kbn'] == "1") ? "（税込み）" : "");
    ?>
    <li>
        <div class="photo">
            <a href="/detail/<?php echo $value['shubetu_cd']; ?>/<?php echo $value['regist_cd']; ?>/">
                <img src="<?php echo ($value['image_file1'] != "") ? $value['image_file1'] : "/image/NO_PHOTO.jpg"; ?>" alt="<?php echo $obi_title; ?>">
            </a>
            <p class="cyuko"><?php echo $value['shubetu_name']; ?></p>
            <div class="outline">
                <p class="price"><?php echo $obi_price; ?></p>
                <p class="add"><?php echo $value['shozaichi']; ?></p>
            </div>
        </div>
        <div class="more">
            <object>
                <a href="/demand/<?php echo $value['regist_cd']; ?>/" target="_blank">この物件に問い合わせ</a>
            </object>
        </div>
    </li>
    <?php
}
?>
