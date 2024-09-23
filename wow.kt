fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (x, y) = readLine()!!.split(" ").map { it.toInt() }
        val max = if (x > y) x else y
        val min = if (x < y) x else y
        println("$min $max")
    }
}