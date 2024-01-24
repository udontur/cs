select name, price_twin from hotel where stars>=5 and price_twin is not null order by price_twin desc;
select name, 6*price_double as total_cost from hotel where total_cost is not null order by total_cost;
select name, stars from hotel order by stars desc, name asc;
select name, round((cast(price_double as float)/cast(stars as float)), 2) as cost_per_star from hotel where cost_per_star is not null order by cost_per_star asc, stars desc;
