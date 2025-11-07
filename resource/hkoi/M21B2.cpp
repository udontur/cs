let rec generate n = 
  if n = 1 then "a"
  else generate(n - 1) ^ String.make 1 (char_of_int(96 + n)) ^ generate(n - 1)
;;
read_int () |> generate |> print_endline
