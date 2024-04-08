<table>
<tr>
<th>ご相談内容<span class="must">必須</span></th>
<td><?php echo implode("・", (array)$Param['toiawase_naiyou1']); ?><?php echo $err_toiawase_naiyou1; ?></td>
</tr>
<tr>
<th>その他のご相談</th>
<td><?php echo nl2br($Param['free_text']); ?><?php echo $err_free_text; ?></td>
</tr>
</table>
