package main

import "fmt"

const secondsInHour=3600

func  main(){

    a,b := 4,6

    const days=7

    const age int =5

    var numbers=[4] int{4,5,-9,100}

    fmt.Println(numbers)

 

    
    fmt.Println("Sum:",a+b,"MeanValue:" ,(a+b)/2)

    fmt.Printf("The sum oaf a and b is %d \n ",a+b)

    fmt.Printf("x ids %d and y is %d",a,b)

    balance:=map[string]float64{
        "USD":80.12,
        "EUR":50.02,

    }
    fmt.Println(balance)

    type Person struct{
        name string
        age int
    }

}

//Go data Types:
//Int8,int16,int32,int64