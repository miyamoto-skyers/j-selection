<?php
   $args = get_posts( array(
     'category' => '2,6',
     'posts_per_page' => 4
   ));
   global $post;

   if($posts):
   foreach( $args as $post ):
   setup_postdata( $post );

   $cat = get_the_category(); 
   $cat = $cat[0];
   $category = $cat -> term_id;
   
   if ($category == 2) {
       $category_class = "news";
   } else {
       $category_class = "event";
   }
 ?>
<dl>
<dt><?php the_time( 'Y/m/d' ); ?><span class="<?php echo $category_class; ?>"><?php echo strtoupper($category_class); ?></span></dt>
<dd><a href="<?php the_permalink();?>"><?php the_title(); ?></a></dd>
</dl>
 <?php
   endforeach;
   endif;
   wp_reset_postdata();
 ?>