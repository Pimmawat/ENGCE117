//Pimmawat Saita 65543206029-2 Sec2
//https://www.youtube.com/watch?v=gmeSJpFxf50

#include<stdio.h>
#include<string.h>

struct rodfai{
	int bowky ;
	struct rodfai *next ;
};

void showAll(struct  rodfai *huarodfai) {
	
  struct rodfai *temp = huarodfai;
  while (temp != NULL) {
    printf("%d ", temp -> bowky);
    temp = temp -> next;
  }
  printf(" ");
  
}

void addNode(struct rodfai **driver , int passenger){
	
	struct rodfai *ticketseller = *driver;
	struct rodfai *ticketseller2 = NULL;
	
	while (ticketseller != NULL ){
		ticketseller2 = ticketseller;
		ticketseller = ticketseller->next;
	}
	
	struct rodfai *newRodfai = new rodfai;
	newRodfai->bowky = passenger;
	newRodfai->next = NULL;
	
	if ( *driver == NULL ){
		*driver = newRodfai;
		return;
	}
	
	ticketseller2->next = newRodfai;
	
}

void updateNode(struct rodfai **driver ,int passenger, int NewPassenger){
	
	while((*driver)->bowky == passenger){
		(*driver)->bowky = NewPassenger;
	}
	
}

void showBack(struct rodfai *driver) {
	
  if (driver == NULL){
	return;
  }
  showBack(driver -> next);
  printf("%d ", driver -> bowky);
  
}

struct rodfai swapNode(struct rodfai **driver, int passenger, int passenger2) {
    struct rodfai *prevPassenger = NULL;
    struct rodfai *currPassenger = *driver;
    struct rodfai *prevPassenger2 = NULL;
    struct rodfai *currPassenger2 = *driver;

    while (currPassenger != NULL && currPassenger->bowky != passenger) {
        prevPassenger = currPassenger;
        currPassenger = currPassenger->next;
    }

    while (currPassenger2 != NULL && currPassenger2->bowky != passenger2) {
        prevPassenger2 = currPassenger2;
        currPassenger2 = currPassenger2->next;
    }

    if (currPassenger == NULL || currPassenger2 == NULL) {
        return **driver;
    }

    if (prevPassenger != NULL) {
        prevPassenger->next = currPassenger2;
    } else { 
        *driver = currPassenger2;
    }

    if (prevPassenger2 != NULL) {
        prevPassenger2->next = currPassenger;
    } else {
        *driver = currPassenger;
    }


    struct rodfai *temp = currPassenger->next;
    currPassenger->next = currPassenger2->next;
    currPassenger2->next = temp;

    return **driver;
}


int main(){
	
	struct rodfai *driver;
	
	driver = NULL;
		
	addNode(&driver , 10);
	addNode(&driver , 20);
	addNode(&driver , 30);
	addNode(&driver , 40);
	printf("\n Fuction AddNode\n");
	showAll(driver); //10, 20, 30, 40
	updateNode(&driver, 10, 99);
	printf("\n Function UpdateNode\n");
    showAll(driver); //99, 20, 30, 40
    updateNode( &driver, 10, 98);
    printf("\n");
    showAll(driver); //99, 20, 30, 40
    printf("\n Function ShowBack\n");
    showBack(driver); //40, 30, 20, 99
    printf("\n Function All\n");
    showAll(driver);
    printf("\n Function swapNode\n");
    swapNode(&driver, 20, 30);
    printf("\n");
    showAll(driver); //99, 30, 20, 40
    swapNode(&driver, 40, 99);
    printf("\n");
    showAll(driver); //40, 30, 20, 99
    
	return 0;
}


