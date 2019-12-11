fun main(args: Array<String>){
    val numero = Integer.parseInt(readLine())

    for(x in 1..numero)
        if(numero % x == 0)
            println(x)
}