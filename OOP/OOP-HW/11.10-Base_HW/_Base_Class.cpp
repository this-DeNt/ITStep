#include "_Base_Class.h"

Base::Base(size_t _fInput, size_t _pInput, size_t _gInput, size_t _vInput)
{
    _fuel = _fInput;
    _people = _pInput;
    _goods = _gInput;
    _vehicle = _vInput;
}

void Base::setGoods(size_t _gInput)
{
    _goods = _gInput;
}

void Base::setFuel(size_t _fInput)
{
    _fuel = _fInput;
}

void Base::setPeople(size_t _pInput)
{
    _people = _pInput;
}

void Base::setVeh()
{
    _vehicle += 1;
}

size_t Base::getPeople()
{
    return size_t();
}

size_t Base::getFuel()
{
    return size_t();
}

size_t Base::getGoods()
{
    return size_t();
}

size_t Base::getVeh()
{
    return size_t();
}
