"use strict";

const taskOne = document.getElementById("one");
taskOne.addEventListener("click", function sayError(){alert("Some Error Ocurred!");});

const taskTwo = document.getElementById("two");
taskTwo.addEventListener("click", function showError(x) {

    x = "out of memory";
    alert(`Error ${x} ocurred!`);
});

const taskThree = document.getElementById("three");
taskThree.addEventListener("click", function createHeaders(x) {

    x = 3;
    for(let i = 0; i < x; i++) {

        document.write(`<h2>Header ${i}</h2>`);
    }
});

