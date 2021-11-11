import java.time.temporal.ChronoUnit.MINUTES
import java.time.LocalTime
import java.util.*

fun main(args: Array<String>) {
    var timeArray = readLine()!!.split(" ")!!.toTypedArray()

    val timeInicial = LocalTime.of(Integer.parseInt(timeArray[0]), Integer.parseInt(timeArray[1]))
    val timeFinal = LocalTime.of(Integer.parseInt(timeArray[2]), Integer.parseInt(timeArray[3]))

    var diff = MINUTES.between(timeInicial, timeFinal);
    if (diff < 1) {
        diff += 1440;
    }

    println("O JOGO DUROU ${diff/60} HORA(S) E ${diff%60} MINUTO(S)")
}