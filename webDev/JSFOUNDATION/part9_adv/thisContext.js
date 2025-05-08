const Person = {
  name: "farjiiwow",
  greet() {
    console.log(`Hi, I am ${this.name}`);
  },
};

Person.greet();

const greetFunction = Person.greet;
greetFunction();

const boundFunction = Person.greet.bind({ name: "farjii" });
boundFunction();
