CREATE TABLE `T_USER_INFO` (
  `id` int(11) NOT NULL auto_increment,
  `Name` varchar(20) character set latin1 NOT NULL,
  `Age` int(11) default NULL,
  `Id_card` varchar(20) character set latin1 NOT NULL,
  `Sex` int(11) default NULL,
  PRIMARY KEY  (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC
