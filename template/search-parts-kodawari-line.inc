
<div id="jyoken1">
    <div id="more">
        <p>こだわり条件を選ぶ</p>
        <?php foreach ($KodawariCateg["line"] as $key => $k_array): ?>
            <table id="line_table_<?php echo $key; ?>" style="display: <?php echo ($key == 1) ? "block" : "none" ?>;">
                <?php
                $param_kodawari_checked = implode(",", (array) $Param['kodawari_cd']);
                foreach ($k_array as $category_cd => $category_name) {

                    echo "<tr>\n";
                    echo "<th>" . $category_name . "</th>\n";
                    echo "<td>\n";
                    echo "<ul>\n";

                    foreach ($KodawariJoken["line"][$key] as $keys2 => $tval) {

                        if ($category_cd != $tval['category_cd']) {
                            continue;
                        }

                        $checked = (preg_match("/" . $tval['kodawari_cd'] . "/", $param_kodawari_checked)) ? ' checked' : '';
                        echo "<li>";
                        echo "<label>";
                        echo "<input type=\"checkbox\" name=\"kodawari_cd[]\" id=\"kodawari_cd" . $tval['kodawari_cd'] . "\" value=\"" . $tval['kodawari_cd'] . "\"" . $checked . " />" . $tval['kodawari_name'] . "";
                        echo "</label>";
                        echo "</li>\n";
                    }
                    echo "</ul>\n";
                    echo "</td>\n";
                    echo "</tr>\n";
                }
                ?>
            </table>
        <?php endforeach; ?>
    </div>
</div>
