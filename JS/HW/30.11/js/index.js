'use strict';

// Task 1

function compare(x, y) {

    if (x > y) {

        return 1;
    }
    else if(x < y) {

        return -1;
    }
    else {

        return 0;
    }
}

// Task 2

function factorial(x) {

    if (x === 1 || x === 2) {

        return x;
    }

    let result = 1;

    for (let i = 1; i <= x; i++) {

        result *= i;
    }

    return result;
}

// Task 3

function threeDigitsToNumber(a, b, c) {
    return a * 100 + b * 10 + c;
}

// Task 4

function calculateArea(length, width = length) {
    return length * width;
}

// Task 5

function isPerfectNumber(num) {
    let sum = 0;
    for (let i = 1; i <= Math.floor(Math.sqrt(num)); i++) {
        if (num % i === 0) {
            sum += i;
            if (i !== Math.floor(Math.sqrt(num))) {
                sum += num / i;
            }
        }
    }
    return sum === num;
}

// Task 6

function printPerfectNumbers(min, max) {
    for (let i = min; i <= max; i++) {
        if (isPerfectNumber(i)) {
            console.log(i);
        }
    }
}

// Task 7

function printTime(hours, minutes = 0, seconds = 0) {
    const formatNumber = (num) => num.toString().padStart(2, '0');
    return `${formatNumber(hours)}:${formatNumber(minutes)}:${formatNumber(seconds)}`;
}

// Task 8

function timeToSeconds(hours, minutes, seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

// Task 9

function secondsToTime(seconds) {
    const hours = Math.floor(seconds / 3600);
    const minutes = Math.floor((seconds % 3600) / 60);
    const remainingSeconds = seconds % 60;
    return printTime(hours, minutes, remainingSeconds);
}

// Task 10

function calculateDateDifference(day1, month1, year1, day2, month2, year2) {
    const date1 = new Date(year1, month1 - 1, day1);
    const date2 = new Date(year2, month2 - 1, day2);
    const differenceInSeconds = Math.abs(date2 - date1) / 1000;
    return secondsToTime(differenceInSeconds);
}