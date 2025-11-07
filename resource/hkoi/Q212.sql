select word from dictionary where len(word)=3 and word like "%ar";                             
select word from dictionary where word like "%t_s%";
select word from dictionary where len(word)-len(replace(word, 'q', ''))=1 and len(word)-len(replace(word, 'u', ''))=1;
select word from dictionary where len(word)>=5 and substr(word, 0, 5) like "%z%";
