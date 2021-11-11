import java.util.*

fun main(args: Array<String>) {
    var pessoas = Integer.parseInt(readLine())

    if(checkPessoas(pessoas)) {
        println((pessoas*4))
    }else {
        println(-1)
    }
}

fun checkPessoas(pressao: Int): Boolean {
    return pressao >= 1 && pressao <= 1000
}