package main

import (
      "fmt"
)

func main() {
    var n int
    fmt.Println("Masukan Jumlah Bilangan : ")
    fmt.Scan(&n)
    set(n)
}

func set(n int) {
    fmt.Println("Masukan Array A : ")
    a := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&a[i])
    }
    fmt.Println("Masukan Array B : ")
    b := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&b[i])
    }
    fmt.Println("Masukan Array Yang Hilang : ")
      fmt.Println(Difference(a, b))
}


func Difference(a, b []int) (diff []int) {
    m := make(map[int]bool)

    for _, item := range b {
            m[item] = true
    }

    for _, item := range a {
            if _, ok := m[item]; !ok {
                    diff = append(diff, item)
            }
    }
    return
}