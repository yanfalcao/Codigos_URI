import java.util.*

fun main(args: Array<String>) {
    var numberLines = Integer.parseInt(readLine())
    var numbers = IntArray(numberLines)

    for(line in 0..(--numberLines)){
        numbers[line] = Integer.parseInt(readLine())
    }

    for(number in numbers){
        println(number%2)
    }
}