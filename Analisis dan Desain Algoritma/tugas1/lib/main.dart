import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
        visualDensity: VisualDensity.adaptivePlatformDensity,
      ),
      home: CalcScreen(),
    );
  }
}

class CalcScreen extends StatefulWidget {
  @override
  _CalcScreenState createState() => _CalcScreenState();
}

class _CalcScreenState extends State<CalcScreen> {
  final textFieldOne = TextEditingController();

  var result;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Container(
        child: SafeArea(
          child: Column(
            children: <Widget>[
              TextField(
                controller: textFieldOne,
                keyboardType: TextInputType.number,
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceAround,
                children: [
                  RaisedButton(
                    child: Text('Jumlah'),
                    onPressed: () => calculate('Jumlah'),
                  ),
                ],
              ),
              Text(
              '$result'
              ),
            ],
          ),
        ),
      ),
    );
  }

  void calculate(String operation) {
    final firstNumber = double.parse(textFieldOne.value.text);
    switch (operation) {
      case 'Jumlah':
        setState(() {
          for(int i=1; i<=firstNumber ; i++) {
            if(i % 3 == 0 && i % 5 == 0){
              result = 'Upin & Ipin';
              print('Upin & Ipin');
            } else if(i % 5 == 0){
              result = 'Ipin';
              print('Ipin');
            } else if(i % 3 == 0) {
              result = 'Upin';
              print('Upin');
            } else {
              result = i;
              print(i);
            }
          }
        });
        break;
    }
  }
}