let tea = ["chai", "green tea", "black tea", "jasmine tea", "herbal tea"];
let shortTeas = [];

for (let i = 0; i < tea.length; i++) {
  if (tea[i].length > 10) {
    break;
  }
  shortTeas.push(tea[i]);
}

console.log(shortTeas);
