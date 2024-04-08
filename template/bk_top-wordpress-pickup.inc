<?php
$posts = get_posts('category=2&showposts=4');
global $post;
?>
<?php
	if($posts) {
		foreach($posts as $post) {
			setup_postdata($post);

			// NEW表示するときは↓これで
			$entry = get_the_time('U');
			$kiji = date('U',($today - $entry)) / 86400 ;
			// if( $days > $kiji ){ echo '<img src="/img/common/new01.png" alt="NEW" class="pc"><img src="/img/common/sp_new01.png" alt="NEW" class="sp">'; }

			// カテゴリ
			$category_class = "";

			$categories = get_the_category($post->ID);
			//echo "<!-- get_the_category() = ".$categories[0]->term_id.", ".$categories[0]->name." -->\n";

			switch ($categories[0]->term_id) {
				case 2: 	// (新着情報)
					$category_class = "news";
					break;
				default: 
					$category_class = "news";
					break;
			}
?>
<dl>
<dt><?php the_time( 'Y/m/d' ); ?><span class="<?php echo $category_class; ?>"><?php echo strtoupper($category_class); ?></span></dt>
<dd><a href="<?php the_permalink();?>"><?php the_title(); ?></a></dd>
</dl>
<?php
		}
	}
?>



<p class="title"><span>イベント</span></p>
<?php
$posts = get_posts('category=6&showposts=4');
global $post;
?>
<?php
	if($posts) {
		foreach($posts as $post) {
			setup_postdata($post);

			// NEW表示するときは↓これで
			$entry = get_the_time('U');
			$kiji = date('U',($today - $entry)) / 86400 ;
			// if( $days > $kiji ){ echo '<img src="/img/common/new01.png" alt="NEW" class="pc"><img src="/img/common/sp_new01.png" alt="NEW" class="sp">'; }

			// カテゴリ
			$category_class = "";

			$categories = get_the_category($post->ID);
			//echo "<!-- get_the_category() = ".$categories[0]->term_id.", ".$categories[0]->name." -->\n";

			switch ($categories[0]->term_id) {
				case 6: 	// (イベント)
					$category_class = "event";
					break;
				default: 
					$category_class = "news";
					break;
			}
?>
<dl>
<dt><?php the_time( 'Y/m/d' ); ?><span class="<?php echo $category_class; ?>"><?php echo strtoupper($category_class); ?></span></dt>
<dd><a href="<?php the_permalink();?>"><?php the_title(); ?></a></dd>
</dl>
<?php
		}
	}
?>