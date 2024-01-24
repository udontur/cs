select count(name) as count from record where distance=100;
select count(distinct name) as count from record;
select count(name) as count from record where finish_time<=60 and distance=400;
select round(min(finish_time), 2) as fastest_time, round(avg(finish_time), 2) as average_time from record where distance=200;
