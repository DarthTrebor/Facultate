#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <crtdbg.h>
#include "offer.h"
#include "List.h"
#include "utils.h"
#include "offersRepository.h"
#include "offersService.h"
#include "ui.h"
#include "testOffersRepo.h"
#include "testOffersService.h"
#pragma warning(disable:4996)

void testAll() {
	testAddOffer();
	testPopOffer();
	testModOffer();
	testAddOfferService();
	testPopOfferService();
	testModOfferService();
	testGetSortedListByPriceAndType();
	testGetFilteredListByCriteria();
}

int main() {
	testAll();
	
	List o = createList();
	ui(&o);
	
	_CrtDumpMemoryLeaks();
	return 0;
}
