<?php
/**
 * @file
 * campus_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function campus_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Campus Address';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'campus_address';
  $fe_block_boxes->body = '<div class="campus_address">
	<div class="title">
		Address</div>
	<div class="address">
		The Palm Centre Cnr Rokeby and Nicholson Rds Subiaco WA</div>
</div>
<p>Warning: file_exists(): open_basedir restriction in effect. File(/home/langgo/influencerschurch/includes/database/query.inc) is not within the allowed path(s): (.:/data:/mnt:/opt:/srv:/tmp:/usr:/var/aegir:/var/lib/collectd:/var/lib/nginx:/var/run:/var/second:/var/www) in /home/langgo/influencerschurch/includes/database/database.inc on line 1744 Warning: file_exists(): open_basedir restriction in effect. File(/home/langgo/influencerschurch/includes/database/mysql/query.inc) is not within the allowed path(s): (.:/data:/mnt:/opt:/srv:/tmp:/usr:/var/aegir:/var/lib/collectd:/var/lib/nginx:/var/run:/var/second:/var/www) in /home/langgo/influencerschurch/includes/database/database.inc on line 1744</p>
';

  $export['campus_address'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site copyright';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'campus_copyright_menu';
  $fe_block_boxes->body = '<div class="influ_copyright">
	<p class="copyright">Copyright &copy; 2012.</p>
	<p class="copy_link"><a href="http://influencerschurch-vcdev.rhcloud.com">Disclaimer </a>| <a href="http://influencerschurch-vcdev.rhcloud.com">Privacy Policy</a> | <a href="http://influencerschurch-vcdev.rhcloud.com">Term &amp; Conditions</a></p>
</div>
<p>Warning: file_exists(): open_basedir restriction in effect. File(/home/langgo/influencerschurch/includes/database/query.inc) is not within the allowed path(s): (.:/data:/mnt:/opt:/srv:/tmp:/usr:/var/aegir:/var/lib/collectd:/var/lib/nginx:/var/run:/var/second:/var/www) in /home/langgo/influencerschurch/includes/database/database.inc on line 1744 Warning: file_exists(): open_basedir restriction in effect. File(/home/langgo/influencerschurch/includes/database/mysql/query.inc) is not within the allowed path(s): (.:/data:/mnt:/opt:/srv:/tmp:/usr:/var/aegir:/var/lib/collectd:/var/lib/nginx:/var/run:/var/second:/var/www) in /home/langgo/influencerschurch/includes/database/database.inc on line 1744</p>
';

  $export['campus_copyright_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Current campus block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'campus_current';
  $fe_block_boxes->body = '<div class="current_campus">
	<div class="title">
		Campus:</div>
	<div class="campus_name">
		Atlanta</div>
</div>
';

  $export['campus_current'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Dropdown menu in navigation';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'campus_dropdown_menu';
  $fe_block_boxes->body = '<div class="ddm_give">
	<div class="ddm_give_title">
		Give</div>
	<div class="ddm_give_money">
		<a class="active button" href="ddm_place_money">Give money</a></div>
	<div class="ddm_give_time">
		<a class="button" href="ddm_place_time">Give time</a></div>
</div>
<div class="ddm_place">
	<div class="ddm_place_title">
		Global</div>
	<div class="ddm_place_money" id="ddm_place_money">
		<ul>
			<li class="item-title">
				Australia
				<ul>
					<li>
						Paradise</li>
					<li>
						Adelaide City</li>
					<li>
						Adelaide North</li>
					<li>
						Perth</li>
				</ul>
			</li>
			<li class="item-title">
				USA
				<ul>
					<li>
						Atlanta</li>
				</ul>
			</li>
			<li class="item-title">
				Sourth Africa
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
			<li class="item-title">
				Papua New Guinea
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
		</ul>
	</div>
	<div class="ddm_place_time" id="ddm_place_time">
		<ul>
			<li class="item-title">
				Australia
				<ul>
					<li>
						Paradise</li>
					<li>
						Adelaide City</li>
					<li>
						Perth</li>
				</ul>
			</li>
			<li class="item-title">
				USA
				<ul>
					<li>
						Atlanta</li>
				</ul>
			</li>
			<li class="item-title">
				Sourth Africa
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
			<li class="item-title">
				Papua New Guinea
				<ul>
					<li>
						Coming soon</li>
				</ul>
			</li>
		</ul>
	</div>
</div>
';

  $export['campus_dropdown_menu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'New Influencer Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'campus_new_influencer';
  $fe_block_boxes->body = '<div class="be_an_influencer">
	<div class="iam_new">
		<a href="i-am-new">I&#39;m new</a></div>
	<div class="be_an_influencer">
		<a href="influencer">Be an Influencer</a></div>
</div>
<p>&nbsp;</p>
';

  $export['campus_new_influencer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Campus Service Times';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'campus_service_time';
  $fe_block_boxes->body = '<div class="campus_service_times">
	<div class="title">
		Service Times</div>
	<ul class="times">
		<li>
			9:30 AM</li>
		<li>
			11:30 AM</li>
		<li>
			5:30 PM</li>
		<li>
			7:30 PM</li>
	</ul>
</div>
<p>&nbsp;</p>
';

  $export['campus_service_time'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Display user link in Dashboard Header';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'dashboard_user_menu';
  $fe_block_boxes->body = '<?php
    global $user;
    print \'<div class="welcome_text">Welcome, <a href=/user/\'. $user->uid .\'>\' . $user->name . \'</a></div><div class="account_text"><a href=/user/\' . $user->uid . \'/edit>Account Settings</a></div><div class="logout_text"><a href="/user/logout">Log out</a></div>\';
?>
';

  $export['dashboard_user_menu'] = $fe_block_boxes;

  return $export;
}
