function createTeaMaker(name) {
  let score = 100;
  return function (teaType) {
    return `Making ${teaType} ${name} ${score}`;
  };
}

let teaMaker = createTeaMaker("farjii");
let result = teaMaker("green tea");
console.log(result);
