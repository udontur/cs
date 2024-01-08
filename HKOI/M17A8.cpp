main = interact pure_main
pure_main :: String -> String
pure_main s = unlines.map (unwords.map show).f n $ x
              where n = read.head.lines $ s :: Int
                    x = map (map read.words).tail.lines $ s
                    f n x = foldl (g n) x [0..n-1]
                    g n x i  = fst.foldl (h n i) (x, 0) $ x
                    h n i (x, j) y = (take j x ++ zipWith (+) y (map (y!!i *) (x!!i)) : drop (j + 1) x, j + 1)
