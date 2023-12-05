class Cylinder {

    #_heigh;
    #_radius;

    constructor(heigh, radius) {

        this.#_heigh = heigh;
        this.#_radius = radius;
    }
    get volume() {

        return (Math.PI * Math.pow((this.#_radius), 2)) * this.#_heigh;
    }
}

let testCylOne = new Cylinder(10, 90);
let testCylTwo = new Cylinder(90, 10);

console.log(`Cylidner One: ${testCylOne.volume} \n Cylidner Two: ${testCylTwo.volume}`);