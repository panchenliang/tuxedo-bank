CREATE TABLE `T_USER` (
  `id` int(11) NOT NULL auto_increment,
  `account` varchar(20) character set latin1 NOT NULL,
  `password` int(6) NOT NULL,
  `money` decimal(10,2) default '0.00',
  `category` int(11) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC
