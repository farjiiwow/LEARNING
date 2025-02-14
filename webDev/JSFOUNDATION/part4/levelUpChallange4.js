let tea = ["chai", "green tea", "herbal tea", "black tea"];
let preferredTeas = [];

for (const num of tea) {
  if (num === "herbal tea") {
    continue;
  }
  preferredTeas.push(num);
}

console.log(preferredTeas);
