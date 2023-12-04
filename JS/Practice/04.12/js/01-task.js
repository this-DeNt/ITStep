// Refactor

function User(firtsN, lastN) {

    this.firstName = firtsN;
    this.lastName = lastN;

    this.show = function() {

        console.log(`${this.firstName} ${this.lastName}`);
    }
}