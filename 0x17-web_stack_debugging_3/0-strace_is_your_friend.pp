# stupid rename

file { '/var/www/html/wp-includes/class-wp-locale.phpp':
    ensure => file,
    source => '/var/www/html/wp-includes/class-wp-locale.php',
}
