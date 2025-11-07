select model_name from computer where cpu_cores>=8;
select model_name from computer where ssd!=hdd;
select model_name from computer where ram/cpu_cores<4;
select ssd+hdd from computer where model_name="BananaBook Pro 14";
