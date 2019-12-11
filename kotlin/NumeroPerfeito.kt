fun main(args: Array<String>){
    val limite = Integer.parseInt(readLine())

    if(limite in 1..20){
        for (x in 1..limite){
            val numero = Integer.parseInt( readLine())

            if(numero in 1..100000000){
                if(numero == calculaNumeroPerfeito(numero))
                    println("$numero eh perfeito")
                else
                    println("$numero nao eh perfeito")
            }
        }
    }
}

fun calculaNumeroPerfeito(numero:Int): Int{
    var soma = 0;

    if(numero == 1)
        return 0

    for (x in 1..((numero/2)+1))
        if(numero % x == 0)
            soma += x

    return soma
}