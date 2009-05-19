CREATE TABLE `T_TRANSCATION_HISTORY` (
  `id` int(11) NOT NULL auto_increment,
  `Init` varchar(20) character set latin1 NOT NULL,
  `Accept` varchar(20) character set latin1 NOT NULL,
  `over_date` timestamp NOT NULL default CURRENT_TIMESTAMP on update CURRENT_TIMESTAMP,
  `category` int(11) NOT NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
