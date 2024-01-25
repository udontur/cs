select route_number from route where origin="Kowloon Tong Station" or destination="Kowloon Tong Station";
select sum(fare) from route join trip on route.route_number=trip.route_number where octopus_id=29579664;
select route_number from route join stop origin_stop on route.origin=origin_stop.name join stop destination_stop on route.destination=destination_stop.name where origin_stop.district=destination_stop.district;
select route_number from route join stop origin_stop on route.origin=origin_stop.name join stop destination_stop on route.destination=destination_stop.name where origin_stop.district="Sha Tin" or destination_stop.district="Sha Tin";
select route.route_number from route left join trip on route.route_number=trip.route_number and month(trip.boarding_time)=3 and year(trip.boarding_time)=2023 group by route.route_number having count(trip.route_number)<=1 or count(trip.route_number) is null;
