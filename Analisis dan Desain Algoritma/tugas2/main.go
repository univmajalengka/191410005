package main

import (
      "fmt"
)

func main() {
    var m int
    fmt.Println("Masukan Jumlah Bilangan : ")
    fmt.Scan(&m)
    var n int
    fmt.Println("Masukan Jumlah Array : ")
    fmt.Scan(&n)
    set(m, n)
}

func set(m, n int) {
    a := make([]int, m)
    for i := 0; i < m; i++ {
        a[i] = i + 1
    }
    fmt.Println("Masukan Array : ")
    b := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&b[i])
    }
    fmt.Println("Array Yang Hilang : ")
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