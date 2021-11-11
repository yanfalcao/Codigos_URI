import java.util.*

fun main(args: Array<String>) {
    var pDesejada = Integer.parseInt(readLine())
    var pLida = Integer.parseInt(readLine())

    if(checkPressao(pDesejada) && checkPressao(pLida)) {
        println((pDesejada - pLida))
    }else {
        println(-1)
    }
}

fun checkPressao(pressao: Int): Boolean {
    return pressao >= 1 && pressao <= 40
}