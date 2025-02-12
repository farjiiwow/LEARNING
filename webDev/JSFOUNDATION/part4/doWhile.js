let teaCollection = [];
let tea;

// do {
//   tea = prompt(`Enter your favourite tea (type "stop" to finish)`);
//   if (tea !== "stop") {
//     teaCollection.push(tea);
//   }
// } while (tea !== "stop");

let total = 0;
let i = 1;
do {
  total = total + i;
  i++;
} while (i <= 3);

console.log(total);
