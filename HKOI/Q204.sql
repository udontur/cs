select model_name from computer where cpu_cores=4 and ram=8;
select model_name from computer where ssd+hdd between 512 and 1024;
select model_name from computer where cpu_name like "Intel%" or cpu_name like "AMD%";
select model_name from computer where (cpu_name like "Intel%" or cpu_name like "AMD%") and cpu_cores>=8; 
