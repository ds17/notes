select * from family_member where num_books_read > 190;

select * from family_members where num_books_read >=180;

select * from friends_of_pickles where height_cm < 45 and species = 'dog';

select * from friends_of_pickles where species = 'dog' or height_cm < 45;

select * from friends_of_pickles where species not in ('cat', 'dog');

--distinct 组合去重
select distinct species, gender from friends_of_pickles where height_cm >50;

--ORDER BY 排除，默认升序
-- DESC 降序
select * from friends_of_pickles order by height_cm desc;

--LIMIT # 限制显示的行数，数字必填；
--The LIMIT keyword comes after the DESC keyword.
SELECT * FROM friends_of_pickles ORDER BY hiegt_cm DESC LIMIT 1;

SELECT COUNT(*) FROM friends_of_pickles WHERE gender = 'male';

select sum(num_books_read) from family_members;

select avg(num_legs) from family_members;
select avg(num_books_read) from family_members;

select max(num_legs) from family_members;
select max(num_books_read) from family_members;

select count(*), species from friends_of_pickles group by species;
select max(height_cm), species from friends_of_pickles group by species;

-- 语句嵌套
select * from family_members where num_legs = (select min(num_legs) from family_members);
select * from family_members where num_books_read = (select max(num_books_read) from family_members);

select * from family_members where favorite_book is not null;

select * from celebs_born where birthdate > '1980-09-01';

--inner join...on
select * 
from character 
inner join character_tv_show 
on character.id = character_tv_show.character_id;

select character.name, character_tv_show.tv_show_name 
from character 
inner join character_tv_show
on character.id = character_tv_show.character_id;

select character.name, character_actor.actor_name
from character
inner join character_actor
on character.id = character_actor.character_id;

--multiple joins
select character.name, tv_show.name 
from character 
inner join character_tv_show
on character.id = character_tv_show.character_id
inner join tv_show
on character_tv_show.tv_show_id = tv_show.id;

select character.name, actor.name
from character
inner join character_actor
on character.id=character_actor.character_id
inner join actor
on character_actor.actor_id = actor.id;

--joins with where
select character.name, tv_show.name 
from character 
inner join character_tv_show
on character.id = character_tv_show.character_id
inner join tv_show
on character_tv_show.tv_show_id = tv_show.id
where character.name != 'Barney Stinson' and tv_show.name != 'Buffy the Vampire Slayer';

select character.name, tv_show.name
from character
inner join character_tv_show 
on character.id = character_tv_show.character_id
inner join tv_show
on character_tv_show.tv_show_id = tv_show.id 
where character.name != 'Willow Rosenberg' and tv_show.name != 'How I Met Your Mother';

--left join
select character.name, tv_show.name
from character
left join character_tv_show
on character.id = character_tv_show.character_id
left join tv_show 
on character_tv_show.tv_show_id = tv_show.id;

select character.name, actor.name
from character 
left join character_actor 
on character.id = character_actor.character_id
left join actor
on character_actor.actor_id = actor.id;

--table alias
select c.name, a.name
from character as c
left join character_actor as ca
on c.id = ca.character_id
left join actor as a
on ca.actor_id = a.id;

-- column alias
select c.name as '角色名', t.name as '节目名称'
from character as c
left join character_tv_show as ct
on c.id = ct.character_id
left join tv_show as t
on ct.tv_show_id = t.id;

select c.name as character, a.name as actor
from character as c 
left join character_actor as ca 
on c.id = ca.character_id 
left join actor as a 
on ca.actor_id = a.id ;

--slef joins
select e1.name as employee_name, e2.name as boss_name
from employees as e1
inner join employees as e2
on e1.boss_id= e2.id;

--like
select * from robots where name like "%20__";

--case
select *,
case 
    when species = 'human' then 'talk'
    when species = 'dog' then 'bark'
    when species = 'cat' then 'meow'
end
as sound
from friends_of_pickles;

--substr
select * from robots where substr(location, -2) = 'NY';

--coalesce
select name, coalesce(tank, gun, sword) as weapon from fighters;