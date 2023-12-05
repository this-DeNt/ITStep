// Task 1

function Car() {

    this.manu = "Nissan";
    this.model = "Leaf";
    this.year = 2005;
    this.speed = 10;
}

Car.prototype.printSpecs = function() {

    console.log(`
        Manufacturer: ${this.manu} \n 
        Model: ${this.model} \n
        Year: ${this.year} \n
        Velocity: ${this.speed} km/h\n
        `);
}

Car.prototype.time = function() {

    // Insert math code here
}

// Task 2

function Fraction() {

    this.numerator = 1;
    this.denomenator = 2;   
}