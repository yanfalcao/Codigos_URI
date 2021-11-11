import java.time.LocalDateTime
import java.time.temporal.ChronoUnit
import java.util.*

fun main(args: Array<String>) {
    var diaInicial = readLine()!!.split(" ")!!.toTypedArray()[1]
    var timeInicialArray = readLine()!!.split(" : ")!!.toTypedArray()
    var diaFinal = readLine()!!.split(" ")!!.toTypedArray()[1]
    var timeFinalArray = readLine()!!.split(" : ")!!.toTypedArray()

    val timeInicial = LocalDateTime.of(
        2021,
        4,
        Integer.parseInt(diaInicial),
        Integer.parseInt(timeInicialArray[0]),
        Integer.parseInt(timeInicialArray[1]),
        Integer.parseInt(timeInicialArray[2])
    )
    val timeFinal = LocalDateTime.of(
        2021,
        4,
        Integer.parseInt(diaFinal),
        Integer.parseInt(timeFinalArray[0]),
        Integer.parseInt(timeFinalArray[1]),
        Integer.parseInt(timeFinalArray[2])
    )

    var tempDateTime = LocalDateTime.from(timeInicial);

    var days = tempDateTime.until(timeFinal, ChronoUnit.DAYS );
    tempDateTime = tempDateTime.plusDays( days );

    var hours = tempDateTime.until(timeFinal, ChronoUnit.HOURS );
    tempDateTime = tempDateTime.plusHours( hours );

    var minutes = tempDateTime.until(timeFinal, ChronoUnit.MINUTES );
    tempDateTime = tempDateTime.plusMinutes( minutes );

    var seconds = tempDateTime.until(timeFinal, ChronoUnit.SECONDS );

    println("$days dia(s)\n" +
            "$hours hora(s)\n" +
            "$minutes minuto(s)\n" +
            "$seconds segundo(s)")
}