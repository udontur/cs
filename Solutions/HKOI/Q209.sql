select distinct event_name, count(event_name) as count from relay_record group by event_name;
select distinct event_name, count(case when finish_time is null then 1 end) as count from relay_record group by event_name;
select distinct event_name, min(finish_time) as fastest_time, max(finish_time) as slowest_time, round(avg(finish_time), 2) as average_time from relay_record group by event_name;
select event_name, sum(finish_time) as total_time from relay_record where finish_time is not null group by event_name having count(*)>=3;
