fun main(args: Array<String>) {
    val number = Integer.parseInt(readLine()!!)

    if(number in 1..12)
        println(fatorialSimples(number))
    else
        println()
}

fun fatorialSimples(numero: Int): Int {
    if(numero == 1)
        return 1;

    return numero * fatorialSimples(numero-1)
}