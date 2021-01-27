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
        unique_elemen := RemoveDuplicatesFromSlice(b)
        fmt.Println(unique_elemen)
        fmt.Println("Array Yang Hilang : ")
          fmt.Println(Difference(a, unique_elemen))
    }


func Difference(a, unique_elemen []int) (diff []int) {
    m := make(map[int]bool)

    for _, item := range unique_elemen {
            m[item] = true
    }

    for _, item := range a {
            if _, ok := m[item]; !ok {
                    diff = append(diff, item)
            }
    }
    return
}

func RemoveDuplicatesFromSlice(s []int) []int {
    m := make(map[int]bool)
    for _, item := range s {
            if _, ok := m[item]; ok {
                    fmt.Println(item, "adalah duplikasi")
            } else {
                    m[item] = true
            }
    }

    var result []int
    for item, _ := range m {
            result = append(result, item)
    }
    return result
}