func addDigits(num int) int {

    sum := 0

    for num >= 0 {
        sum += num%10

        num /= 10


        if num == 0{
            break
        }
    }

    if sum < 10 {
        return sum
    }
   

  return  addDigits(sum)

    
}