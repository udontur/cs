select visit_date from travel_log where city="Macau";
select distinct month(visit_date) as month from travel_log where city="Tokyo" and year(visit_date)=2023;
select distinct city from travel_log where month(visit_date)=3 and year(visit_date)=2021;
select distinct city from travel_log where year(visit_date)=2016 or year(visit_date)=2020;
