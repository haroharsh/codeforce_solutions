import java.util.Scanner
 
fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        val k = scanner.nextInt()
        val a1 = scanner.nextInt()
        val b1 = scanner.nextInt()
        val a2 = scanner.nextInt()
        val b2 = scanner.nextInt()
 
        var bobCanWin = false
        loop@ for (a3 in 0..k) {
            for (b3 in 0..k) {
                if (a3 == b3) continue
 
                var aliceRounds = 0
                var bobRounds = 0
 
                if (a1 > b1) aliceRounds++ else bobRounds++
                if (a2 > b2) aliceRounds++ else bobRounds++
                if (a3 > b3) aliceRounds++ else bobRounds++
 
                val aliceTotal = a1 + a2 + a3
                val bobTotal = b1 + b2 + b3
 
                val bobWins = when {
                    bobTotal > aliceTotal -> true
                    bobTotal == aliceTotal && bobRounds > aliceRounds -> true
                    else -> false
                }
 
                if (bobWins) {
                    bobCanWin = true
                    break@loop
                }
            }
        }
 
        if (bobCanWin) {
            println("YES")
        } else {
            println("NO")
        }
    }
}