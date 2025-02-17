function orderTea(teaType) {
  function confirmOrder() {
    return `Order confirm for ${teaType}`;
  }
  return confirmOrder();
}

let orderConfirmation = orderTea("chai");
console.log(orderConfirmation);
