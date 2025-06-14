// object
let car = {
  make: "Toyota",
  model: "camry",
  year: 2020,
  start: function () {
    return `${this.model} car got started in ${this.year}`;
  },
};

console.log(car.start());

//functional constructor
function Person(name, age) {
  this.name = name;
  this.age = age;
}

let personOne = new Person("farjii wow", 29);
console.log(personOne.name, "is", personOne.age, "year old ");

function Animal(type) {
  this.type = type;
}

Animal.prototype.speak = function () {
  return `${this.type} make a sound`;
};

let dog = new Animal("Dog");
console.log(dog.speak());

Array.prototype.farjii = function () {
  return `custom method ${this}`;
};

let arr = [1, 2, 3, 4];
console.log(arr.farjii());

let myArr = [3, 32, 55, 24, 93];
console.log(arr.farjii());

// class
class Vehicle {
  constructor(make, model) {
    this.make = make;
    this.model = model;
  }

  start() {
    return `${this.model} is a car from ${this.make}`;
  }
}

// inheritance
class Car extends Vehicle {
  drive() {
    return `${this.make} is an example of inheritance`;
  }
}

let myCar = new Car("Toyota", "Corolla");
console.log(myCar.start());
console.log(myCar.drive());

let vehOne = new Vehicle("Tata", "Safari");
console.log(vehOne.make);

// Encapsulation

class BankAccount {
  #balance = 0;

  deposit(amount) {
    this.#balance += amount;
    return this.#balance;
  }

  getBalance() {
    return `$${this.#balance}`;
  }
}

let person = new BankAccount();
console.log(person.getBalance());

person.deposit(1000);
console.log(person.getBalance());

// Abstraction

class CoffeeMachine {
  start() {
    // call DB
    // filter value
    return `Starting the machine ...`;
  }

  brewCoffee() {
    // complex calculation
    return `Brewing coffee`;
  }

  pressStartButton() {
    return `${this.start()} + ${this.brewCoffee()}`;
  }
}

let myMachine = new CoffeeMachine();
console.log(myMachine.pressStartButton());
// console.log(myMachine.start());
// console.log(myMachine.brewCoffee());

// polymorphism

class Bird {
  fly() {
    return `Flying ...`;
  }
}

class Penguin extends Bird {
  fly() {
    return `Can't Fly`;
  }
}

class Sparrow extends Bird {}

let bird = new Bird();
let penguin = new Penguin();
let sparrow = new Sparrow();

console.log(bird.fly());
console.log(penguin.fly());
console.log(sparrow.fly());

// static

class Calculator {
  static add(a, b) {
    return a + b;
  }
}

// let miniCalc = new Calculator();
// console.log(miniCalc.add(2, 3));

console.log(Calculator.add(2, 3));

// getter and setter

class Employee {
  constructor(name, salary) {
    if (salary < 0) {
      throw new Error("Invalid Salary");
    }
    this.name = name;
    this._salary = salary;
  }

  get salary() {
    return `You are not allowed to see salary`;
  }

  set salary(salary) {
    if (salary < 0) {
      console.log("Invalid Salary");
    } else {
      this._salary = salary;
    }
  }
}

let anotherPerson = new Employee("Farjii", 100000);
console.log(anotherPerson.name);
// console.log(anotherPerson._salary);

anotherPerson.salary = 100000;
console.log(anotherPerson.salary);
// console.log(anotherPerson._salary);

// use case of getter and setter
// anotherPerson._salary = -10000;
// console.log(anotherPerson._salary);

// use case of getter and setter

class Guy {
  constructor(name, age) {
    if (age < 0) {
      throw new Error("Invalid Age");
    }
    this.name = name;
    this._age = age;
  }
}

let ram = new Guy("ram", 20);
console.log(ram._age);

// now if we set age
ram._age = -10;
console.log(ram._age);
// so these time age just don't check the condition
// it just check only at the time when object made
// that's why we can use here getter and setter
// to check each time when value is modified
