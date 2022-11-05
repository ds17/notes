-- Active: 1667037546767@@127.0.0.1@3306@niukesql
drop table if exists user_submit;
CREATE TABLE `user_submit` (
`id` int NOT NULL,
`device_id` int NOT NULL,
`profile` varchar(100) NOT NULL,
`blog_url` varchar(100) NOT NULL
);
INSERT INTO user_submit VALUES(1,2138,'180cm,75kg,27,male','http:/url/bisdgboy777');
INSERT INTO user_submit VALUES(1,3214,'165cm,45kg,26,female','http:/url/dkittycc');
INSERT INTO user_submit VALUES(1,6543,'178cm,65kg,25,male','http:/url/tigaer');
INSERT INTO user_submit VALUES(1,4321,'171cm,55kg,23,female','http:/url/uhsksd');
INSERT INTO user_submit VALUES(1,2131,'168cm,45kg,22,female','http:/url/sysdney');