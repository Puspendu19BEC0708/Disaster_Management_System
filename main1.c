#include<reg52.h>
sbit LED_pin=P2^0;
sbit Sensor_pin=P0^0;
void delay(int);
void main(void){
	Sensor_pin=1;
	LED_pin=0;
	while(1){
		if(Sensor_pin==1){
			  //LED_pin=0;
			  //delay(200000);
			  LED_pin=1;
			}
		else{
			 LED_pin=0;
		
		
		}
	
	
	
	
	}
	
	



}
void delay(int k){
	int i;
	int j;
	for(i=0;i<k;i++){
		for(j=0;j<100;j++){
			
		
		
		}
	
	
	}
	 




}
