<?php
	if ($Param['stype'] != "kanbai") {
?>
<dl class="check">
<dt><i class="fas fa-caret-down"></i> チェックした物件を</dt>
<?php if ($_GET['stype'] != 'stock'): ?>
<dd class="green"><a href="javascript:;" class="add_btn" id="stock_btn">一括ストック</a></dd>
<?php else: ?>
<dd class="green"><a href="javascript:;" class="add_btn" id="stock_delete_btn">ストック削除</a></dd>
<?php endif; ?>
<dd class="orange"><a href="javascript:;" class="add_btn" id="demand_btn">一括資料請求</a></dd>
</dl>
<?php
	}
?>