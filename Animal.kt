fun main(args: Array<String>) {

    val firstWord = readLine()!!
    val secondWord = readLine()!!
    val thirdWord = readLine()!!

    println(check(firstWord, secondWord, thirdWord))

}

fun check(s1: String, s2: String, s3:String): String{

    if(s1.equals("vertebrado")) {
        if(s2.equals("ave"))
        {
            if(s3.equals("carnivoro"))
            {
                return "aguia"
            }else{
                return "pomba"
            }
        }else{
            if(s3.equals("onivoro"))
            {
                return "homem"
            }else{
                return "vaca"
            }
        }
    }
    else
    {
        if(s2.equals("inseto"))
        {
            if(s3.equals("hematofago"))
            {
                return "pulga"
            }else{
                return "lagarta"
            }
        }else{
            if(s3.equals("hematofago"))
            {
                return "sanguessuga"
            }else{
                return "minhoca"
            }
        }
    }
}