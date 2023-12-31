//1
function sumRange(start, end) 
{
    let sum = 0;
    for (let i = start; i <= end; i++) { sum += i; }

    return sum;
}
/*
const userStart = parseInt(prompt("Start range:"));
const userEnd = parseInt(prompt("End range:"));

if (!isNaN(userStart) && !isNaN(userEnd)) //isNaN - проверка на то что должно быть число
{
    const result = sumRange(userStart, userEnd);
    console.log(`Sum range ${userStart} - ${userEnd} = ${result}`);
} 
else { console.log("Enter numbers"); }
*/



//2
function CommonDivisor(a, b) 
{
    if (b === 0) 
    {
        return a;
    } else { return CommonDivisor(b, a % b); } //остаток от деления, пока не будет = 0
}
/*
const num1 = parseInt(prompt("Enter first number:"));
const num2 = parseInt(prompt("Enter second number:"));

if (!isNaN(num1) && !isNaN(num2)) 
{
    const gcd = CommonDivisor(num1, num2);
    console.log(`gcd numbers ${num1} and ${num2} = ${gcd}`);
} 
else { console.log("Enter numbers"); }
*/


//3
function Divisors(number) 
{
    const divis = [];
    for (let i = 1; i <= number; i++) 
    {
        //проверка делится ли number на i БЕЗ ОСТАТКА = > i это делитель для number
        if (number % i === 0) { divis.push(i); } // i в конец массива divis (там все делители)
    }
    return divis;
}
/*
const Input = parseInt(prompt("Enter number"));

if (!isNaN(Input)) 
{
    const divis = Divisors(Input);
    console.log(`Делители числа ${Input}: ${divis}`);
} 
else { console.log("Enter number"); }
*/


//4
function Digits(number) { return number.toString().length; } 

const Input = parseInt(prompt("Enter number"));

if (!isNaN(Input)) 
{
    const count = Digits(Input);
    console.log(`count numbers ${Input}: ${count}`);
} 
else { console.log("Enter number"); }



//5
let positive = 0;
let negative = 0;
let zero = 0;
let even = 0;
let odd = 0;
let numbersLeft = 10;

while (numbersLeft > 0) 
{
    const Input = parseFloat(prompt(`Enter number (${numbersLeft} left):`));
    
    if (!isNaN(Input)) 
    {
        if (Input > 0) 
        {
            positive++;
        } 
        else if (Input < 0) 
        {
            negative++;
        } 
        else 
        {
            zero++;
        }

        if (Input % 2 === 0) 
        {
            even++;
        } 
        else {
            odd++;
        }

        numbersLeft--;
    } else { alert("Enter number"); }
}

console.log(`positive: ${positive}`);
console.log(`negative: ${negative}`);
console.log(`zero: ${zero}`);
console.log(`even: ${even}`);
console.log(`odd: ${odd}`);


//6
let calculating = true;

while (calculating) 
{
    let num1 = parseFloat(prompt("Enter 1 num"));
    let operator = prompt("(+, -, *, /):");
    let num2 = parseFloat(prompt("Emter 2 num"));
    let result;

    switch (operator) 
    {
        case "+":
            result = num1 + num2;
            break;
        case "-":
            result = num1 - num2;
            break;
        case "*":
            result = num1 * num2;
            break;
        case "/":
            result = num1 / num2;
            break;
        default:
            console.log("Error");
            continue;
    } 

    console.log(`result: ${result}`);
    let continueAnswer = prompt("continue? (Y/N)");

    if (continueAnswer.toLowerCase() !== "Y") 
    {
        calculating = false;
    }
}



//7
let input = prompt("Enter number:");
let shift = parseInt(prompt("shift (enter number)?"));
let length_num = input.length;

shift = shift % length_num;
let shifted_number = input.substring(shift) + input.substring(0, shift);

console.log(`result: ${shifted_number}`);



//8
let days_week = ["Пн", "Вт", "Ср", "Чт", "Пт", "Сб", "Вс"];
let next_day = true;
let index = 0;

while (next_day) 
{
    let userInput = confirm(`${days_week[index]}. Next day?`);
    if (input) 
    {
        index = (index + 1) % days_week.length;
    } else { next_day = false; }
}


//9
for (let i = 2; i <= 9; i++) 
{
    console.log(`Multiplication table by ${i}:`);
    for (let j = 1; j <= 10; j++) 
    {
        console.log(`${i} * ${j} = ${i * j}`);
    }
    console.log('\n');
}

//10
let min = 0;
let max = 100;
let guess = false;

while (!guess) 
{
    let middle = Math.floor((min + max) / 2);
    let input = prompt(`Your number > ${middle}, < ${middle} or == ${middle}? (Enter >, <, or =)`);

    if (input === ">") 
    {
        min = middle + 1;
    } 
    else if (input === "<") 
    {
        max = middle - 1;
    } 
    else if (input === "=") 
    {
        guess = true;
        console.log(`Correct ${middle}`);
    } 
    else { console.log("Error"); }
}