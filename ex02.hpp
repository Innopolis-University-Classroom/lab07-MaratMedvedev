//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template<typename T>
public class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() { /*your code here*/
        return num1 + num2;
    }

    T subtract() { /*your code here*/
        return num1 - num2;
    }

    T multiply() { /*your code here*/
        return num1 * num2;
    }

    T divide() { /*your code here*/
        return num1 / num2;
    }
};















