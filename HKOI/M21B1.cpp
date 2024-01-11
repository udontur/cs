let rec count n = 
  if n = 1 then 1
  else if n mod 2 = 0 then 1 + count(n / 2)
  else 1 + count(3 * n + 1)
;;
read_int () |> count |> print_int |> print_newline
