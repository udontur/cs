select name from cake order by name asc;
select name, weight from cake order by weight asc;
select name, price from cake where weight<1000 order by weight asc;
select name, (price-cost) as "gross_profit" from cake order by (price-cost) desc; 
