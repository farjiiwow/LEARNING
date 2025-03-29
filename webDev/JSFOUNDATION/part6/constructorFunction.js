function Person(name, age) {
  this.name = name;
  this.age = age;
}

function Car(make, model) {
  this.make = make;
  this.model = model;
}

let myCar = new Car("Toyota", "Camry");
console.log(myCar);

let myNewCar = new Car("Tata", "Safari");
console.log(myNewCar);

function Tea(type) {
  this.type = type;
  this.describe = () => {
    return `this is a cup of ${this.type}`;
  };
}

let lemonTea = new Tea("Lemon Tea");
console.log(lemonTea, lemonTea.describe());

let OolongTea = new Tea("Oolong Tea");
console.log(OolongTea, OolongTea.describe());

function Animal(species) {
  this.species = species;
}

Animal.prototype.Sound = function () {
  return `${this.species} makes sound`;
};

let cat = new Animal("Cat");
console.log(cat);
console.log(cat.Sound());

let dog = new Animal("Dog");
console.log(dog);

function Drink(name) {
  if (!new.target) {
    throw new Error("Drink must be called with new keyword");
  }
  this.name = name;
}

let tea = new Drink("Masala Tea");
console.log(tea);

let coffee = Drink("Coffee");
console.log(coffee);
