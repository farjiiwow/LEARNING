let teaFlavors = ["green tea", "black tea", "oolong tea"];

// let teaFl = new Array("green tea", "black tea", "oolong tea");

const firstTea = teaFlavors[0];

console.log(firstTea);

let cities = ["London", "Tokyo", "Paris", "New York"];

let favoriteCity = cities[2];

console.log(favoriteCity);

let teaTypes = ["herbal tea", "white tea", "masala chai"];

console.log(teaTypes);

teaTypes[1] = "jasmine tea";

console.log(teaTypes[1]);
console.log(teaTypes);

let citiesVisited = ["Mumbai", "Sydney"];

citiesVisited.push("Berlin");

console.log(citiesVisited);

let teaOrders = ["chai", "iced tea", "matcha", "earl grey"];

const lastOrder = teaOrders.pop();
console.log(lastOrder);

console.log(teaOrders);

let var1 = 8;
let var2 = var1;
console.log(var2);
console.log(var1);

var1 = 1;
console.log(var2);
console.log(var1);

let popularTeas = ["green tea", "oolong tea", "chai"];
let softCopyTeas = popularTeas;

console.log(popularTeas);
console.log(softCopyTeas);

popularTeas.pop();

console.log(popularTeas);
console.log(softCopyTeas);

let topCities = ["berlin", "singapore", "new york"];
// let hardCopyCities = [...topCities];
let hardCopyCities = topCities.slice();

console.log(topCities);
console.log(hardCopyCities);

topCities.pop();

console.log(topCities);
console.log(hardCopyCities);

let europeanCities = ["paris", "rome"];
let asianCities = ["tokyo", "bangkok"];

let worldCities = europeanCities.concat(asianCities);

console.log(worldCities);

let teaMenu = ["masala chai", "oolng tea", "green tea", "earl grey"];

let = menuLength = teaMenu.length;

console.log(menuLength);

let cityBucketList = ["kyoto", "London", "cape town", "vancouver"];

let isLondonInList = cityBucketList.includes("London");

console.log(isLondonInList);
