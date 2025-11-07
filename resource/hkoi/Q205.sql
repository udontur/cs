select subject, test_one*0.2+test_two*0.2+final_exam*0.6 as weighted_total from report;
select subject from report where test_one*0.2+test_two*0.2+final_exam*0.6 >= 90;
select subject from report where final_exam>=test_one and final_exam>=test_two;
select subject from report where abs(test_one-test_two)>10;
