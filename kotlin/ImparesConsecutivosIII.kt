fun main(args: Array<String>){
    var linha = readLine()!!
    val limite = Integer.parseInt(linha)

    for (x in 1..limite){
        linha = readLine()!!
        val x = Integer.parseInt(linha.substringBefore(' '))
        val y = Integer.parseInt(linha.substringAfter(' '))

        println(calculaImpares(x, y))
    }

}

fun calculaImpares(x:Int, y:Int): Int{
    var contador = 0;
    var soma = 0;
    var xAuxiliar = x

    while (contador < y) {
        if(xAuxiliar % 2 != 0) {
            soma += xAuxiliar
            contador += 1
        }
        xAuxiliar += 1
    }

    return soma
}