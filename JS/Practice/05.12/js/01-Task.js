// Refactor

class Car {

    #_year;
    #_model;

    constructor(year, model) {

        this.#_year = year;
        this.#_model = model;
    }
    showInfo() {

        console.log(`Year: ${this.#_year} \n Model: ${this.#_model}`);
    }
    get _year() {

        return this.#_year;
    }
    set _year(year) {

        this.#_year = year;
    }
    get _model() {

        return this.#_model;
    }
    set _model(model) {

        this.#_model = model;
    }
}

let testCar = new Car(2000, "Nissan Leaf");
testCar.showInfo();