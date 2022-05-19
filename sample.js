const stack = [2, 1, 4, 6, 7, 8];
const stackRandom = {
  prev: null,
  val: 2,
  next: {
    prev: {
      val: 2,
      prev: null,
    },
    val: 1,
    next: null,
  },
};

const newStack = {
  prev: null,
  val: 1,
  next: {
    val: 2,
    prev: {
      prev: null,
      val: 1,
    },
  },
};
console.log(stack);
stack.pop(); // LO = Last Out
console.log(stack);
stack.push(100); // LI = Last In
console.log(stack);
stack.shift(); // FO = First Out
console.log(stack);
stack.unshift(500); // FI = First In
console.log(stack);
stack.reverse();