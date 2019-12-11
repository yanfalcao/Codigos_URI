fun main(args: Array<String>) {
    val curupira = 300
    val boitata = 1500
    val boto = 600
    val mapinguari = 1000
    val iara = 150
    val donaChica = 225

    var total = donaChica

    for(x in 1..5){
        total += when(x){
            1 -> Integer.parseInt(readLine()) * curupira
            2 -> Integer.parseInt(readLine()) * boitata
            3 -> Integer.parseInt(readLine()) * boto
            4 -> Integer.parseInt(readLine()) * mapinguari
            else -> Integer.parseInt(readLine()) * iara
        }
    }

    println(total)
}