package main
 
import "fmt"
 
func main() {
var x,y int
fmt.Println("Masukan berapa angka ?")
fmt.Scanln(&x)
fmt.Println("Masukan angka yang hilang?")
fmt.Scanln(&y)
fmt.Println("Berikut bilangan nya")
    for i := 1; i <= x; i++ {
        switch {
        case i == y:
            continue;
        default: 
            fmt.Println(i)
        }
    }
}