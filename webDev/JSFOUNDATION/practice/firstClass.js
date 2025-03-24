const foo = () => {
  console.log("First class Function");
};

foo();

function sayHello() {
  return "Hello";
}

function greetings(helloMessage, name) {
  console.log(helloMessage(), `${name}`);
}

greetings(sayHello, "Javascript!");

function hello() {
  return () => {
    console.log("hello");
  };
}

// The hello function is like a factory that creates another function.
// When you call hello(), it gives you a new function but doesn't run it.
// hello();

hello()();
