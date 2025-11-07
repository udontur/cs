select drink_name, brand_name from drink where drink_type="Tea" order by price desc limit 1;
select count(*) from sales where drink_id in (3, 6) and year(transaction_date)=2023;
select round(cast(count(*) as float)/153.0, 4) from sales join drink on sales.drink_id=drink.drink_id where drink_type="Soda" and transaction_date between "2023-05-01" and "2023-09-30";
select drink_name from sales join drink on sales.drink_id=drink.drink_id group by drink_name having count(*) >= 5 and brand_name="Best Taste";
select (sum(case when month(transaction_date)=8 then price else 0 end)-sum(case when month(transaction_date)=7 then price else 0 end)) as sales_increase from sales join drink on sales.drink_id=drink.drink_id where month(transaction_date) in (7, 8) and year(transaction_date)=2023;
