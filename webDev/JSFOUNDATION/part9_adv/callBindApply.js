// call()

let person = {
  name: "farjii",
};

function sayHello(greeting) {
  console.log(`${greeting}, I am ${this.name}`);
}

sayHello.call(person, "Hi");
sayHello.call({ name: "wow" }, "Hello");

// apply()

function introduce(greeting, age) {
  console.log(`${greeting}, I am ${this.name}, I am ${age} years old.`);
}

introduce.apply(person, ["hello", 25]);

// bind()

let anotherPerson = sayHello.bind(person);
anotherPerson("Hey");
