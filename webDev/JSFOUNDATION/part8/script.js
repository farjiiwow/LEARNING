// example 1

document
  .getElementById("changeTextButton")
  .addEventListener("click", function () {
    let paragraph = document.getElementById("myParagraph");
    paragraph.textContent = "Paragraph changed";
  });

// example 2

document
  .getElementById("highlightFirstCity")
  .addEventListener("click", function () {
    let citiesList = document.getElementById("citiesList");
    citiesList.firstElementChild.classList.add("highlight");
  });

// example 3

document.getElementById("changeOrder").addEventListener("click", function () {
  let coffeeType = document.getElementById("coffeeType");
  coffeeType.textContent = "Espresso";
  coffeeType.style.backgroundColor = "orange";
  coffeeType.style.color = "black";
  coffeeType.style.padding = "5px";
  coffeeType.style.borderRadius = "2px";
});

// example 4

document.getElementById("addNewItem").addEventListener("click", function () {
  let newItem = document.createElement("li");
  newItem.textContent = "eggs";

  document.getElementById("shoppingList").appendChild(newItem);
});

// example 5

document
  .getElementById("removeLastTask")
  .addEventListener("click", function () {
    let taskList = document.getElementById("taskList");
    taskList.lastElementChild.remove();
  });

// example 6

document.getElementById("clickMeButton").addEventListener("click", function () {
  alert("farjiiwow");
});

// example 7

document.getElementById("teaList").addEventListener("click", function (event) {
  if (event.target && event.target.matches(".teaItem")) {
    alert("You selected : " + event.target.textContent);
  }
});

// example 8

document
  .getElementById("feedbackForm")
  .addEventListener("submit", function (event) {
    event.preventDefault();
    let feedback = document.getElementById("feedbackInput").value;
    console.log(feedback);
    let feedbackDisplay = document.getElementById("feedbackDisplay");
    feedbackDisplay.textContent = `Feedback is : ${feedback}`;
    feedbackDisplay.style.color = "yellow";
  });

// example 9

document.addEventListener("DOMContentLoaded", function () {
  document.getElementById("domStatus").textContent = "DOM fully Loaded";
});

// example 10

document
  .getElementById("toggleHighlight")
  .addEventListener("click", function () {
    let toggleHighlight = document.getElementById("descriptionText");
    // console.log(toggleHighlight);
    toggleHighlight.classList.toggle("highlight");
  });
