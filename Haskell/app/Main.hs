module Main where
import Lib

add :: Int -> Int -> Int
add x = \ y -> x + y

add10 :: Int -> Int
add10 = add 10

formaterParite :: Int -> String
formaterParite x = if even x then "pair" else "impair"

formaterNombre' :: Int -> String
formaterNombre' x
   | x == 0 = "zero"
   | x < 0 = "negatif"
   | otherwise = "positif"
   
fibo :: Integer -> Integer
fibo n
   | n == 0 = 0
   | n <= 2 = 1
   | otherwise = fibo (n - 1) + fibo (n - 2)

factorielle :: Integer -> Integer                                 {- TAIL RECURSION ?! -}
factorielle = aux 1
   where aux acc 1 = acc
         aux acc n = aux (acc * n) (n-1)


add100 = add10 . add10                                            {- Composition -}

l :: [Int]
l = [1]

doubler :: [Int] -> [Int]                                         {- Mapping -}
doubler [] = []
doubler (x:xs) = (x * 2) : (doubler xs)


doubler' :: [Int] -> [Int]
doubler' = map (\x -> x * 2)
   
parity :: [Int] -> [Int]
parity = filter even

somme :: [Integer] -> Integer
somme = foldl (\ acc x -> acc + x) 0
somme' :: [Integer] -> Integer                                    {- == -}
somme' = foldl (+) 0

tuples = [(x , y) | x <- [1..10], y <- [1..10], x + y == 12]      {- Create a list of tuples that adds to 12 -}


data Shape = Square Float                                         {- Create custom types -}
           | Rectangle Float Float
           deriving Show

calculerSurface :: Shape -> Float
calculerSurface (Square a) = a * a
calculerSurface (Rectangle a b) = a * b

reversing :: [a] -> [a] 
reversing = foldl (\ acc x -> x : acc) []

solution :: Int -> Int
solution year
    | mod year 100 == 0 =  div year 100 + 1
    | otherwise = floor 19.5 + 1

list :: [Int]
list = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

sumListAcc :: [Int] -> Int -> Int
sumListAcc list acc =
   if null list then acc
   else sumListAcc (tail list) (head list + acc)

sumList :: [Int] -> Int
sumList list = sumListAcc list 0

area :: (Float, Float) -> Float
area (x, y)
   | y == pi = x * x * pi
   | otherwise = x * y

circleArea :: Float -> Float
circleArea rayon = area (rayon, pi)

squareArea :: Float -> Float
squareArea n = area (n, n)

l2 :: [(Int, Int, Int)]
l2 = [(a,b,c) | a <- [1..10], b <- [1..10], c <- [1..10], a^2 + b^2 == c^2{- , a + b + c == 1000 -}]

removeNonUppercase :: [Char] -> [Char]  
removeNonUppercase st = [ c | c <- st, elem c ['a'..'z']]

(#) :: Integer -> Integer  -> Integer  
(#) a b = a + b + 1

charName :: Char -> String  
charName 'a' = "Albert"  
charName 'b' = "Broseph"  
charName 'c' = "Cecil"  
   
main :: IO ()
main = do 
   print $ charName 'a'
      