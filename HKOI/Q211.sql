select id from ticket where first_number=4 and second_number=16 and third_number=28 and fourth_number=30 and fifth_number=45 and sixth_number=47;
select id from ticket where second_number=first_number+1 and third_number=second_number+1 and fourth_number=third_number+1 and fifth_number=fourth_number+1 and sixth_number=fifth_number+1;
select id from ticket where first_number in (3, 4, 9, 10, 14, 15, 20, 25, 26, 31, 36, 37, 41, 42, 47, 48);
select id from ticket where first_number=36 or second_number=36 or third_number=36 or fourth_number=36 or fifth_number=36 or sixth_number=36;
